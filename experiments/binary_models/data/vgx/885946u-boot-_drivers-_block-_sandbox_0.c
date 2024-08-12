static unsigned long FUN1(struct VAR1 *VAR2,
unsigned long VAR3, lbaint_t VAR4,
const void *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct VAR1 *VAR8 = FUN3(VAR2);
struct VAR9 *VAR10 = FUN4(VAR8);

if (FUN5(VAR10->VAR11, VAR3 * VAR7->VAR12, VAR13) == -1) {
FUN6("", VAR3);
return -1;
}
ssize_t VAR14 = FUN7(VAR10->VAR11, VAR5, VAR4 * VAR7->VAR12);
if (VAR14 >= 0)
return VAR14 / VAR7->VAR12;

return -VAR15;
}