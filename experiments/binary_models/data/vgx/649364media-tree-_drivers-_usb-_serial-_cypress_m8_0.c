static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6;

if (!VAR2->VAR7 || !VAR2->VAR8) {
FUN2(&VAR2->VAR9, "");
return -VAR10;
}

VAR6 = FUN3(sizeof(struct VAR5), VAR11);
if (!VAR6)
return -VAR12;

VAR6->VAR13 = !0;
FUN4(&VAR6->VAR14);
if (FUN5(&VAR6->VAR15, VAR16, VAR11)) {
FUN6(VAR6);
return -VAR12;
}


if (!FUN7(VAR4->VAR9))
FUN8(VAR4->VAR9);

VAR6->VAR17 = 0;
VAR6->VAR18 = 0;
VAR6->VAR19 = 0;
VAR6->VAR20 = 0;

if (VAR2->VAR21 > 9)
VAR6->VAR22 = VAR23;
else
VAR6->VAR22 = VAR24;

if (VAR25 > 0) {
VAR6->VAR26 = VAR25;
VAR6->VAR27 = VAR25;
FUN9(&VAR2->VAR9, "",
VAR28, VAR25);
} else {
VAR6->VAR26 = VAR2->VAR7->VAR25;
VAR6->VAR27 = VAR2->VAR8->VAR25;
FUN9(&VAR2->VAR9, "",
VAR28, VAR6->VAR27,
VAR6->VAR26);
}
FUN10(VAR2, VAR6);

VAR2->VAR2.VAR29 = 256;

return 0;
}