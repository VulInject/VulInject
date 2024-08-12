VAR1
FUN1(VAR2 *VAR3, char **VAR4, VAR1 *VAR5, char **VAR6,
VAR1 *VAR7)
{
size_t VAR8 = 0;
VAR9 *VAR10;
VAR9 *VAR11;
VAR9 *VAR12;
VAR9 *VAR13;
VAR9 *VAR14;
uint_t VAR15;
uint_t VAR16;
signed char VAR17;
signed char VAR18;
signed char VAR19;
register int VAR20;

if (! VAR3) {
VAR21 = VAR22;
return((VAR1)-1);
}

if (!VAR4 || !(*VAR4)) {
if (VAR3->VAR23) {
VAR17 = (VAR3->VAR24 > 0) ? 2 : 1;

if ((! VAR7) || *VAR7 < VAR17) {
VAR21 = VAR25;
return((VAR1)-1);
}

if (VAR3->VAR24 > 0) {

**VAR6 = VAR26[((VAR3->VAR27 <<
(6 - VAR3->VAR24)) & 0x003f)];
(*VAR6)++;
}

**VAR6 = '';
(*VAR6)++;
*VAR7 -= VAR17;
}

VAR3->VAR27 = 0;
VAR3->VAR24 = 0;
VAR3->VAR23 = false;
VAR3->VAR28 = false;

return((VAR1)0);
}

VAR10 = (VAR9 *)*VAR4;
VAR11 = (VAR9 *)*VAR6;
VAR12 = VAR10 + *VAR5;
VAR13 = VAR11 + *VAR7;

if (! VAR3->VAR28) {
if ((VAR12 - VAR10) < VAR29) {
VAR21 = VAR30;
return((VAR1)-1);
}

for (VAR15 = 0, VAR20 = 0; VAR20 < VAR29; VAR20++)
VAR15 = (VAR15 << 8) | ((VAR31)(*(VAR10 + VAR20)));

if (VAR15 == VAR32) {
VAR10 += VAR29;
VAR3->VAR33 = false;
} else if (VAR15 == VAR34) {
VAR10 += VAR29;
VAR3->VAR33 = true;
}
}
VAR3->VAR28 = true;

while (VAR10 < VAR12) {
VAR17 = VAR35[*VAR10];
if (VAR17 == VAR36) {
VAR21 = VAR37;
VAR8 = (VAR1)-1;
break;
}
VAR17 = VAR29;

if ((VAR12 - VAR10) < VAR17) {
VAR21 = VAR30;
VAR8 = (VAR1)-1;
break;
}

VAR14 = VAR10;
VAR15 = *VAR10++ & VAR38[VAR17];
for (; VAR17 > 1; VAR17--) {
if (((VAR31)*VAR10) < 0x80) {
VAR10 = VAR14;
VAR21 = VAR37;
VAR8 = (VAR1)-1;
goto VAR39;
}
VAR15 = (VAR15 << VAR40) |
(((VAR31)*VAR10) & VAR41);
VAR10++;
}
VAR15 = 0;
if (VAR3->VAR33) {
for (VAR20 = VAR29 - 1; VAR20 >= 0; VAR20--)
VAR15 = (VAR15 << 8) | ((VAR31)(*(VAR10 + VAR20)));
} else {
for (VAR20 = 0; VAR20 < VAR29; VAR20++)
VAR15 = (VAR15 << 8) | ((VAR31)(*(VAR10 + VAR20)));
}
VAR10 += VAR29;


if ((VAR15 & VAR42) == VAR43 ||
(VAR15 & VAR42) == VAR44 ||
VAR15 > VAR45 ||
(VAR15 >= VAR46 &&
VAR15 <= VAR47) ||
(VAR15 >= VAR48 &&
VAR15 <= VAR49)) {
if (VAR15 >= VAR43 ||
(VAR15 >= VAR46 &&
VAR15 <= VAR47) ||
(VAR15 >= VAR48 &&
VAR15 <= VAR49)) {
if ((VAR15 & VAR42) == VAR43 ||
(VAR15 & VAR42) == VAR44 ||
VAR15 > VAR50 ||
(VAR15 >= VAR46 &&
VAR15 <= VAR47) ||
(VAR15 >= VAR48 &&
VAR15 <= VAR49)) {
VAR10 = VAR14;
VAR21 = VAR37;
VAR8 = (VAR1)-1;
goto VAR39;
}

if (VAR15 > 0x00ffff) {
VAR15 = VAR51;
VAR8++;
}


if ((VAR15 >= (VAR31)'' && VAR15 <= (VAR31)'') ||
(VAR15 >= (VAR31)'' && VAR15 <= (VAR31)'') ||
(VAR15 >= (VAR31)'' && VAR15 <= (VAR31)'') ||
VAR15 == (VAR31)''''(' ||
VAR15 == (VAR31)'' ||
(VAR15 >= (VAR31)'' && VAR15 <= (VAR31)'') || 
VAR15 == (VAR31)'' || VAR15 == (VAR31)'' ||
VAR15 == (VAR31)'' || VAR15 == (VAR31)'' ||
VAR15 == (VAR31)'' || VAR15 == (VAR31)'') {

VAR16 = 0;
VAR17 = 1;
if (VAR3->VAR23) {
if (VAR3->VAR24 > 0) {
VAR17++;
VAR16 = VAR3->VAR27 <<
(6 - VAR3->VAR24);
}
if (VAR15 == (VAR31)'' ||
FUN2(VAR15))
VAR17++;
}

if ((VAR13 - VAR11) < VAR17) {
VAR10 = VAR14;
VAR21 = VAR25;
VAR8 = (VAR1)-1;
break;
}

if (VAR3->VAR23) {

if (VAR3->VAR24 > 0)
*VAR11++ = VAR26[VAR16 & 0x003f];
if (VAR15 == (VAR31)'' ||
FUN2(VAR15))
*VAR11++ = '';

VAR3->VAR23 = false;
VAR3->VAR24 = 0;
}

*VAR11++ = (VAR9)(VAR15 & 0x007f);

} else {

VAR17 = (VAR3->VAR24) ? 3 : 2;
if (! VAR3->VAR23)
VAR17++;

if ((VAR13 - VAR11) < VAR17) {
VAR10 = VAR14;
VAR21 = VAR25;
VAR8 = (VAR1)-1;
break;
}

if (! VAR3->VAR23) {
*VAR11++ = '';
VAR3->VAR23 = true;
}

if (VAR3->VAR24) {
VAR18 = 18 - VAR3->VAR24;
VAR19 = 16 - VAR18;
VAR16 = (VAR3->VAR27 << VAR18) |
(VAR15 >> VAR19);
VAR3->VAR27 = VAR15 & 0x0003;
VAR3->VAR24 = VAR19;


*VAR11++ = VAR26[(VAR16 >> 12) & 0x003f];
*VAR11++ = VAR26[(VAR16 >> 6) & 0x003f];
*VAR11++ = VAR26[VAR16 & 0x003f];
} else {
VAR3->VAR27 = VAR15 & 0x000f;
VAR3->VAR24 = 4;


*VAR11++ = VAR26[(VAR15 >> 10) & 0x003f];
*VAR11++ = VAR26[(VAR15 >> 4) & 0x003f];
}
}
}

VAR39:
*VAR4 = (char *)VAR10;
*VAR5 = VAR12 - VAR10;
*VAR6 = (char *)VAR11;
*VAR7 = VAR13 - VAR11;

return(VAR8);
}