static char *
FUN1(char *VAR1)
{
char	*VAR2 = VAR1;
wchar_t	VAR3 = 0;
char	VAR4[VAR5];
size_t	VAR6;
int	VAR7 = 0;
int	VAR8 = 0;
int	VAR9 = 0;

VAR1[0] = '';

while (VAR10) {

VAR6 = 0;
VAR9 = VAR3;
VAR3 = FUN2(VAR4, &VAR6);

if (((VAR1 - VAR2) + VAR6) > VAR11) {
FUN3(VAR12, VAR11);
FUN4(2);
VAR13 = VAR14;
return (NULL);
}

switch (VAR3) {
case '':
if (VAR15) {
FUN5(&VAR1, VAR4, VAR6);
continue;
}

if (VAR16 && FUN6(VAR9, VAR17)) {
VAR6 = 0;
*VAR1 = 0;
continue;
}


case '':
case VAR18:	

if (VAR7) {
FUN7(VAR19);
VAR13 = VAR14;
return (NULL);
}
if (VAR8) {
FUN7(VAR20);
VAR13 = VAR14;
return (NULL);
}

VAR21++;
break;

case '':
if (VAR15 || VAR7 || (VAR8 == 1)) {

VAR7 = 0;
FUN5(&VAR1, VAR4, VAR6);

} else if (VAR8 == 2) {

VAR8 = 0;

} else {

VAR8 = 2;
}
continue;

case ''':
if (VAR15 || VAR7 || (VAR8 == 2)) {

VAR7 = 0;
FUN5(&VAR1, VAR4, VAR6);

} else if (VAR8 == 1) {

VAR8 = 0;

} else {

VAR8 = 1;
}
continue;

case '':

if (VAR15 || VAR8 || VAR7) {
VAR7 = 0;
FUN5(&VAR1, VAR4, VAR6);
} else {
VAR7 = 1;
}
continue;

default:

if (VAR8 || VAR7 || VAR15 || !FUN6(VAR3, VAR17)) {
VAR7 = 0;
FUN5(&VAR1, VAR4, VAR6);
continue;
}
if (VAR22 && VAR9 == 0) {
VAR3 = 0;		
continue;
}
if (VAR23) {
FUN5(&VAR1, VAR4, VAR6);
continue;
}


break;
}


if (strcmp(VAR2, VAR24) == 0 && *VAR24 != '') {
VAR10 = VAR25;
return (NULL);
}
if (VAR3 == VAR18) {
VAR10 = VAR25;
}
if (VAR2[0] == '')
continue;
break;
}

return (VAR2[0] == '' ? NULL : VAR2);
}