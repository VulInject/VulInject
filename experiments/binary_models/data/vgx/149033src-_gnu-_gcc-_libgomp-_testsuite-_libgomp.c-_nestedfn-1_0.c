main (void)
{
int VAR1 = 1, VAR2 = 2, VAR3 = 3;
void
FUN1 (void)
{
int VAR4 = 0;
FUN2 (2) FUN3 (||:VAR4)
{
if (VAR1 != 1 || VAR3 != 3) VAR4 = 1;
if (FUN4 () == 0)
{
VAR1 = 4;
VAR2 = 5;
VAR3 = 6;
}
if (FUN4 () == 1)
{
if (VAR1 != 4 || VAR3 != 3) VAR4 = 1;
VAR1 = 7;
VAR2 = 8;
VAR3 = 9;
}
else if (FUN5 () == 1)
VAR1 = 7;
if (FUN4 () == 0)
if (VAR1 != 7 || VAR2 != 5 || VAR3 != 6) VAR4 = 1;
if (FUN4 () == 1)
if (VAR1 != 7 || VAR2 != 8 || VAR3 != 9) VAR4 = 1;
}
if (VAR4)
FUN6 ();
}
FUN1 ();
if (VAR1 != 7)
FUN6 ();
return 0;
}