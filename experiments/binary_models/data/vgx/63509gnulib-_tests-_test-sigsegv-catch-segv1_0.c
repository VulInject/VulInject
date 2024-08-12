main ()
{
int VAR1;
void *VAR2;


VAR3 = open ("", VAR4, 0644);


VAR1 = VAR5;
VAR1 = VAR6;


VAR2 = FUN1 ((void *) 0x12340000, 0x4000);
if (VAR2 == (void *)(-1))
{
fprintf (VAR7, "");
FUN2 (2);
}
VAR8 = (VAR9) VAR2;


if (FUN3 ((void *) VAR8, 0x4000, VAR1) < 0)
{
fprintf (VAR7, "");
FUN2 (2);
}

if (FUN3 ((void *) VAR8, 0x4000, VAR10) < 0
|| FUN3 ((void *) VAR8, 0x4000, VAR1) < 0)
{
fprintf (VAR7, "");
FUN2 (2);
}


FUN4 (&VAR11);


FUN5 (VAR8);

FUN5 (VAR8);


if (VAR12 != 1)
FUN2 (1);

FUN6 ("");
return 0;
}