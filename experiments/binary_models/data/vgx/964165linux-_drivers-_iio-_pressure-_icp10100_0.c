static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
int VAR7;

if (!FUN2(VAR2->VAR8, VAR9)) {
FUN3(&VAR2->VAR10, "");
return -VAR11;
}

VAR4 = FUN4(&VAR2->VAR10, sizeof(*VAR6));
if (!VAR4)
return -VAR12;

FUN5(VAR2, VAR4);
VAR4->VAR13 = VAR2->VAR13;
VAR4->VAR14 = VAR15;
VAR4->VAR16 = VAR17;
VAR4->VAR18 = FUN6(VAR17);
VAR4->VAR19 = &VAR20;

VAR6 = FUN7(VAR4);
FUN8(&VAR6->VAR21);
VAR6->VAR2 = VAR2;
VAR6->VAR22 = VAR23;

VAR6->VAR24 = FUN9(&VAR2->VAR10, "");
if (FUN10(VAR6->VAR24))
return FUN11(VAR6->VAR24);

VAR7 = FUN12(VAR6);
if (VAR7)
return VAR7;

VAR7 = FUN13(&VAR2->VAR10,
VAR25, VAR6);
if (VAR7)
return VAR7;


FUN14(VAR26, VAR27);

VAR7 = FUN15(VAR6);
if (VAR7) {
FUN3(&VAR2->VAR10, "", VAR7);
return VAR7;
}


FUN16(&VAR2->VAR10);
FUN17(&VAR2->VAR10);
FUN18(&VAR2->VAR10);
FUN19(&VAR2->VAR10, 2000);
FUN20(&VAR2->VAR10);
FUN21(&VAR2->VAR10);
VAR7 = FUN13(&VAR2->VAR10, VAR28,
&VAR2->VAR10);
if (VAR7)
return VAR7;

return FUN22(&VAR2->VAR10, VAR4);
}