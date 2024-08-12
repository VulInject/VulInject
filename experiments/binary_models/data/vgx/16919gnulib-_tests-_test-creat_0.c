main (void)
{
int VAR1;


unlink (VAR2 "");
unlink (VAR2 "");


VAR3 = 0;
FUN1 (creat ("", 0600) == -1);
FUN1 (VAR3 == VAR4 || VAR3 == VAR5 || VAR3 == VAR6
|| VAR3 == VAR7);


VAR1 = creat (VAR2 "", 0600);
FUN1 (0 <= VAR1);
FUN1 (close (VAR1) == 0);


VAR1 = creat (VAR2 "", 0700);
FUN1 (0 <= VAR1);
FUN1 (close (VAR1) == 0);


FUN1 (unlink (VAR2 "") == 0);
FUN1 (unlink (VAR2 "") == 0);

return 0;
}