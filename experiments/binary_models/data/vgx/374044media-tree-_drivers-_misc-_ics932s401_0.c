static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(sizeof(struct VAR5), VAR8);
if (!VAR6) {
VAR7 = -VAR9;
goto VAR10;
}

FUN3(VAR2, VAR6);
FUN4(&VAR6->VAR11);

FUN5(&VAR2->VAR12, "", VAR2->VAR13);


VAR6->VAR14.VAR14 = VAR15;
VAR7 = FUN6(&VAR2->VAR12.VAR16, &VAR6->VAR14);
if (VAR7)
goto VAR17;

return 0;

VAR17:
FUN7(VAR6);
VAR10:
return VAR7;
}