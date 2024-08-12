static void FUN1()
{
unsigned long VAR1 = 5;

void *VAR2 =
FUN2(NULL, VAR1 * VAR3, VAR4 | VAR5,
VAR6 | VAR7, -1, 0);
FUN3(VAR2 == VAR8, "");

memset(VAR2, '', VAR1 * VAR3);


void *VAR9 =
FUN4(VAR2, VAR1 * VAR3, VAR1 * VAR3,
VAR10 | VAR11, NULL);
FUN3(VAR9 == VAR8, "");



FUN3(VAR12
(VAR9, VAR1 * VAR3, '') != 0,
"");
FUN3(VAR12
(VAR2, VAR1 * VAR3, 0) != 0,
"");

FUN3(FUN5(VAR9, VAR1 * VAR3) == -1,
"");
FUN3(FUN5(VAR2, VAR1 * VAR3) == -1,
"");
}