static VAR1
FUN1(const VAR2 *VAR3,
size_t         VAR4,
VAR1       *VAR5,
char          *VAR6,
VAR1       *VAR7)
{
l_uint8   VAR8;
l_uint32  VAR9, VAR10;
l_int32   VAR11, VAR12, VAR13, VAR14, VAR15;

VAR11 = VAR16;
VAR12 = *VAR5;
VAR13 = FUN2(4, (VAR4 - VAR12));
if (VAR4 == VAR12 + VAR13)
VAR11 = VAR17;
*VAR5 += VAR13;  


VAR9 = 0;
for (VAR15 = 0; VAR15 < VAR13; VAR15++) {
VAR8 = VAR3[VAR12 + VAR15];
VAR9 += (VAR18)VAR8 << (8 * (3 - VAR15));
}

FUN3("", VAR12, VAR13);
FUN3("", VAR9);
FUN3("", VAR11);


if (VAR9 == 0) {
VAR6[0] = '';
VAR14 = 1;
} else { 
for (VAR15 = 4; VAR15 >= 4 - VAR13; VAR15--) {
VAR10 = VAR9 / VAR19[VAR15];
VAR6[4 - VAR15] = (VAR2)(VAR10 + '');
VAR9 -= VAR10 * VAR19[VAR15];
}
VAR14 = VAR13 + 1;
}
*VAR7 = VAR14;

return VAR11;
}