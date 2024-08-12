int FUN1(const unsigned char *VAR1, unsigned long *VAR2,
VAR3 *VAR4)
{
unsigned char VAR5[32];
unsigned long VAR6;
int           VAR7;

FUN2(VAR1    != NULL);
FUN2(VAR2 != NULL);
FUN2(VAR4   != NULL);


if (*VAR2 < 2UL || (VAR1[1] >= sizeof(VAR5)) || ((VAR1[1] + 2UL) > *VAR2)) {
return VAR8;
}


for (VAR6 = 0; VAR6 < VAR1[1]; VAR6++) {
VAR7 = FUN3(VAR1[VAR6+2]);
if (VAR7 == -1) {
return VAR8;
}
if (!((VAR7 >= '' && VAR7 <= '')
|| VAR7 == '' || VAR7 == ''
|| VAR7 == '' || VAR7 == '')) {
return VAR8;
}
VAR5[VAR6] = VAR7;
}
*VAR2 = 2 + VAR6;

if (VAR6 < 15) {
return VAR8;
}



VAR6 = 0;
FUN4(VAR4->VAR9, 10000);
FUN5(VAR4->VAR10, 13);
FUN5(VAR4->VAR11, 32);
FUN5(VAR4->VAR12, 24);
FUN5(VAR4->VAR13, 60);
FUN5(VAR4->VAR14, 60);


VAR4->VAR15 = 0;


if (VAR5[VAR6] == '') {
return VAR16;
}
if (VAR5[VAR6] == '') {
VAR6++;
while (VAR5[VAR6] >= '' && VAR5[VAR6] <= '') {
unsigned VAR15 = VAR4->VAR15;
if (VAR6 >= sizeof(VAR5)) return VAR8;
VAR4->VAR15 *= 10;
VAR4->VAR15 += FUN6(VAR5[VAR6]);
if (VAR15 > VAR4->VAR15) return VAR17;
VAR6++;
}
}


if (VAR5[VAR6] == '') {
return VAR16;
}
if (VAR5[VAR6] == '' || VAR5[VAR6] == '') {
VAR4->VAR18 = (VAR5[VAR6++] == '') ? 0 : 1;
FUN5(VAR4->VAR19, 24);
FUN5(VAR4->VAR20, 60);
return VAR16;
}
return VAR8;
}