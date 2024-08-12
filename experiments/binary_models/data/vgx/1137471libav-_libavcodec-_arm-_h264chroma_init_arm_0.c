void FUN1(VAR1 *VAR2, VAR1 *VAR3, ptrdiff_t VAR4,
int VAR5, int VAR6, int VAR7);
void FUN2(VAR1 *VAR2, VAR1 *VAR3, ptrdiff_t VAR4,
int VAR5, int VAR6, int VAR7);
void FUN3(VAR1 *VAR2, VAR1 *VAR3, ptrdiff_t VAR4,
int VAR5, int VAR6, int VAR7);

av_cold void FUN4(VAR8 *VAR9, int VAR10)
{
const int VAR11 = VAR10 > 8;
int VAR12 = FUN5();

if (FUN6(VAR12) && !VAR11) {
VAR9->VAR13[0] = VAR14;
VAR9->VAR13[1] = VAR15;
VAR9->VAR13[2] = VAR16;

VAR9->VAR17[0] = VAR18;
VAR9->VAR17[1] = VAR19;
VAR9->VAR17[2] = VAR20;
}
}