FUN1 (void)
{
int VAR1;

if (VAR2 == 0)
return;

VAR1 = open ("", VAR3);
if (VAR1 > 0)
{
void (*VAR4) ();

VAR4 = (void (*)()) signal (VAR5, VAR6);
FUN2 (VAR1, VAR7, 0);
close (VAR1);
signal (VAR5, VAR4);
}


VAR1 = open (VAR2, VAR3 | VAR8);
if (VAR1 == -1)
{
FUN3 (VAR2, VAR9);
FUN4 (1);
}


if (VAR1 != 0)
{
close (0);
FUN5 (VAR1);
}
if (VAR1 != 1)
{
close (1);
FUN5 (VAR1);
}
if (VAR1 != 2)
{
close (2);
FUN5 (VAR1);
}
if (VAR1 > 2)
close (VAR1);
}