static int FUN1(struct VAR1 *VAR2,
u8 VAR3, u16 VAR4, u16 VAR5,
char *VAR6, unsigned VAR7)
{
int VAR8;

FUN2(&VAR2->VAR2, "", VAR9,
VAR3, VAR4, VAR5, VAR7);

VAR8 = FUN3(VAR2, 0, VAR3,
VAR10 | VAR11 | VAR12,
VAR4, VAR5, VAR6, VAR7, VAR13,
VAR14);
if (VAR8) {
FUN4(&VAR2->VAR2, "",
VAR8);
return VAR8;
}

return 0;
}