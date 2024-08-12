static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, unsigned int VAR5)
{
u16 VAR6 = VAR4->VAR7[VAR5];
bool VAR8 = !(VAR4->VAR9[0] & FUN2(VAR5));

if (VAR4->VAR10 &&
VAR5 >= VAR11 &&
VAR5 <= VAR12) {
FUN3(VAR4->VAR13, VAR6, VAR8);
} else {
FUN4(VAR14, &VAR2->VAR15,
"",
VAR16, VAR6, VAR8);
FUN5(VAR4->VAR17, VAR6, VAR8);
}
}