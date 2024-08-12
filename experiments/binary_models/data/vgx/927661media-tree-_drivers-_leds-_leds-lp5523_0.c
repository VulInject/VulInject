static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
char *VAR6, int VAR7)
{
struct VAR8 *VAR9 = FUN2(FUN3(VAR3));
struct VAR10 *VAR11 = VAR9->VAR11;
int VAR12;
u8 VAR13;

FUN4(&VAR11->VAR14);
VAR12 = FUN5(VAR11, VAR15 + VAR7 - 1, &VAR13);
FUN6(&VAR11->VAR14);

if (VAR12 == 0)
VAR12 = sprintf(VAR6, "", VAR13);

return VAR12;
}