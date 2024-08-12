int FUN1(VAR1 *VAR2, int VAR3, int *VAR4, int *VAR5, int *VAR6)
{
int VAR7, VAR8 = VAR9;
int VAR10, VAR11;
VAR1 *VAR12;
u8 VAR13[4] = {0x00, 0x0f, 0xac, 0x01};

if (VAR3 <= 0) {

return VAR14;
}


if ((*VAR2 != VAR15) || (*(VAR2 + 1) != (VAR1)(VAR3 - 2)))
return VAR14;

VAR12 = VAR2;
VAR12 += 4;
VAR10 = VAR3 - 4;


if (VAR10 >= VAR16) {
*VAR4 = FUN2(VAR12);

VAR12 += VAR16;
VAR10 -= VAR16;

} else if (VAR10 > 0) {
FUN3(VAR17, VAR18, ("", VAR19, VAR10));
return VAR14;
}


if (VAR10 >= 2) {
VAR11 = FUN4(VAR12);
VAR12 += 2;
VAR10 -= 2;

if (VAR11 == 0 || VAR10 < VAR11 * VAR16) {
FUN3(VAR17, VAR18, (""
"", VAR19, VAR11, VAR10));
return VAR14;
}

for (VAR7 = 0; VAR7 < VAR11; VAR7++) {
*VAR5 |= FUN2(VAR12);

VAR12 += VAR16;
VAR10 -= VAR16;
}

} else if (VAR10 == 1) {
FUN3(VAR17, VAR18, ("",  VAR19));

return VAR14;
}

if (VAR6) {
if (VAR10 >= 6) {
VAR12 += 2;
if (!memcmp(VAR12, VAR13, 4)) {
FUN3(VAR17, VAR20, ("", VAR19));
*VAR6 = 1;
}
}
}
return VAR8;
}