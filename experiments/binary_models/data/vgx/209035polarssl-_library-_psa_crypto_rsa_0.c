static VAR1 FUN1(const VAR2 *VAR3,
size_t VAR4,
int *VAR5)
{
size_t VAR6;
uint32_t VAR7 = 0;

if (VAR4 == 0) {
*VAR5 = 65537;
return VAR8;
}


if (VAR4 > sizeof(VAR7)) {
return VAR9;
}
for (VAR6 = 0; VAR6 < VAR4; VAR6++) {
VAR7 = (VAR7 << 8) | VAR3[VAR6];
}
if (VAR7 > VAR10) {
return VAR9;
}
*VAR5 = VAR7;
return VAR8;
}