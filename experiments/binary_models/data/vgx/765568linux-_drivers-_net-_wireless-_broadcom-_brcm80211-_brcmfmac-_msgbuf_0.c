static void FUN1(struct VAR1 *VAR2)
{
u32 VAR3;

VAR3 = VAR2->VAR4 - VAR2->VAR5;
VAR3 = FUN2(VAR2, false, VAR3);
VAR2->VAR5 += VAR3;
}