static void FUN1(int VAR1)
{
unsigned long VAR2 = VAR3 - VAR4;

if (FUN2(VAR5, &VAR6))
return;


if (VAR1) {
if (FUN3(VAR5, &VAR6))
return;
VAR2 = 0;
}


if (VAR2 > VAR7)
VAR2 = 0;


if (FUN2(VAR5, &VAR6))
FUN4(VAR8, &VAR9, 0);
else
FUN5(&VAR9, VAR2);
}