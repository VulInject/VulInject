static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR1 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7;
struct VAR8 *new;
int VAR9 = 0;

FUN3(VAR5 ? VAR5 : VAR2);
FUN4(VAR7, VAR5 ? VAR5 : VAR2) {
new = FUN5(sizeof(*new), VAR10);
if (!new) {
VAR9 = -VAR11;
break;
}

FUN6(new->VAR12, VAR7->VAR12);
FUN7(&new->VAR13, VAR4);
VAR9++;
}
FUN8(VAR5 ? VAR5 : VAR2);

if (VAR5)
FUN9(VAR5);

return VAR9;
}