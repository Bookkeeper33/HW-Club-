#include "list.h"

List::List(int capacity, double multiplier) {
    this->capacity = capacity;
    this->multiplier = multiplier;
    this->current = 0;
    this->array = (int*)malloc(capacity * sizeof(int));

    if ( this->array == NULL ) {
        throw OutOfMemoryException();
    }
}

List::~List() {
    free(this->array);
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

    if ( index > this->current ||  index >= this->current ) {
        return;
    }

    for ( int i = index; i < this->current; i++ ) {
        this->array[i] = this->array[i+1];
    }

    this->current -= 1;
}

void List::insert(int index, int value) {
    int newCurrent = this->current + 1;

    if ( index > this->current || index < 0 ) {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    if ( newCurrent > this->capacity ) {
        int newCapacity = this->capacity * this->multiplier;
        int* newArray = (int*)realloc(this->array, sizeof(int) *newCapacity);

        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }

        this->capacity = newCapacity;
        this->array = newArray;
    }

    for ( int i = this->current; i > index; i-- ) {
        this->array[i] = this->array[i-1]; 
    }
    this->array[index] = value;
    this->current = newCurrent;
}

int List::find(int value) const {
    for ( int i = 0; i < this->capacity; i++ ) {
        if ( this->array[i] == value ) {
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
    return this->array[this->current];
}

void List::sort() {
    for ( int i = 0; i < this->current; i++ ) {
        int min = i;

        for ( int j = i + 1; j < this->current; j++ ) {
            if ( this->array[j] < this->array[min] ) {
                min = j;
            }
        }

        if ( min != i ) {
            int buffer = this->array[i];

            this->array[i] = this->array[min];
            this->array[min] = buffer;
        }
    }
}

int List::operator[](int index) const {
    return this->array[index];
}

bool List::operator==(const List& other) const {
    for ( int i = 0; this->array[i] == other.array[i]; i++ ) {
        if ( i == this->current - 1 ) {
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