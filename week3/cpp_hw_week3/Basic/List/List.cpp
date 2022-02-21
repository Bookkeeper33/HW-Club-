#include "List.h"

List::List(int capacity, double multiplier) {
    this->capacity = capacity;
    this->multiplier = multiplier;
    this->current = 0;
    
    array = (int*)malloc(capacity * sizeof(int));

    if ( array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity;
}

void List::erase(int index) {
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }

    if ( index < 0 || index >= this->current ) {
        std::cout << "Invalid erasing index. Plz try again." << std::endl;
        return;
    }

    for ( int i = index; i < this->current; i++ ) {
        this->array[i] = this->array[i+1];
    }
    this->current -= 1;
}

void List::insert(int value, int index) {
    int newCurrent = this->current + 1;

    if ( newCurrent > this->capacity ) {
        int newCapacity = this->capacity * this->multiplier;
        int *newArray = (int*)realloc(this->array, newCapacity * sizeof(int));

        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }

        this->capacity = newCapacity;
        this->array = newArray;
    }

    if ( index >= 0 && index <= this->current ) {
        for ( int i = this->current; i > index; i-- ) {
            this->array[i] = this->array[i-1];
        }

        this->array[index] = value; 
        this->current = newCurrent;
    } else {
        std::cout << "Wrong index to insert" << std::endl;
        return;
    }
}

int List::find(int value) const {
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }
    
    for ( int i = 0; i < this->current; i++ ) {
        if ( value == this->array[i] ) {
            return i;
        }
    }
    return -1;
}

void List::push_back(int value) {
    int newCurrent = this->current + 1;

    if ( newCurrent > capacity ) {
        int newCapacity = this->capacity * this->multiplier;
        int *newArray = (int*)realloc(this->array, newCapacity * sizeof(int));

        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }

        this->capacity = newCapacity;
        this->array = newArray;
    }

    this->array[this->current] = value;
    this->current = newCurrent;
}

int List::pop_back() {
    if ( this->current == 0 ) {
        throw ZeroLenException();
    }

    this->current -= 1;
    return this->array[current];
}

void List::sort() {
    int last = this->current - 1;
    int checked = 0;

    for ( int i = 0; i < last && !checked; i++ ) {
        int limit = last - i;

        checked = 1;
        
        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( this->array[next] < this->array[j] ) {
                int buffer = this->array[j];

                this->array[j] = this->array[next];
                this->array[next] = buffer;
                checked = 0;
            }
        }
    }
}

int List::operator[](int index) const {
    return this->array[index];
}

bool List::operator==(const List& other) const {
    for ( int i = 0; this->array[i] == other.array[i]; i++ ) {
        int last = this->current - 1;
        
        if ( i == last) {
            return true;
        }
    }
    return false;
}

bool List::operator!=(const List& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& out, const List& list) {
    int last;

    if ( list.size() == 0 ) {
        throw ZeroLenException();
    }

    last = list.size() - 1;

    for ( int i = 0; i < last; i++ ) {
        out << list[i] << " ";
    }
    out << list[last];
    return out;
}
