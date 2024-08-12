static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(&VAR2->VAR8, sizeof(struct VAR5),
VAR9);
if (VAR6 == NULL)
return -VAR10;

VAR6->VAR11 = FUN3(VAR2, &VAR12);
if (FUN4(VAR6->VAR11)) {
VAR7 = FUN5(VAR6->VAR11);
FUN6(&VAR2->VAR8, "", VAR7);
return VAR7;
}

FUN7(VAR2, VAR6);

VAR7 = FUN8(&VAR2->VAR8,
&VAR13, &VAR14, 1);

return VAR7;
}