static int FUN1(VAR1 *VAR2)
{
int VAR3;
int VAR4;
uint16_t VAR5;
int VAR6;

VAR3 = 0;
VAR4 = 0;
VAR5 = VAR2->VAR7 & ~VAR2->VAR8;
if (!VAR5)
return 0;

for (VAR6 = 1; VAR6 < 14; VAR6++) {
if (VAR5 & (1 << VAR6)) {
if ((VAR2->VAR9[VAR6] & 0x1f) > VAR3) {
VAR3 = VAR2->VAR9[VAR6] & 0x1f;
VAR4 = VAR6;
}
}
}

if (VAR3 < 4)
VAR4 = 0;

return VAR4;
}