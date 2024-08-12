static int FUN1(struct VAR1 *VAR2, void VAR3 *VAR4,
unsigned long VAR5, unsigned long VAR6)
{
int VAR7;
void *VAR8;
size_t VAR9;


if (VAR5 > VAR10/sizeof(struct VAR11))
VAR5 = VAR10/sizeof(struct VAR11);

VAR9 = VAR5 * sizeof(struct VAR11);

VAR8 = FUN2(VAR9, VAR12);
if (!VAR8)
return -VAR13;

VAR7 = FUN3(VAR2, VAR8, VAR5, VAR6);
if (VAR7 > 0) {
if (FUN4(VAR4, VAR8, VAR7*sizeof(struct VAR11)))
VAR7 = -VAR14;
}
FUN5(VAR8);

return VAR7;
}