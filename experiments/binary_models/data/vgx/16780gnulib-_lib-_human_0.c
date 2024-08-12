FUN1 (uintmax_t VAR1, char *VAR2, int VAR3,
uintmax_t VAR4, uintmax_t VAR5)
{
int VAR6 =
VAR3 & (VAR7 | VAR8 | VAR9);
unsigned int VAR10 = VAR3 & VAR11 ? 1024 : 1000;
uintmax_t VAR12;
int VAR13;
int VAR14 = -1;
int VAR15 = sizeof VAR16 - 1;
char *VAR17;
char *VAR18;
char const *VAR19;


int VAR20;

char const *VAR21 = "";
size_t VAR22 = 1;
char const *VAR23 = "";
char const *VAR24 = "";
struct lconv const *VAR25 = FUN2 ();
size_t VAR26 = strlen (VAR25->VAR21);
if (0 < VAR26 && VAR26 <= VAR27)
{
VAR21 = VAR25->VAR21;
VAR22 = VAR26;
}
VAR23 = VAR25->VAR23;
if (strlen (VAR25->VAR24) <= VAR27)
VAR24 = VAR25->VAR24;


VAR18 = VAR2 + VAR28 - 1 - VAR29;
VAR17 = VAR18;


if (VAR5 <= VAR4)
{
if (VAR4 % VAR5 == 0)
{
uintmax_t VAR30 = VAR4 / VAR5;
VAR12 = VAR1 * VAR30;
if (VAR12 / VAR30 == VAR1)
{
VAR13 = 0;
VAR20 = 0;
goto VAR31;
}
}
}
else if (VAR4 != 0 && VAR5 % VAR4 == 0)
{
uintmax_t VAR32 = VAR5 / VAR4;
uintmax_t VAR33 = (VAR1 % VAR32) * 10;
uintmax_t VAR34 = (VAR33 % VAR32) * 2;
VAR12 = VAR1 / VAR32;
VAR13 = VAR33 / VAR32;
VAR20 = VAR34 < VAR32 ? 0 < VAR34 : 2 + (VAR32 < VAR34);
goto VAR31;
}

{


long double VAR35 = VAR5;
long double VAR36 = VAR1 * (VAR4 / VAR35);
size_t VAR37;
size_t VAR38;

if (! (VAR3 & VAR39))
{
sprintf (VAR2, "", FUN3 (VAR6, VAR36));
VAR37 = strlen (VAR2);
VAR38 = 0;
}
else
{
long double VAR40 = 1;
VAR14 = 0;

do
{
VAR40 *= VAR10;
VAR14++;
}
while (VAR40 * VAR10 <= VAR36 && VAR14 < VAR15);

VAR36 /= VAR40;

sprintf (VAR2, "", FUN3 (VAR6, VAR36));
VAR37 = strlen (VAR2);
VAR38 = VAR22 + 1;

if (1 + VAR38 + ! (VAR3 & VAR11) < VAR37
|| ((VAR3 & VAR41)
&& VAR2[VAR37 - 1] == ''))
{
sprintf (VAR2, "",
FUN3 (VAR6, VAR36 * 10) / 10);
VAR37 = strlen (VAR2);
VAR38 = 0;
}
}

VAR17 = VAR18 - VAR37;
memmove (VAR17, VAR2, VAR37);
VAR19 = VAR17 + VAR37 - VAR38;
}
goto VAR42;

VAR31:
{


if (VAR3 & VAR39)
{
VAR14 = 0;

if (VAR10 <= VAR12)
{
do
{
unsigned int VAR33 = (VAR12 % VAR10) * 10 + VAR13;
unsigned int VAR34 = (VAR33 % VAR10) * 2 + (VAR20 >> 1);
VAR12 /= VAR10;
VAR13 = VAR33 / VAR10;
VAR20 = (VAR34 < VAR10
? (VAR34 + VAR20) != 0
: 2 + (VAR10 < VAR34 + VAR20));
VAR14++;
}
while (VAR10 <= VAR12 && VAR14 < VAR15);

if (VAR12 < 10)
{
if (VAR6 == VAR7
? 2 < VAR20 + (VAR13 & 1)
: VAR6 == VAR9 && 0 < VAR20)
{
VAR13++;
VAR20 = 0;

if (VAR13 == 10)
{
VAR12++;
VAR13 = 0;
}
}

if (VAR12 < 10
&& (VAR13 || ! (VAR3 & VAR41)))
{
*--VAR17 = '' + VAR13;
VAR17 -= VAR22;
memcpy (VAR17, VAR21, VAR22);
VAR13 = VAR20 = 0;
}
}
}
}

if (VAR6 == VAR7
? 5 < VAR13 + (0 < VAR20 + (VAR12 & 1))
: VAR6 == VAR9 && 0 < VAR13 + VAR20)
{
VAR12++;

if ((VAR3 & VAR39)
&& VAR12 == VAR10 && VAR14 < VAR15)
{
VAR14++;
if (! (VAR3 & VAR41))
{
*--VAR17 = '';
VAR17 -= VAR22;
memcpy (VAR17, VAR21, VAR22);
}
VAR12 = 1;
}
}

VAR19 = VAR17;

do
{
int VAR43 = VAR12 % 10;
*--VAR17 = VAR43 + '';
}
while ((VAR12 /= 10) != 0);
}

VAR42:
if (VAR3 & VAR44)
VAR17 = FUN4 (VAR17, VAR19 - VAR17, VAR23, VAR24);

if (VAR3 & VAR45)
{
if (VAR14 < 0)
{
uintmax_t VAR46;
VAR14 = 0;
for (VAR46 = 1; VAR46 < VAR5; VAR46 *= VAR10)
if (++VAR14 == VAR15)
break;
}

if ((VAR14 | (VAR3 & VAR47)) && (VAR3 & VAR48))
*VAR18++ = '';

if (VAR14)
*VAR18++ = (! (VAR3 & VAR11) && VAR14 == 1
? ''
: VAR16[VAR14]);

if (VAR3 & VAR47)
{
if ((VAR3 & VAR11) && VAR14)
*VAR18++ = '';
*VAR18++ = '';
}
}

*VAR18 = '';

return VAR17;
}