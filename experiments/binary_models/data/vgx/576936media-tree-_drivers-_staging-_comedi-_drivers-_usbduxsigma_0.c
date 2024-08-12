static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
unsigned int VAR5)
{
struct VAR6 *VAR7 = VAR2->private;
struct VAR8 *VAR9 = &VAR4->VAR10->VAR9;
int VAR11;

if (VAR5 != VAR9->VAR12)
return -VAR13;

FUN2(&VAR7->VAR14);
if (!VAR7->VAR15) {
VAR7->VAR15 = 1;
VAR11 = FUN3(VAR2, VAR7->VAR16,
VAR7->VAR17, 0);
if (VAR11 < 0) {
VAR7->VAR15 = 0;
FUN4(&VAR7->VAR14);
return VAR11;
}
VAR4->VAR10->VAR18 = NULL;
}
FUN4(&VAR7->VAR14);

return 1;
}