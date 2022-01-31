#include <stdio.h>

int main() {
	int teamHome, teamAway;

	scanf("%d %d", &teamHome, &teamAway);

	if ( teamHome > teamAway) {
		printf("Home team wins\n");
	} else if ( teamHome < teamAway ) {
		printf("Away team wins");
	} else {
		printf("Draw");
	}

	return 0;
}
