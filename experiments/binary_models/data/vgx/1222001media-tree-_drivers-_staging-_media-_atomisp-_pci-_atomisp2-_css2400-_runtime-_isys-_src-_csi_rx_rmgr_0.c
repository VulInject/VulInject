enum VAR1 FUN1(
enum ia_css_csi2_port VAR2,
uint32_t VAR3)
{
enum ia_css_err VAR4 = VAR5;

if ((VAR2 < VAR6) &&
(VAR3 < VAR7)) {
struct VAR8 *VAR9;
VAR9 = FUN2();
if (FUN3(VAR9->VAR10[VAR2], VAR3) == 1) {
FUN4(VAR9->VAR10[VAR2], VAR3);
VAR4 = VAR11;
}
}
return VAR4;
}