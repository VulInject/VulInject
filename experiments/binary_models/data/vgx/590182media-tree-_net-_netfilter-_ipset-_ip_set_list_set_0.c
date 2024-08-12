static int
FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
const struct VAR5 *VAR6,
enum ipset_adt VAR7, struct VAR8 *VAR9)
{
struct ip_set_ext VAR10 = FUN2(VAR4, VAR9, VAR2);
int VAR11 = -VAR12;

FUN3();
switch (VAR7) {
case VAR13:
VAR11 = FUN4(VAR2, VAR4, VAR6, VAR9, &VAR10);
break;
case VAR14:
VAR11 = FUN5(VAR2, VAR4, VAR6, VAR9, &VAR10);
break;
case VAR15:
VAR11 = FUN6(VAR2, VAR4, VAR6, VAR9, &VAR10);
break;
default:
break;
}
FUN7();

return VAR11;
}