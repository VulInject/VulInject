static	double	FUN1(void);

static	int	VAR1;		
static	VAR2	*VAR3;		
static	int	VAR4;		
static	int	VAR5;		
static	const	char	*VAR6;	
static	int	VAR7;	
static	int	VAR8;		
static	int	VAR9;		


int
FUN2(VAR2 *VAR10, const char *VAR11, va_list VAR12)
{
int	VAR13;
int	VAR14;
int	VAR15;
int	VAR16;	
int	VAR17;	

long unsigned VAR18;	

VAR1 = VAR19;
VAR3 = VAR10;
VAR6 = VAR11;
VAR8 = '';
VAR13 = 0;
VAR7 = 0;

for (;;) {
if (VAR8 == '') {
VAR4 = 0;
VAR16 = 0;
VAR17 = 0;
VAR5 = 0;
}
VAR14 = FUN3();

switch (VAR14) {

case 0:
goto VAR20;

case VAR21:
case VAR22:
switch (VAR8) {

case '':
case '':
case '':
VAR8 = '';
VAR16 = VAR14;
break;
default:
VAR8 = '';
break;
}
break;

case VAR23:
switch (VAR8) {

int	VAR24;

case '':
case '':
case '':
case '':
VAR8 = '';
VAR24 = 1;
VAR4 = 0;

switch (VAR25->VAR26) {

case '':
VAR18 = FUN4(VAR27, VAR5, VAR28);
if (VAR9)
goto VAR20;
break;
case '':
VAR18 = FUN4(VAR27, VAR5, VAR29);
if (VAR9)
goto VAR20;
break;
case '':
VAR18 = FUN4(VAR30, VAR5, VAR28);
if (VAR9)
goto VAR20;
break;
case '':
VAR18 = FUN4(VAR31, VAR5, VAR28);
if (VAR9)
goto VAR20;
break;
case '':
VAR18 = FUN4(VAR32, VAR5, VAR28);
if (VAR9)
goto VAR20;
break;
case '':

case '':
case '': {
int VAR33 = 0;
char	*VAR34;

if (!VAR17)
VAR34 = FUN5(VAR12, char *);


if (VAR25->VAR26 != '')
FUN6();
for (;;) {
VAR15 = FUN7();


if (VAR25->VAR26 != '' && FUN8(VAR15)) {
FUN9(VAR15);
break;
}
if (VAR15 == VAR19) {
if(!VAR33)
goto VAR20;
break;
}

VAR33 = 1;
if (!VAR17)
*VAR34++ = VAR15;

if (VAR5) {
if (--VAR5 == 0)
break;
}
}


if (!VAR17 && VAR25->VAR26 != '')
*VAR34 = '';
VAR24 = 0;
break;
}
case '':
case '':
case '': {
double	VAR35;

VAR35 = FUN1();
if(VAR9)
goto VAR20;
if(VAR17)
break;
if (VAR16 == VAR21)
*(double *)FUN5(VAR12, double *) = VAR35;
else
*(float *)FUN5(VAR12, float *) = (float)VAR35;

}
case '':
case '':
case '':
default:
VAR24 = 0;
break;
}

if (VAR17)
break;
else
VAR13++;

if (VAR24 == 0)
break;

switch (VAR16) {

case VAR22:
*(short *)FUN5(VAR12, short *) = (short)VAR18;
break;
case VAR21:
*(long *)FUN5(VAR12, long *) = (long)VAR18;
break;
default:
*(int *)FUN5(VAR12, int *) = (int)VAR18;
break;
}
break;
default:
VAR8 = '';
break;
}
break;

case VAR36:
if (VAR8 == '') {
VAR8 = '';
VAR17 = 1;
} else {
VAR8 = '';
}
break;

case VAR37:
if (VAR8 == '') {
VAR8 = '';
VAR4 = 0;
VAR15 = FUN7();
if (VAR15 != '')
goto VAR20;
} else {
VAR8 = '';
}
break;

case VAR38:
if (VAR8 == '' || VAR8 == '') {
VAR8 = '';
} else {
VAR8 = '';
}
break;

case VAR39:
if (VAR8 == '') {
VAR4 = 0;
if (!VAR17) {
*(int *)FUN5(VAR12, int *) = VAR7;
}
}
VAR8 = '';
break;

case VAR40:
switch (VAR8) {

case '':
case '':
case '': {
char *VAR41;

VAR4 = 0;
if (VAR5 == 0)
VAR5 = VAR42;
VAR41 = VAR17 ? NULL : FUN5(VAR12, char *);
if (FUN10(VAR6, VAR41) && !FUN11(VAR3)
&& !VAR17)
VAR13++;
while (*VAR6++ != '')
;
break;
}
default:
break;
}
VAR8 = '';
break;

default:
VAR15 = *(VAR6-1);
if (VAR15 == '' || VAR15 == '' || VAR15 == '' || VAR15 == '')
FUN6();
else {
VAR15 = FUN7();

if (VAR15 != *(VAR6-1))
goto VAR20;
}
VAR8 = '';
break;
}
}
VAR20:
if (VAR1 != VAR19) {
FUN12(VAR1, VAR3);
VAR1 = VAR19;
}
return VAR13==0 ? VAR19 : VAR13;
}