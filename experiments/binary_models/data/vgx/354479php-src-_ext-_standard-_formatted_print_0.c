inline static void
FUN1(VAR1 **VAR2, VAR3 *VAR4,
double VAR5,
size_t VAR6, char VAR7,
size_t VAR8, int VAR9,
int VAR10, char VAR11,
int VAR12
)
{
char VAR13[VAR14];
char *VAR15 = NULL;
size_t VAR16 = 0;
bool VAR17 = false;
struct lconv VAR18;
struct VAR18 *VAR18;

FUN2(("",
*VAR2, VAR4, &FUN3(*VAR2), VAR5, VAR6, VAR7, VAR8, VAR11));
if ((VAR10 & VAR19) == 0) {
VAR9 = VAR20;
} else if (VAR9 > VAR21) {
FUN4(NULL, VAR22, "", VAR9, VAR21);
VAR9 = VAR21;
}

if (FUN5(VAR5)) {
VAR17 = (VAR5<0);
FUN6(VAR2, VAR4, "", 3, 0, VAR7,
VAR8, 3, VAR17, 0, VAR12);
return;
}

if (FUN7(VAR5)) {
VAR17 = (VAR5<0);
FUN6(VAR2, VAR4, "", 3, 0, VAR7,
VAR8, 3, VAR17, 0, VAR12);
return;
}

switch (VAR11) {
case '':
case '':
case '':
case '':
FUN8(&VAR18);
VAR18 = FUN9();
VAR15 = FUN10((VAR11 == '')?'':VAR11, VAR5, 0, VAR9,
(VAR11 == '')?VAR23:'',
&VAR17, &VAR13[1], &VAR16);
if (VAR17) {
VAR13[0] = '';
VAR15 = VAR13;
VAR16++;
} else if (VAR12) {
VAR13[0] = '';
VAR15 = VAR13;
VAR16++;
}
break;

case '':
case '':
case '':
case '':
{
if (VAR9 == 0)
VAR9 = 1;

char VAR24 = '';
if (VAR11 == '' || VAR11 == '') {
FUN8(&VAR18);
VAR18 = FUN9();
VAR24 = VAR23;
}

char VAR25 = VAR11 == '' || VAR11 == '' ? '' : '';

VAR15 = FUN11(VAR5, VAR9, VAR24, VAR25, &VAR13[1]);
VAR17 = 0;
if (*VAR15 == '') {
VAR17 = 1;
VAR15 = &VAR13[1];
} else if (VAR12) {
VAR13[0] = '';
VAR15 = VAR13;
}

VAR16 = strlen(VAR15);
break;
}
}

FUN6(VAR2, VAR4, VAR15, VAR6, 0, VAR7,
VAR8, VAR16, VAR17, 0, VAR12);
}