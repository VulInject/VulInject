static void FUN1(unsigned long VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
unsigned long VAR4;
unsigned long VAR5;

FUN2(&VAR3->VAR6.VAR7, VAR4);

VAR5 = VAR3->VAR6.VAR8;

if (VAR5 > 0 && !FUN3(VAR5, VAR9)) {
VAR3->VAR6.VAR8 = 0;
FUN4(VAR3, VAR3->VAR6.VAR10 ?
(VAR11 | VAR12) : VAR11);
}

FUN5(&VAR3->VAR6.VAR7, VAR4);
}