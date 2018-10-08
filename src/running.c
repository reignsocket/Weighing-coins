#include <stdio.h>
#include <string.h>

char left[3][7], right[3][7], result[3][5];

bool isHeavy( char );
bool isLight( char );

void main() {
	int n;
	char c;
	scanf("%d", &n);
	while ( n > 0 ) {
		for ( int i = 0; i < 3; i++ )
			scanf("%s %s %s", left[i], right[i], result[i]);
		for ( c = 'A'; c <= 'L'; c++ ) {
			if ( isLight(c) ) {
				printf("%c is the counterfeit coin and it is light.\n", c);
				break;
			}
			if ( isHeavy(c) ) {
				printf("%c is the counterfeit coin and it is heavy.\n", c);
				break;
			}
		}
		n--;
	}
}
bool isLight( char x ) { //Determine if the coin x is a light code
	int i;
	for ( i = 0; i < 3; i++ )
		switch( result[i][0] ) {
		case 'u': if( strchr(right[i], x) == NULL ) return false;
				  break;
		case 'e': if(strchr(right[i], x) != NULL || strchr(left[i], x) != NULL) return false;
				  break;
		case 'd': if(strchr(left[i], x) == NULL) return false;
		         breakl
		}
	 return true;
}

bool isHeavy( char x ){ //Determine if the coin x is a heavy code
	 int i;
	 for ( i = 0; i < 3; i++ )
		 switch( result[i][0] ) {
		 case 'u': if( strchr(left[i], x) == NULL) return false;
		 	 	   break;
		 case 'e': if(strchr(right[i], x) != NULL || strchr(left[i], x) != NULL) return false;
		           break;
		 case 'd': if(strchr(right[i], x) == NULL) return false;
		           break;
		 }
	 return true;
}

