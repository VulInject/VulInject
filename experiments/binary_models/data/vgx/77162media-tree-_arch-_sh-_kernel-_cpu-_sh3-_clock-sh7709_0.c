static void FUN1(struct VAR1 *VAR1)
{
int VAR2 = FUN2(VAR3);
int VAR4 = ((VAR2 & 0x2000) >> 11) | (VAR2 & 0x0003);

VAR1->VAR5 *= VAR6[VAR4];
}