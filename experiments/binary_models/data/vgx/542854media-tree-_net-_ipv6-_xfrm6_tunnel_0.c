static struct VAR1 *FUN1(struct VAR2 *VAR2, const VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR1 *VAR7;

FUN3(VAR7,
&VAR6->VAR8[FUN4(VAR4)],
VAR9) {
if (FUN5(&VAR7->VAR10, VAR4))
return VAR7;
}

return NULL;
}