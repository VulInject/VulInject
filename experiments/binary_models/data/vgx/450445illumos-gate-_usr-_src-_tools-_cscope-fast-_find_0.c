void
FUN1(void)
{
char	VAR1[VAR2 + 1];	
char	VAR3[VAR4 + 1];	
char	VAR5[VAR4 + 1];	
char	VAR6[VAR4 + 1];	
char	*VAR7;
char	VAR8;
char	*VAR9;

if (VAR10 == VAR11) {
long	VAR12 = 0;
VAR13	*VAR14;

FUN2();
while ((VAR14 = FUN3()) != NULL) {
if (VAR14->VAR15 != VAR16 && VAR14->VAR17 != VAR12) {
FUN4(VAR14);
VAR12 = VAR14->VAR17;
}
}
return;
}
(void) FUN5('');		
FUN6();			
FUN7(VAR1);		
*VAR3 = '';

*VAR5 = '';





VAR7 = VAR18;
for (;;) {
FUN8('');
do {	
while (*VAR7 != '') {
++VAR7;
}
} while (*(VAR7 + 1) == '' && (VAR7 = FUN9()) != NULL);


if (VAR7 != NULL && *(++VAR7 + 1) == '') {
VAR7 = FUN9();
}
if (VAR7 == NULL) {
break;
}

if (*VAR7 == '') {
VAR18 = VAR7;
switch (FUN10()) {

case VAR19:		


FUN6();
FUN7(VAR1);


if (*VAR1 == '') {
return;
}
FUN11();


case VAR20:		
*VAR3 = '';
goto VAR21;	

case VAR22:		
VAR9 = VAR3;
break;

case VAR23:		
if (VAR24 >= 10) {
VAR9 = VAR5;
} else {
VAR9 = VAR6;
}
break;

case VAR25:
*VAR5 = '';
goto VAR21;	

case VAR16:		
goto VAR21;	
default:		
VAR9 = VAR6;
}

FUN6();
FUN7(VAR9);


if (VAR26 != NULL) {
if (VAR27 == VAR11) {
VAR9 = FUN12(VAR9);
}
if (*VAR9 != '' && FUN13(VAR26, VAR9) != NULL) {
goto VAR28;
}
}

else if (FUN14(VAR29, VAR9)) {
goto VAR28;
}
goto VAR21;
}

if (VAR26 != NULL) {
VAR8 = *VAR7;
if (VAR8 & 0200) {	
VAR8 = VAR30[(VAR8 & 0177) / 8];
}

if (FUN15(VAR8) || VAR8 == '') {
VAR18 = VAR7;
FUN7(VAR6);
VAR9 = VAR6;
if (VAR27 == VAR11) {
VAR9 = FUN12(VAR9);
}

if (FUN13(VAR26, VAR9) != NULL) {
goto VAR28;
}
goto VAR21;
}
}

else if (*VAR7 == VAR31[0]) {
VAR18 = VAR7;


if (FUN16()) {
VAR9 = NULL;
VAR28:

if (*VAR5 != '' && VAR9 != VAR5) {
FUN17(VAR1, VAR5);
} else if (VAR9 != VAR3) {
FUN17(VAR1, VAR3);
} else {
FUN17(VAR1, "");
}
if (VAR18 == NULL) {
return;
}
}
VAR21:
VAR7 = VAR18;
}
}
VAR18 = VAR7;
}