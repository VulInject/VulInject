int
FUN1(VAR1 **VAR2,
va_list VAR3)
{
FUN2(VAR1) VAR4 = NULL;
VAR1 *VAR5 = *VAR2;
char VAR6;
char *VAR7;
int VAR8;

if (VAR5 == NULL)
VAR4 = VAR5 = FUN3();

while ((VAR7 = FUN4(VAR3, char *)) != NULL) {

if (strlen(VAR7) < 3 || VAR7[1] != '') {
FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}

VAR6 = VAR7[0];
VAR7 += 2;


switch (VAR6) {
case '':
case '': {
char *VAR10 = FUN4(VAR3, char *);
if (!VAR10) {
if (VAR6 == '')
continue;

FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}
VAR8 = FUN7(VAR5, VAR7, VAR10);
}   break;

case '':
case '':
case '':
case '':
case '': {
int VAR10 = FUN4(VAR3, int);

if (VAR10 < 0 && (VAR6 == '' || VAR6 == '')) {
FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}

if (!VAR10 && (VAR6 == '' || VAR6 == ''))
continue;

if (VAR10 < 0 && VAR6 == '')
continue;

VAR8 = FUN8(VAR5, VAR7, VAR10);
}   break;

case '':
case '': {
unsigned int VAR10 = FUN4(VAR3, unsigned int);

if (!VAR10 && VAR6 == '')
continue;

VAR8 = FUN9(VAR5, VAR7, VAR10);
}   break;

case '':
case '':
case '':
case '':
case '': {
long long VAR10 = FUN4(VAR3, long long);

if (VAR10 < 0 && (VAR6 == '' || VAR6 == '')) {
FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}

if (!VAR10 && (VAR6 == '' || VAR6 == ''))
continue;

if (VAR10 < 0 && VAR6 == '')
continue;

VAR8 = FUN10(VAR5, VAR7, VAR10);
}   break;

case '':
case '': {

long long VAR10 = FUN4(VAR3, long long);

if (!VAR10 && VAR6 == '')
continue;

VAR8 = FUN10(VAR5, VAR7, VAR10);
}   break;

case '': {
double VAR10 = FUN4(VAR3, double);
VAR8 = FUN11(VAR5, VAR7, VAR10);
}   break;

case '':
case '':
case '': {
int VAR10 = FUN4(VAR3, int);

if (!VAR10 && VAR6 == '')
continue;

if (VAR6 == '') {
if (VAR10 == VAR11)
continue;

if (VAR10 == VAR12)
VAR10 = 0;
else
VAR10 = 1;
}

VAR8 = FUN12(VAR5, VAR7, VAR10);
}   break;

case '': {
VAR8 = FUN13(VAR5, VAR7);
}   break;

case '':
case '': {
VAR1 **VAR10 = FUN4(VAR3, VAR1 **);

if (!(*VAR10)) {
if (VAR6 == '')
continue;

FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}

VAR8 = FUN14(VAR5, VAR7, VAR10);
}   break;

case '':
case '': {
VAR13 *VAR14 = FUN4(VAR3, VAR13 *);
FUN2(VAR1) VAR15 = FUN15();
ssize_t VAR16 = -1;

if (!VAR14) {
if (VAR6 == '')
continue;

FUN5(VAR9,
FUN6(""),
VAR7);
return -1;
}

while ((VAR16 = FUN16(VAR14, VAR16)) > -1) {
FUN2(VAR1) VAR17 = FUN17(VAR16);

if (FUN18(VAR15, &VAR17) < 0)
return -1;
}

if ((VAR8 = FUN14(VAR5, VAR7, &VAR15)) < 0)
return -1;
} break;

default:
FUN5(VAR9,
FUN6(""), VAR6, VAR7 - 2);
return -1;
}

if (VAR8 < 0)
return -1;
}


if (FUN19(VAR5) == 0)
return 0;

if (VAR4)
*VAR2 = FUN20(&VAR4);

return 1;
}