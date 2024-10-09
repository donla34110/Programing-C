#include <stdio.h>
int main ()
{
  char username[80], password[10];

  FILE *pF_login;
  pF_login = fopen ("DBlogin.txt","r+");
  fscanf (pF_login, "%s %s", username, password);
  fclose (pF_login);
  printf ("----- Data Login -----\n");
  printf ("Username : %s\n",username);
  printf ("Password : %s\n",password);
  return 0;
}
