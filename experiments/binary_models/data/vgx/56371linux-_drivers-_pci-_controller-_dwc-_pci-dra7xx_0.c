static int FUN1(struct VAR1 *VAR2,
u32 VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8;
unsigned int VAR9;
u32 VAR10;
u32 VAR11;

VAR8 = FUN2(VAR5, "");
if (FUN3(VAR8)) {
FUN4(VAR2, "");
return -VAR12;
}

if (FUN5(VAR5, "", 1,
&VAR9)) {
FUN4(VAR2, "");
return -VAR12;
}

VAR10 = VAR3 | VAR13;
VAR11 = VAR14 | VAR13;
FUN6(VAR8, VAR9, VAR10, VAR11);

return 0;
}