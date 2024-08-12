int FUN1(
struct VAR1 *VAR2,
const VAR3 *VAR4,
const wchar_t *VAR5)
{
FUN2(VAR2,
VAR4->VAR6,
VAR4->VAR7,
VAR4->VAR8,
VAR4->VAR9,
VAR4->VAR10,
VAR4->VAR11);

if (VAR4->VAR6 & VAR12 && VAR5) {
git_win32_path VAR13;

if (FUN3(VAR13, VAR5) >= 0) {
VAR2->VAR14 = (VAR2->VAR14 & ~VAR15) | VAR16;


if ((VAR2->VAR17 = FUN4(NULL, 0, VAR13)) < 0) {
FUN5(VAR18, "", VAR5);
return -1;
}
}
}

return 0;
}