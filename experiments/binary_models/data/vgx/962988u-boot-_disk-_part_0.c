int FUN1(struct VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;

if (FUN2()) {

VAR5->VAR8[0] = 0;
VAR5->VAR9[0] = 0;

VAR7 = FUN3(VAR2);
if (!VAR7) {
FUN4("",
VAR2->VAR10);
return -VAR11;
}
if (!VAR7->VAR12) {
FUN5("",
VAR7->VAR13);
return -VAR14;
}
if (VAR7->FUN6(VAR2, VAR3, VAR5) == 0) {
FUN5("", VAR7->VAR13);
return 0;
}
}

return -VAR15;
}