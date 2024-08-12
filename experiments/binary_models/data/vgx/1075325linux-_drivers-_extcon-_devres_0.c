}
FUN1(VAR1);


int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR5,
unsigned int VAR6, struct VAR7 *VAR8)
{
struct VAR9 *VAR10;
int VAR11;

VAR10 = FUN3(VAR12, sizeof(*VAR10),
VAR13);
if (!VAR10)
return -VAR14;

VAR11 = FUN4(VAR5, VAR6, VAR8);
if (VAR11) {
FUN5(VAR10);
return VAR11;
}

VAR10->VAR5 = VAR5;
VAR10->VAR6 = VAR6;
VAR10->VAR8 = VAR8;
FUN6(VAR3, VAR10);

return 0;
}