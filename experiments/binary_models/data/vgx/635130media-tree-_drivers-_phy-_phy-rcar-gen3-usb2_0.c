static void FUN1(struct VAR1 *VAR2)
{
void VAR3 *VAR4 = VAR2->VAR5;
u32 VAR6;

VAR6 = FUN2(VAR4 + VAR7);
FUN3(VAR6 | VAR8, VAR4 + VAR7);

FUN4(VAR2, 1, 1);
FUN5(VAR2, 1);
FUN6(VAR2, 0);

VAR6 = FUN2(VAR4 + VAR7);
FUN3(VAR6 & ~VAR8, VAR4 + VAR7);
}