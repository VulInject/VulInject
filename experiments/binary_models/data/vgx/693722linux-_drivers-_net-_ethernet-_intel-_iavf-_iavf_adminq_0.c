void FUN1(struct VAR1 *VAR2, u16 VAR3)
{

memset((void *)VAR2, 0, sizeof(struct VAR1));
VAR2->VAR3 = FUN2(VAR3);
VAR2->VAR4 = FUN2(VAR5);
}