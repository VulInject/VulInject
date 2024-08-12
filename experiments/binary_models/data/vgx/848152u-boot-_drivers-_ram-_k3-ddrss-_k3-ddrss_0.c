static int FUN1(struct VAR1 *VAR2)
{
u32 VAR3;
int VAR4;
VAR5 *VAR6 = &VAR2->VAR6;

VAR3 = FUN2(VAR6);

switch (VAR3) {
case VAR7:

VAR4 = FUN3(&VAR2->VAR8, VAR2->VAR9);
break;
case VAR10:
VAR4 = FUN3(&VAR2->VAR8, VAR2->VAR11);
break;
default:
VAR4 = -VAR12;
FUN4("");
}

if (VAR4 < 0)
FUN5(VAR2->VAR13, "", VAR4);
else
VAR4 = 0;

return VAR4;
}