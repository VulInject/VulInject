static void FUN1(struct VAR1 *VAR2,
unsigned int VAR3, unsigned int VAR4)
{
u32 VAR5, VAR6;

VAR5 = FUN2(VAR3);
VAR6 = FUN3(VAR3);

FUN4(VAR2, VAR7, VAR4 & 3);

FUN5(1);
FUN4(VAR2, VAR8 + (VAR5 * 4), FUN6(VAR6));
FUN5(1);
FUN4(VAR2, VAR8 + (VAR5 * 4), 0);
}