static void FUN1(u32 VAR1, u32 VAR2, int VAR3,
int VAR4, signed short *VAR5,
signed short VAR6, signed short VAR7)
{
u16 VAR8, VAR9;


for (VAR8 = 0; VAR8 < VAR10; ++VAR8)

for (VAR9 = 0; VAR9 < VAR11; ++VAR9) {
signed short *VAR12;
signed char VAR13;


if (VAR3 + VAR8 < 0 || VAR3 + VAR8 >= VAR1 || VAR4 + VAR9 >= VAR2)
continue;
VAR12 = &VAR5[(VAR4 + VAR9) * VAR1 + VAR3 + VAR8];
VAR13 = VAR14[VAR8][VAR9];
if (-1 == VAR13) {

*VAR12 = VAR6;
} else {
signed short VAR15 = *VAR12 + VAR7 * VAR13;

if (VAR15 > VAR16)
VAR15 = VAR16;
if (VAR15 < VAR17)
VAR15 = VAR17;
*VAR12 = VAR15;
}
}
}