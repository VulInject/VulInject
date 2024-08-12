main (_GL_UNUSED int argc, char *argv[])
{
int VAR1;


FUN1 (system ("" VAR2 ""));


{
VAR3 = 0;
FUN2 (FUN3 (-1, "", 0700) == -1);
FUN2 (VAR3 == VAR4);
}
{
close (99);
VAR3 = 0;
FUN2 (FUN3 (99, "", 0700) == -1);
FUN2 (VAR3 == VAR4);
}


VAR1 = FUN4 (VAR5, false);
VAR6 = open ("", VAR7);
FUN2 (0 <= VAR6);
FUN2 (FUN4 (VAR5, false) == VAR1);


FUN2 (FUN3 (VAR6, VAR2 "", 0700) == 0);
FUN2 (FUN5 (VAR2 "") == 0);
FUN2 (close (VAR6) == 0);
VAR6 = open ("", VAR7);
FUN2 (0 <= VAR6);
FUN2 (FUN3 (VAR6, VAR2 "", 0700) == 0);
FUN2 (close (VAR6) == 0);
VAR3 = 0;
FUN2 (FUN3 (VAR6, VAR2 "", 0700) == -1);
FUN2 (VAR3 == VAR4);
VAR6 = open ("", VAR7);
FUN2 (0 <= VAR6);
VAR3 = 0;
FUN2 (FUN3 (VAR6, "", 0700) == -1);
FUN2 (VAR3 == VAR8);
FUN2 (close (VAR6) == 0);
FUN2 (FUN5 ("") == 0);
FUN2 (FUN6 (VAR2 "") == 0);
FUN2 (FUN6 (VAR2 "") == 0);

return VAR1;
}