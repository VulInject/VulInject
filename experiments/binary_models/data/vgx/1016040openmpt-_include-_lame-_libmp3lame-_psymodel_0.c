static void
FUN1(lame_internal_flags const *VAR1, FLOAT const *VAR2,
FLOAT const *VAR3, unsigned char *VAR4)
{
PsyConst_CB2SB_t const *const VAR5 = &VAR1->VAR6->VAR7;
FLOAT   VAR8, VAR9;
int     VAR10, VAR11;
int const VAR12 = FUN2(VAR13) - 1;
VAR10 = 0;
VAR9 = VAR3[VAR10] + VAR3[VAR10 + 1];
assert(VAR9 >= 0);
if (VAR9 > 0.0f) {
VAR8 = VAR2[VAR10];
if (VAR8 < VAR2[VAR10 + 1])
VAR8 = VAR2[VAR10 + 1];
assert((VAR5->VAR14[VAR10] + VAR5->VAR14[VAR10 + 1] - 1) > 0);
VAR9 = 20.0f * (VAR8 * 2.0f - VAR9)
/ (VAR9 * (VAR5->VAR14[VAR10] + VAR5->VAR14[VAR10 + 1] - 1));
VAR11 = (int) VAR9;
if (VAR11 > VAR12)
VAR11 = VAR12;
VAR4[VAR10] = VAR11;
}
else {
VAR4[VAR10] = 0;
}

for (VAR10 = 1; VAR10 < VAR5->VAR15 - 1; VAR10++) {
VAR9 = VAR3[VAR10 - 1] + VAR3[VAR10] + VAR3[VAR10 + 1];
assert(VAR10 + 1 < VAR5->VAR15);
assert(VAR9 >= 0);
if (VAR9 > 0.0) {
VAR8 = VAR2[VAR10 - 1];
if (VAR8 < VAR2[VAR10])
VAR8 = VAR2[VAR10];
if (VAR8 < VAR2[VAR10 + 1])
VAR8 = VAR2[VAR10 + 1];
assert((VAR5->VAR14[VAR10 - 1] + VAR5->VAR14[VAR10] + VAR5->VAR14[VAR10 + 1] - 1) > 0);
VAR9 = 20.0f * (VAR8 * 3.0f - VAR9)
/ (VAR9 * (VAR5->VAR14[VAR10 - 1] + VAR5->VAR14[VAR10] + VAR5->VAR14[VAR10 + 1] - 1));
VAR11 = (int) VAR9;
if (VAR11 > VAR12)
VAR11 = VAR12;
VAR4[VAR10] = VAR11;
}
else {
VAR4[VAR10] = 0;
}
}
assert(VAR10 > 0);
assert(VAR10 == VAR5->VAR15 - 1);

VAR9 = VAR3[VAR10 - 1] + VAR3[VAR10];
assert(VAR9 >= 0);
if (VAR9 > 0.0f) {
VAR8 = VAR2[VAR10 - 1];
if (VAR8 < VAR2[VAR10])
VAR8 = VAR2[VAR10];
assert((VAR5->VAR14[VAR10 - 1] + VAR5->VAR14[VAR10] - 1) > 0);
VAR9 = 20.0f * (VAR8 * 2.0f - VAR9)
/ (VAR9 * (VAR5->VAR14[VAR10 - 1] + VAR5->VAR14[VAR10] - 1));
VAR11 = (int) VAR9;
if (VAR11 > VAR12)
VAR11 = VAR12;
VAR4[VAR10] = VAR11;
}
else {
VAR4[VAR10] = 0;
}
assert(VAR10 == (VAR5->VAR15 - 1));
}