static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR1 *VAR7;
int VAR8, VAR9 = -VAR10;

if (!VAR4->VAR11[VAR12])
return -VAR13;
VAR8 = FUN2(VAR4->VAR11[VAR12]);

FUN3(&VAR14);
FUN4(VAR6, &VAR15, VAR16) {
if (VAR6->VAR8 != VAR8)
continue;

VAR7 = FUN5(VAR17, VAR18);
if (!VAR7) {
VAR9 = -VAR19;
goto VAR20;
}

VAR9 = FUN6(VAR7, VAR6, VAR4->VAR21,
VAR4->VAR22, NULL, 0);
if (VAR9 < 0) {
FUN7(VAR7);
goto VAR20;
}

VAR9 = FUN8(VAR7, VAR4);
break;
}

VAR20:
FUN9(&VAR14);

return VAR9;
}