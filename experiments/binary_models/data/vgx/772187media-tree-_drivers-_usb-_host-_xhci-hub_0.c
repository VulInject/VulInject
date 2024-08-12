static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
u16 VAR5, __le32 VAR6 *VAR7, u32 VAR8)
{

if (VAR2->VAR9 >= VAR10) {
FUN2(VAR4, ""
"");
return;
}

if (VAR4->VAR11 & VAR12) {
FUN2(VAR4,
"");
return;
}


FUN3(VAR8 | VAR13, VAR7);
VAR8 = FUN4(VAR7);
FUN2(VAR4, "",
VAR5, VAR8);
}