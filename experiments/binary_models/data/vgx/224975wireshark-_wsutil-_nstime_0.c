VAR1
FUN1(VAR2 *VAR3, const char *VAR4, iso8601_fmt_e VAR5)
{
struct tm VAR6;
gint VAR7 = 0;
gint VAR8 = 0;
guint VAR9 = 0;
gint VAR10 = 0;
gint VAR11 = 0;
guint8 VAR12 = 0;
const char *VAR13 = VAR4;
char VAR14 = '';
gboolean VAR15 = VAR16;
gboolean VAR17 = VAR16;

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR18 = -1;
FUN2(VAR3);


for (VAR7 = 0; VAR7 < 4; VAR7++) {
if (!FUN3(*VAR4)) {
return 0;
}
VAR6.VAR19 *= 10;
VAR6.VAR19 += *VAR4++ - '';
}
if (*VAR4 == '') {
switch (VAR5) {
case VAR20:
return 0;

case VAR21:
case VAR22:
default:
VAR15 = VAR23;
VAR4++;
};
} else if (FUN3(*VAR4)) {
switch (VAR5) {
case VAR21:
return 0;

case VAR20:
case VAR22:
default:
VAR15 = VAR16;
};
} else {
return 0;
}

VAR6.VAR19 -= 1900; 



VAR7 = sscanf(VAR4, VAR15 ? "" : "",
&VAR6.VAR24,
&VAR6.VAR25,
&VAR8);
if (VAR7 >= 2) {

VAR6.VAR24--; 
VAR4 += VAR8;
}
else {
return 0;
}

if (*VAR4 == '' || *VAR4 == '') {

VAR4++;
}
else if (VAR15) {

return 0;
}



VAR7 = sscanf(VAR4, VAR15 ? "" : "",
&VAR6.VAR26,
&VAR6.VAR27,
&VAR8);
if (VAR7 >= 2) {
VAR4 += VAR8;
}
else {

return 0;
}


if ((VAR15 && *VAR4 == '') ||
(!VAR15 && FUN3(*VAR4))) {

if (1 > sscanf(VAR4, VAR15 ? "" : "",
&VAR6.VAR28, &VAR8)) {

return 0;
}
VAR4 += VAR8;


if (*VAR4 == '' || *VAR4 == '') {

VAR4++;
if (1 <= sscanf(VAR4, "", &VAR9, &VAR8)) {

if ((VAR9 >= 1000000000) || (VAR9 == 0)) {
VAR9 = 0;
} else {
switch (VAR8) { 
case 1: VAR9 *= 100000000; break;
case 2: VAR9 *= 10000000; break;
case 3: VAR9 *= 1000000; break;
case 4: VAR9 *= 100000; break;
case 5: VAR9 *= 10000; break;
case 6: VAR9 *= 1000; break;
case 7: VAR9 *= 100; break;
case 8: VAR9 *= 10; break;
default: break;
}
}
VAR4 += VAR8;
}

}
}
else {

VAR6.VAR28 = 0;
}


if (!FUN4(&VAR6)) {
return 0;
}


if (*VAR4 == '' || *VAR4 == '' || *VAR4 == '') {

VAR14 = *VAR4;

if (*VAR4 == '') {
VAR10 = VAR11 = 0;
VAR17 = VAR23;
VAR4++;
}
else {
VAR10 = VAR11 = 0;
VAR7 = sscanf(VAR4, "", &VAR10, &VAR8);
if (VAR7 >= 1) {

VAR17 = VAR23;
VAR4 += VAR8;
VAR7 = sscanf(VAR4, *VAR4 == '' ? "" : "", &VAR11, &VAR8);
if (VAR7 >= 1) {

VAR4 += VAR8;
}
}
else {

VAR17 = VAR16;
}
}
}
if (VAR17) {
VAR3->VAR29 = FUN5(&VAR6);
if (VAR14 == '') {
VAR3->VAR29 -= (VAR10 * 3600) + (VAR11 * 60);
} else if (VAR14 == '') {


VAR3->VAR29 += ((-VAR10) * 3600) + (VAR11 * 60);
}
}
else {

VAR3->VAR29 = FUN6(&VAR6);
}
VAR3->VAR30 = VAR9;
VAR12 = (VAR31)(VAR4-VAR13);
return VAR12;
}