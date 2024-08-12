static int FUN1(struct VAR1 *VAR2, const char *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
struct VAR8 *VAR9;
struct resource VAR10;
int VAR11;

VAR9 = FUN2(VAR7->VAR12, VAR3, 0);
if (!VAR9) {
FUN3(VAR7, "", VAR3);
return -VAR13;
}

VAR11 = FUN4(VAR9, 0, &VAR10);
FUN5(VAR9);
if (VAR11)
return VAR11;

VAR5->VAR14 = VAR10.VAR15;
VAR5->VAR16 = FUN6(&VAR10);

return 0;
}