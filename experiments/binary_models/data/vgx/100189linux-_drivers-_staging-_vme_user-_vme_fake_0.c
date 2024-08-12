static void FUN1(struct VAR1 *VAR2, unsigned long long VAR3,
u32 VAR4, u32 VAR5)
{
struct VAR6 *VAR7;
unsigned long long VAR8;
u32 VAR9, VAR10;
int VAR11;
struct VAR12 *VAR13;
struct VAR14 *VAR15 = NULL, *VAR16;


VAR7 = VAR2->VAR17;


FUN2(VAR15, VAR16, &VAR7->VAR18) {
VAR13 = FUN3(VAR15, struct VAR12, VAR19);


if (VAR2->VAR20 == 0)
return;

VAR8 = VAR2->VAR8;
VAR9 = VAR2->VAR9;
VAR10 = VAR2->VAR10;


if ((VAR9 == VAR4) && (VAR10 == VAR5)) {
for (VAR11 = 0; VAR11 < VAR13->VAR21; VAR11++) {

if (((VAR8 + (8 * VAR11)) <= VAR3) &&
((VAR8 + (8 * VAR11) + 8) > VAR3)) {
if (VAR2->VAR22[VAR11])
VAR2->VAR22[VAR11](
VAR2->VAR23[VAR11]);
}
}
}
}
}