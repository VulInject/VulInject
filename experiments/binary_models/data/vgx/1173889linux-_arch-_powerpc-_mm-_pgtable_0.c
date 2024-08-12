int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
VAR4 *VAR5, pte_t VAR6, int VAR7)
{
int VAR8;
VAR6 = FUN2(VAR6, VAR2, VAR7);
VAR8 = !FUN3(*(VAR5), VAR6);
if (VAR8) {
FUN4(VAR2->VAR9, VAR3);
FUN5(VAR2, VAR5, VAR6,
VAR3, VAR10);
}
return VAR8;
}