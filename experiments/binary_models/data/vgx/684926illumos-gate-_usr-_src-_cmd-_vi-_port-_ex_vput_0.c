void
FUN1(int VAR1, int VAR2)
{
wchar_t *VAR3, *VAR4;
wchar_t *VAR5;
int VAR6;
int VAR7 = VAR2 - VAR1;

if (VAR8)
FUN2(), fprintf(VAR8, "", VAR1, VAR2);
if (!VAR9 || VAR7 <= 0)
return;
if (VAR10) {

FUN3();
VAR4 = VAR11 + VAR1;
VAR6 = VAR7;
do
if ((*VAR4++ & (VAR12|VAR13)) == VAR12)
return;
while (--VAR6);
VAR6 = 2 * VAR7;
do
if (*VAR4 == 0 || (*VAR4++ & VAR12) == VAR12)
return;
while (--VAR6);
FUN4(VAR1);
} else {

VAR6 = VAR1 / VAR14;
if (VAR6 != VAR2 / VAR14)
return;
VAR6 += FUN5(VAR15);
VAR1 %= VAR14;
VAR2 %= VAR14;
VAR4 = VAR16[VAR6]; VAR3 = VAR4 + VAR2; VAR5 = VAR4 + VAR14;
while (VAR3 < VAR5 && *VAR3)
VAR3++;
if (VAR3 - (VAR4 + VAR1) < 2 * VAR7)
return;
FUN6(VAR6, VAR1);
}


FUN7();
for (VAR6 = VAR7; VAR6 > 0; VAR6--)
FUN8(VAR9, FUN9(VAR15));
FUN8(VAR17, 0);


if (VAR10) {
VAR4 = VAR11 + VAR1;
VAR3 = VAR11 + VAR2;
while (VAR6 = *VAR3++) {
if ((VAR6 & (VAR12|VAR13)) == VAR12)
break;
*VAR4++ = VAR6;
}
do
*VAR4++ = VAR6;
while (--VAR7);
} else {
copy(VAR4 + VAR1, VAR4 + VAR2, (VAR14 - VAR2) * sizeof(wchar_t));
FUN10(VAR5 - VAR7, VAR7);
}
}