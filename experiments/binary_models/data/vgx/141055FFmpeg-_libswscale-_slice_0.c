static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
int VAR5, VAR6, VAR7, VAR8, VAR9;

for (VAR5 = 0; VAR5 < 4; ++VAR5) {
VAR8 = VAR2->VAR10[VAR5].VAR11;
for (VAR6 = 0; VAR6 < VAR8; ++VAR6) {
if (VAR4 == 16) {
VAR9 = (VAR3>>1) + 1;
for (VAR7 = 0; VAR7 < VAR9; ++VAR7)
((VAR12*)(VAR2->VAR10[VAR5].VAR13[VAR6]))[VAR7] = 1<<18;
} else if (VAR4 == 32) {
VAR9 = (VAR3>>2) + 1;
for (VAR7 = 0; VAR7 < VAR9; ++VAR7)
((VAR14*)(VAR2->VAR10[VAR5].VAR13[VAR6]))[VAR7] = 1LL<<34;
} else {
VAR9 = VAR3 + 1;
for (VAR7 = 0; VAR7 < VAR9; ++VAR7)
((VAR15*)(VAR2->VAR10[VAR5].VAR13[VAR6]))[VAR7] = 1<<14;
}
}
}
}