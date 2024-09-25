// #include <string.h>

// size_t strlen (const char * str);
// char * strcpy (char * destination, const char * source);
// char * strcat ( char * destination, const char * source );
// int strcmp( const char * str1, const char * str2 );


#include <stdio.h>
#include <string.h>

// int main (){
//     char name[] = "RMUTT)";
//     int length = strlen(name);
//     printf("\"%s\"is %d characters string\n",name,length);
//     printf("Length of \" C Language\" is %d\n",strlen("C Language"));
// }

// int main ()
// {

// char name[] = "RMUTTO";
// printf ("CHAR\tDEC\n");
// for (int i = 0; i < strlen(name); i++) {

// printf("%c\t%d\n", name[i], name[i]);

// }
// return 0;

// }


// #include <stdio.h>
// #include <string.h>
// int main ()
// {

// char str1[] = "Com-Sci";
// char str2[20];
// strcpy(str2, str1);
// printf("str1 : %s\n", str1);
// printf("str2 : %s\n", str2);
// return 0;

// }

// int main ()
// {

// char str1[] = "Com-Sci";
// char str2[] = "RMUTTO";
// strcat(str1, str2);
// printf("%s", str1);
// return 0;

// }

int main ()
{

char str[] = "Com-Sci RMUTTO";
char search[] = "Sci";
char* result = strstr(str, search);
if ( result != NULL ) {

printf("Looking for \"%s\"\n", search);
printf("Found at position %d\n", result - str);

} else {

printf("Not found");

}
return 0;

}
