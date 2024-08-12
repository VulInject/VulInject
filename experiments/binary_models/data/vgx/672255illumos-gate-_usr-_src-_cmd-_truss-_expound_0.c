void
FUN1(VAR1 *VAR2)
{
long VAR3;
int VAR4;
int VAR5 = 0;

if (VAR2->VAR6 < 2)
return;

VAR3 = VAR2->VAR7[0];
VAR4 = VAR2->VAR7[1];


if (VAR3 != 0 && VAR4 > 32) {
FUN2();
VAR5 = 1;
}

if (VAR3 != 0 && VAR4 > 0)
FUN3(VAR2, VAR3, VAR4);

if (VAR2->VAR6 > 2)
FUN4(VAR2, (long)VAR2->VAR7[2], "");

if (VAR2->VAR6 > 3)
FUN5(VAR2, (long)VAR2->VAR7[3], "");


if (VAR5)
FUN6();
}