static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
int VAR5 = 0;

FUN3(&VAR4->VAR6.VAR7);

if (!FUN4(0, &VAR4->VAR8)) {
FUN5((unsigned long)&VAR4->VAR6);

switch (VAR2->VAR9) {
case VAR10:
case VAR11:
if (VAR4->VAR12 != 0)
FUN6(VAR4);
break;
case VAR13:
if (VAR4->VAR14 != 0)
FUN7(VAR4);
break;
default:
VAR5 = -VAR15;
}

FUN8(0, &VAR4->VAR8);
FUN9();
}

FUN10(&VAR4->VAR6.VAR7);

return VAR5;
}