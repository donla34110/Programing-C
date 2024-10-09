#include <stdio.h>
int main ()
{
  char username[80], password[10];
  int r;
  FILE *pF_login;
  pF_login = fopen ("DBlogin2.txt","r+");
  r = fscanf (pF_login, "%s %s", username, password);
  while(r != EOF)
  {
  	printf ("----- Data Login -----\n");
  	printf ("Username : %s\n",username);
  	printf ("Password : %s\n\n",password);
  	r = fscanf (pF_login, "%s %s", username, password);
  }
  fclose (pF_login);
  return 0;
}
