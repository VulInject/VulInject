static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
int VAR7;

VAR4 = FUN2(sizeof(*VAR4), VAR8);
if (!VAR4)
return -VAR9;

VAR7 = FUN3(&VAR2->VAR4, &VAR4->VAR10);
if (VAR7)
goto VAR11;

FUN4(&VAR4->VAR12, 0);
FUN5(&VAR4->VAR13);

VAR4->VAR6 = VAR14;
VAR6 = &VAR4->VAR6;
VAR6->VAR15 = &VAR4->VAR13;
VAR6->VAR10 = &VAR4->VAR10;

FUN6(VAR6, VAR4);
FUN7(&VAR4->VAR10,
"", VAR6->VAR16);

FUN8(VAR2, VAR4);

VAR4->VAR17 = FUN9(&VAR18);
if (FUN10(VAR4->VAR17)) {
FUN11(&VAR4->VAR10, "");
VAR7 = FUN12(VAR4->VAR17);
VAR4->VAR17 = NULL;
goto VAR19;
}

VAR4->VAR20.VAR4 = &VAR2->VAR4;
FUN13(VAR4->VAR20.VAR21, "", sizeof(VAR4->VAR20.VAR21));
FUN13(VAR4->VAR20.VAR22, "",
sizeof(VAR4->VAR20.VAR22));
FUN14(&VAR4->VAR20);
VAR4->VAR20.VAR23 = &VAR24;
VAR4->VAR10.VAR20 = &VAR4->VAR20;

VAR7 = FUN15(VAR6, VAR25, 0);
if (VAR7) {
FUN11(&VAR4->VAR10, "");
goto VAR26;
}

VAR7 = FUN16(VAR4->VAR17, VAR6,
VAR27);
if (VAR7) {
FUN11(&VAR4->VAR10, "");
goto VAR28;
}

VAR7 = FUN17(&VAR4->VAR20);
if (VAR7) {
FUN11(&VAR4->VAR10, "");
goto VAR29;
}
return 0;

VAR29:
FUN18(VAR4->VAR17);
VAR28:
FUN19(&VAR4->VAR6);

return VAR7;
VAR26:
FUN20(VAR4->VAR17);
VAR19:
FUN21(&VAR4->VAR10);
VAR11:
FUN22(VAR4);

return VAR7;
}