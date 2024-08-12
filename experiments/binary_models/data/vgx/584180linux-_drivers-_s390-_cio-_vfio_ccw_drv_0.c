int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(&VAR2->VAR5);
struct VAR6 *private = FUN2(&VAR4->VAR5);
FUN3(VAR7);
int VAR8, VAR9 = 0;


if (FUN4(!private))
return 0;

VAR8 = 255;
do {

VAR9 = FUN5(VAR2, &VAR8);

if (VAR9 == -VAR10) {
FUN6("",
VAR2->VAR11.VAR12, VAR2->VAR11.VAR13);
break;
}


private->VAR7 = &VAR7;
FUN7(VAR2->VAR14);

if (VAR9 == -VAR15)
FUN8(&VAR7, 3*VAR16);

private->VAR7 = NULL;
FUN9(VAR17);
FUN10(VAR2->VAR14);
VAR9 = FUN11(VAR2);
} while (VAR9 == -VAR15);

return VAR9;
}