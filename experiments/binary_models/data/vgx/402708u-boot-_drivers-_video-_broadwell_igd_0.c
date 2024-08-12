static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);
bool VAR7;
ulong VAR8;
int VAR9;

if (!FUN4()) {

FUN5("");
return -VAR10;
}
VAR7 = FUN6() == VAR11;
FUN7(VAR12, "");
FUN8("", VAR13, VAR7);
VAR9 = FUN9(VAR2, VAR7);
if (!VAR9) {
VAR9 = FUN10(VAR2, VAR14);
if (VAR9)
FUN8("", VAR9);
}
if (!VAR9)
VAR9 = FUN11(VAR2, VAR7);
FUN12(VAR12);
if (VAR9)
return VAR9;


VAR8 = FUN13(VAR15) ? VAR4->VAR16 : VAR4->VAR17;
VAR9 = FUN14(VAR18, VAR8, 256 << 20);
if (!VAR9)
VAR9 = FUN15(true);
if (VAR9 && VAR9 != -VAR19) {
FUN5("",
VAR9);
}

FUN8("", VAR4->VAR17,
VAR4->VAR20, VAR6->VAR21, VAR6->VAR22, VAR6->VAR23);

return 0;
}