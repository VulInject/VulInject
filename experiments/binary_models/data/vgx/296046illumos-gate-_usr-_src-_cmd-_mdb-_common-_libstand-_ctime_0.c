struct VAR1 *
FUN1(const VAR2 *VAR3)
{
struct VAR1 *VAR4;
long VAR5;
long VAR6;
int VAR7;
int VAR8;
int *VAR9;
static struct tm VAR1;

VAR4 = &VAR1;
VAR5 = *VAR3 / VAR10;
VAR6 = *VAR3 % VAR10;
while (VAR6 < 0) {
VAR6 += VAR10;
--VAR5;
}
while (VAR6 >= VAR10) {
VAR6 -= VAR10;
++VAR5;
}
VAR4->VAR11 = (int)(VAR6 / VAR12);
VAR6 = VAR6 % VAR12;
VAR4->VAR13 = (int)(VAR6 / VAR14);
VAR4->VAR15 = (int)(VAR6 % VAR14);
VAR4->VAR16 = (int)((VAR17 + VAR5) % VAR18);
if (VAR4->VAR16 < 0)
VAR4->VAR16 += VAR18;
VAR7 = VAR19;
if (VAR5 >= 0) {
for (;;) {
VAR8 = FUN2(VAR7);
if (VAR5 < (long)VAR20[VAR8])
break;
if (++VAR7 > 9999) {
VAR21 = VAR22;
return (NULL);
}
VAR5 = VAR5 - (long)VAR20[VAR8];
}
} else {
do {
if (--VAR7 < 0) {
VAR21 = VAR22;
return (NULL);
}
VAR8 = FUN2(VAR7);
VAR5 = VAR5 + (long)VAR20[VAR8];
} while (VAR5 < 0);
}
VAR4->VAR23 = VAR7 - VAR24;
VAR4->VAR25 = (int)VAR5;
VAR9 = VAR26[VAR8];
for (VAR4->VAR27 = 0; VAR5 >= (long)VAR9[VAR4->VAR27]; ++(VAR4->VAR27))
VAR5 = VAR5 - (long)VAR9[VAR4->VAR27];
VAR4->VAR28 = (int)(VAR5 + 1);
VAR4->VAR29 = 0;

return (VAR4);
}