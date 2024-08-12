void FUN1(char **VAR1,
int VAR2)
{
char *VAR3 = *VAR1;
char *VAR4;
char *VAR5 = NULL;
size_t VAR6 = 0;
size_t VAR7 = 0;
size_t VAR8 = 0;

enum VAR9 {
VAR10,
VAR11,
VAR12,
VAR13,
VAR14,
VAR15
} VAR16 = VAR10;
int VAR17 = 0;

if (FUN2(VAR3)) {
VAR6 = FUN3(*VAR1, '');
if (VAR2) {
VAR7 = FUN3(*VAR1, '');
VAR8 = FUN3(*VAR1, '');
}

if (VAR6 != 0 || VAR7 != 0 || VAR8 != 0) {

VAR4 = FUN4(char,
(strlen(*VAR1)
+ (4 * VAR6)
+ (3 * VAR7)
+ (3 * VAR8) + 1));

if ((VAR5 = VAR4) == NULL)
FUN5(VAR18, "");

for (VAR3 = *VAR1; *VAR3; VAR3++) {
if (VAR19) {
switch (VAR16) {
case VAR10:
if (*VAR3 == '') {
VAR16 = VAR11;
*VAR4++ = *VAR3;
continue;
}
break;

case VAR11:
if (*VAR3 == '') {
VAR16 = VAR12;
} else if (*VAR3 == '') {
VAR16 = VAR13;
} else {
VAR16 = VAR10;
}
*VAR4++ = *VAR3;
continue;

case VAR12:
if (*VAR3 == '' || *VAR3 == '' || *VAR3 == '') {
VAR16 = VAR14;
} else if (*VAR3 == '') {
VAR16 = VAR15;
} else {
VAR16 = VAR10;
}
*VAR4++ = *VAR3;
continue;

case VAR15:
if (*VAR3 == '') {
VAR16 = VAR14;
} else {
VAR16 = VAR10;
}
*VAR4++ = *VAR3;
continue;

case VAR13:
if (*VAR3 == '' || *VAR3 == '' || *VAR3 == '') {
VAR16 = VAR10;
} else if (*VAR3 == '') {
VAR16 = VAR14;
} else if (*VAR3 == '') {
VAR16 = VAR11;
}
*VAR4++ = *VAR3;
continue;

case VAR14:
if (*VAR3 == '')
VAR16 = VAR11;
*VAR4++ = *VAR3;
continue;

default:
break;
}
if (*(VAR3 + 1) != '' &&
(FUN6(FUN7(*VAR3), FUN7(*(VAR3 + 1))) ||
FUN8(FUN7(*VAR3), FUN7(*(VAR3 + 1)), VAR17) ||
FUN9(FUN7(*VAR3), FUN7(*(VAR3 + 1))))) {
*VAR4++ = *VAR3++;
*VAR4++ = *VAR3;
continue;
}
}
switch (*VAR3) {
case '':
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
break;
case '':
if (VAR2) {
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
break;
}

case '':
if (VAR2) {
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
*VAR4++ = '';
break;
}

default:
*VAR4++ = *VAR3;
break;
}
}
*VAR4 = '';
FUN10(*VAR1);
*VAR1 = VAR5;
}
}
}