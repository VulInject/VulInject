static int
FUN1(const char *VAR1, int VAR2, VAR3 *VAR4)
{
static const char VAR5[] = "";
static const char VAR6[] = "";
static const char VAR7[] = "";
static const char VAR8[] = "";
static const char VAR9[] = "";
static const char VAR10[] = "";
static const char VAR11[] = "";
static const char VAR12[] = "";
static const char VAR13[] = "";
static const char VAR14[] = "";
static const char VAR15[] = "";
static const char VAR16[] = "";
const char *VAR17, *VAR18, *VAR19, *VAR20;
int VAR21, VAR22;

if (VAR2 == 0) VAR2 = strlen(VAR1);
VAR17 = VAR1;
VAR20 = VAR1 + VAR2;
for (;;) {

while (VAR17 < VAR20 && (*VAR17 == '' || FUN2(*VAR17))) ++VAR17;

VAR18 = VAR17;
while (VAR17 < VAR20 && *VAR17 != '') ++VAR17;
VAR21 = VAR17 - VAR18;
if (!VAR21 || VAR17 == VAR20 || VAR17 + 1 == VAR20) {
return (-5);
}


if (VAR17[1] == '') {
VAR17 += 2;
VAR19 = VAR17;
while (VAR17 < VAR20 && *VAR17 != '') {

if (*VAR17 == '') {
if (VAR17 + 1 == VAR20)
return (-5);
VAR17 += 2;
} else {
++VAR17;
}
}
VAR22 = VAR17 - VAR19;
if (*VAR17 != '')
return (-5);
++VAR17;
} else {
++VAR17;
VAR19 = VAR17;
while (VAR17 < VAR20 && *VAR17 != '') ++VAR17;
VAR22 = VAR17 - VAR19;
}
if (!VAR22)
return (-5);


switch (*VAR18) {
case '':
case '':
if (FUN3(VAR7, VAR18, VAR21)) {
VAR4->VAR23 = VAR19;
VAR4->VAR24 = VAR22;
}
if (FUN3(VAR16, VAR18, VAR21)) {
VAR4->VAR25 = VAR19;
VAR4->VAR26 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR11, VAR18, VAR21)) {
VAR4->VAR27 = VAR19;
VAR4->VAR28 = VAR22;
}
if (FUN3(VAR15, VAR18, VAR21)) {
VAR4->VAR29 = VAR19;
VAR4->VAR30 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR12, VAR18, VAR21)) {
VAR4->VAR31 = VAR19;
VAR4->VAR32 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR6, VAR18, VAR21)) {
VAR4->VAR33 = VAR19;
VAR4->VAR34 = VAR22;
}
if (FUN3(VAR14, VAR18, VAR21)) {
VAR4->VAR35 = VAR19;
VAR4->VAR36 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR8, VAR18, VAR21)) {
VAR4->VAR37 = VAR19;
VAR4->VAR38 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR5, VAR18, VAR21)) {
VAR4->VAR39 = VAR19;
VAR4->VAR40 = VAR22;
}
if (FUN3(VAR10, VAR18, VAR21)) {
VAR4->VAR41 = VAR19;
VAR4->VAR42 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR13, VAR18, VAR21)) {
VAR4->VAR43 = VAR19;
VAR4->VAR44 = VAR22;
}
break;
case '':
case '':
if (FUN3(VAR9, VAR18, VAR21)) {
VAR4->VAR45 = VAR19;
VAR4->VAR46 = VAR22;
}
break;
}


if (VAR17 == VAR20) break;
if (*VAR17 != '')
return (-5);
}

return (0);
}