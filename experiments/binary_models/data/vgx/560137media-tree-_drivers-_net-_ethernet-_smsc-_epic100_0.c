static void FUN1(unsigned long VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
struct VAR4 *VAR5 = FUN2(VAR3);
void VAR6 *VAR7 = VAR5->VAR7;
int VAR8 = 5*VAR9;

if (VAR10 > 3) {
FUN3(VAR3, "",
FUN4(VAR11));
FUN3(VAR3, "",
FUN4(VAR12), FUN4(VAR13), FUN4(VAR14));
}

FUN5(VAR3);

VAR5->VAR15.VAR16 = VAR17 + VAR8;
FUN6(&VAR5->VAR15);
}