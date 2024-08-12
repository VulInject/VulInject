int FUN1(struct VAR1 *VAR2,
unsigned long VAR3, VAR4 *VAR5,
pte_t VAR6, int VAR7)
{
unsigned long VAR8;
int VAR9;

FUN2(VAR8);
VAR9 = !FUN3(*VAR5, VAR6);
if (VAR9) {
FUN4(VAR2->VAR10, VAR3, VAR5, VAR6);
}
FUN5(VAR8);
return VAR9;
}