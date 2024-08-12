static void
FUN1(void)
{
struct utmpx VAR1 = {.VAR2 = VAR3};
struct VAR4 *VAR5 = NULL;

if (!(VAR5 = FUN2(&VAR1))) {
VAR6 = VAR7;
} else {
VAR8 = VAR5->VAR9.VAR10;
}

FUN3();

if (VAR6 != 0 || VAR8 == 0)
VAR6 = -FUN4(&VAR8);
}