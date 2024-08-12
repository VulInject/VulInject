static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;
int VAR4;

VAR3 = FUN2(&VAR2->VAR5, sizeof(struct VAR3), VAR6);
if (!VAR3)
return -VAR7;

VAR3->VAR8 = FUN3(VAR2, &VAR9);
if (FUN4(VAR3->VAR8)) {
VAR4 = FUN5(VAR3->VAR8);
FUN6(&VAR2->VAR5, "", VAR4);
return VAR4;
}

FUN7(VAR2, VAR3);

VAR4 = FUN8(&VAR2->VAR5,
&VAR10, &VAR11, 1);
if (VAR4 != 0)
FUN6(&VAR2->VAR5, "", VAR4);

return VAR4;
}