static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = FUN2(&VAR1->VAR4);
u16 VAR5 = 0, VAR6 = 0;

int VAR7 = FUN3(VAR3);

if (!VAR7)
VAR7 = FUN4(VAR3, VAR8, &VAR5);
if (!VAR7)
VAR7 = FUN4(VAR3, VAR9, &VAR6);
if (VAR7) {
FUN5(&VAR1->VAR4, "");
return VAR7;
}

FUN6(&VAR1->VAR4, "",
VAR5, VAR6);

return VAR5 == VAR10 ? 0 : -VAR11;
}