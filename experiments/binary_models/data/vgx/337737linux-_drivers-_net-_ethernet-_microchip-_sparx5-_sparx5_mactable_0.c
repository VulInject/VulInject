static struct VAR1 *FUN1(struct VAR2 *VAR2,
const unsigned char *VAR3,
u16 VAR4, u16 VAR5)
{
struct VAR1 *VAR6;
struct VAR1 *VAR7 = NULL;

FUN2(&VAR2->VAR8);
FUN3(VAR6, &VAR2->VAR9, VAR10) {
if (VAR6->VAR4 == VAR4 &&
FUN4(VAR3, VAR6->VAR3) &&
VAR6->VAR11 == VAR5) {
VAR7 = VAR6;
break;
}
}
FUN5(&VAR2->VAR8);

return VAR7;
}