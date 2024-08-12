int FUN1(struct VAR1 *VAR2,
char *VAR3, size_t VAR4)
{
const struct VAR5 *VAR6 = VAR2->VAR7;
int VAR8;

if (VAR6->VAR9) {
VAR8 = VAR6->FUN2(VAR2, VAR3, VAR4);
if (VAR8 != -VAR10)
return VAR8;
}
return FUN3(VAR2, VAR3, VAR4);
}