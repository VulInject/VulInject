static int FUN1(struct VAR1 *VAR2, unsigned VAR3,
int VAR4, VAR5 *VAR6)
{
pinmux_enum_t VAR7 = VAR2->VAR8[VAR3].VAR7;
VAR5 *VAR9 = VAR2->VAR10;
int VAR11;

if (!FUN2(VAR7, &VAR2->VAR9)) {
if (!FUN2(VAR7, &VAR2->VAR12)) {
FUN3("", VAR3);
return -1;
}
}

if (VAR4) {
*VAR6 = VAR9[VAR4 + 1];
return VAR4 + 1;
}

for (VAR11 = 0; VAR11 < VAR2->VAR13; VAR11++) {
if (VAR9[VAR11] == VAR7) {
*VAR6 = VAR9[VAR11 + 1];
return VAR11 + 1;
}
}

FUN3("", VAR3);
return -1;
}