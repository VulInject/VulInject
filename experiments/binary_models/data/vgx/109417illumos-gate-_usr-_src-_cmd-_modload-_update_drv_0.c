int
main(int argc, char *argv[])
{
int	VAR1, VAR2, VAR3;
int	VAR4 = 0;
int	VAR5 = 1;	
int	VAR6 = 0;	
int	VAR7 = 0;		
int	VAR8 = 0;		
int	VAR9 = 0;		
int	VAR10 = 0;		
int	VAR11 = 0;		
int	VAR12 = 0;		
int	VAR13 = 0;		
char	*VAR14 = NULL;
char	*VAR15 = NULL;
char	*VAR16 = NULL;
char	*VAR17 = NULL;
char	*VAR18 = NULL;
char	*VAR19 = NULL;
char	*VAR20;
int	VAR21;
major_t VAR22;
int	VAR23;
int	VAR24;

(void) FUN1(VAR25, "");
(void) FUN2(VAR26);


if (FUN3() != 0) {
(void) fprintf(VAR27, FUN4(VAR28));
FUN5(1);
}

while ((VAR2 = getopt(argc, argv, "")) != VAR29) {
switch (VAR2) {
case '':
VAR8++;
break;
case '':
VAR5 = 0;	
VAR16 = VAR30;
break;
case '':
VAR9++;
break;
case '':
VAR7++;
break;
case '':
VAR10++;
VAR15 = VAR30;
if (FUN6(VAR15) == VAR31) {
(void) fprintf(VAR27, FUN4(VAR32),
VAR15);
FUN5(1);
}
break;
case '':	
VAR11++;
break;
case '':
VAR12++;
VAR14 = VAR30;
break;
case '':
VAR13++;
VAR5 = 0;
break;
case '':
VAR17 = VAR30;
break;
case '':
VAR6++;
break;
case '':
VAR19 = VAR30;
break;
case '' :
default:
FUN7();
}
}


if ((argv[VAR33] == NULL) || (VAR33 + 1 != argc)) {
FUN7();
}


if ((VAR8 && VAR9) ||
((VAR8 || VAR9) &&
!VAR12 && !VAR10 && VAR19 == NULL && VAR17 == NULL)) {
FUN7();
}


if (VAR12 || VAR10 || VAR17 != NULL || VAR19 != NULL) {
if (!(VAR8 || VAR9))
FUN7();
}

VAR20 = argv[VAR33];


if ((FUN8(VAR16)) == VAR31) {
FUN5(1);
}


if (VAR11) {
FUN9(VAR34, VAR20, "");

return (VAR35);
}


FUN10();

if ((FUN11(VAR12, VAR10)) == VAR31) {
FUN12();
}


if ((FUN13(VAR36)) == VAR31)
FUN12();

if ((VAR13 == 0) &&
(VAR16 == NULL || (strcmp(VAR16, "") == 0)) &&
(VAR19 != NULL) && FUN14(VAR19, VAR8) != 0)
FUN12();

if (VAR17 != NULL && (VAR17 = FUN15(VAR17, VAR20,
VAR9 ? VAR37 : VAR38)) == NULL)
FUN12();


if (VAR8) {
if (VAR12) {

if ((VAR1 = FUN16(VAR14)) == VAR31) {
if (VAR7 == 0) { 
FUN17();
return (VAR1);
}
}


if ((VAR1 != VAR31) &&
(VAR1 = FUN18(VAR20, VAR14))) {
if (VAR7 == 0) { 
FUN17();
return (VAR1);
}
}
VAR4 |= VAR39;


if ((VAR13 == 0) &&
(VAR16 == NULL || (strcmp(VAR16, "") == 0))) {
VAR23 = FUN19(VAR20,
VAR40);
if (VAR23) {
(void) fprintf(VAR27,
FUN4(VAR41),
VAR20);
}
}
}

if (VAR19 != NULL) {
(void) FUN20(VAR20, VAR19, VAR42,
'', "", 0);
VAR4 |= VAR43;
}

if (VAR17 != NULL) {
if ((VAR1 = FUN21(VAR44,
VAR17, VAR37)) != 0) {
FUN17();
return (VAR1);
}
VAR4 |= VAR45;
}

if (VAR10) {
VAR21 = FUN22(VAR20, VAR46);
if (VAR21 == VAR31) {
(void) fprintf(VAR27, FUN4(VAR47),
VAR46);
FUN12();
}

if (VAR21 == VAR48) {
(void) fprintf(VAR27,
FUN4(VAR49), VAR20);
FUN12();
}

VAR22 = (VAR50)VAR21;


VAR1 = FUN23(VAR20,
VAR15, &VAR18);
if (VAR1 == VAR31) {
FUN17();
return (VAR1);
}


if (VAR18 == NULL)
goto VAR51;


if ((VAR7 == 0) && ((VAR1 =
FUN24(VAR18)) == VAR31)) {
FUN17();
return (VAR1);
}


if ((VAR1 = FUN25(VAR20,
VAR18)) == VAR31) {
FUN17();
return (VAR1);
}



if (VAR5) {

FUN26();
VAR24 = (VAR6) ?
VAR52 : 0;
VAR4 |= VAR53;
if (FUN27(VAR20, VAR22,
VAR18, NULL, VAR4,
VAR24) == VAR31) {
FUN12();
}
}

}

VAR51:
if (VAR5 && (VAR10 || VAR17 != NULL)) {

FUN28(VAR20, VAR6);
}

FUN17();

return (0);
}



if (VAR9) {
int VAR54 = VAR35;

if (VAR12) {

if ((VAR13 == 0) &&
(VAR16 == NULL || (strcmp(VAR16, "") == 0))) {
VAR23 = FUN29(VAR20,
VAR40);
if (VAR23) {
(void) fprintf(VAR27,
FUN4(VAR41),
VAR20);
}
}

if ((VAR1 = FUN30(VAR34,
VAR20, "", VAR14)) != VAR35) {
(void) fprintf(VAR27, FUN4(VAR55),
VAR20, VAR34);
VAR54 = VAR1;
}

if ((VAR13 == 0) &&
(VAR16 == NULL || (strcmp(VAR16, "") == 0))) {
VAR23 = FUN19(VAR20,
VAR40);
if (VAR23) {
(void) fprintf(VAR27,
FUN4(VAR41),
VAR20);
}
}
}

if (VAR10) {
VAR21 = FUN22(VAR20, VAR46);
if (VAR21 == VAR31) {
(void) fprintf(VAR27, FUN4(VAR47),
VAR46);
FUN12();
}

if (VAR21 == VAR48) {
(void) fprintf(VAR27,
FUN4(VAR49), VAR20);
FUN12();
}

VAR22 = (VAR50)VAR21;


VAR1 = VAR35;
VAR23 = FUN31(VAR15);
if (VAR23 == VAR31 && (VAR7 == 0)) {
(void) fprintf(VAR27,
FUN4(VAR56),
VAR20);
if (VAR54 != VAR35)
VAR54 = VAR23;
}
if (VAR23 == VAR35)
VAR1 = FUN30(VAR57,
VAR20, "", VAR15);
if (VAR1 != VAR35 && (VAR7 == 0)) {
(void) fprintf(VAR27, FUN4(VAR55),
VAR20, VAR57);
if (VAR54 != VAR35)
VAR54 = VAR1;
}


if (VAR54 == VAR35 && VAR5) {

FUN26();

VAR24 = 0;
if (VAR6)
VAR24 |= VAR52;
if (VAR7)
VAR24 |= VAR58;
VAR1 = FUN32(VAR20, VAR22,
VAR15, VAR24);
if (VAR1 == VAR31 && VAR7 == 0) {
(void) fprintf(VAR27,
FUN4(VAR59),
VAR20);
if (VAR54 != VAR35)
VAR54 = VAR1;
}
}
}

if (VAR19 != NULL) {
if ((VAR1 = FUN30(VAR42, VAR20, "",
VAR19)) != VAR35) {
(void) fprintf(VAR27, FUN4(VAR55),
VAR20, VAR42);
if (VAR54 != VAR35)
VAR54 = VAR1;
}
}

if (VAR17 != NULL) {
if ((VAR1 = FUN33(VAR44,
VAR17)) != VAR35) {
(void) fprintf(VAR27, FUN4(VAR55),
VAR20, VAR44);
if (VAR54 != VAR35)
VAR54 = VAR1;
}
}

if (VAR54 == VAR35 && VAR5) {
if (VAR10 || VAR12) {

(void) FUN34(VAR20,
VAR7, VAR6);
}

if (VAR17 != NULL)
FUN28(VAR20, VAR6);
}
FUN17();

return (VAR54);
}


VAR3 = FUN22(VAR20, VAR46);
if (VAR3 == VAR31) {
FUN12();
}


if (VAR5) {
(void) FUN34(VAR20, VAR7, VAR6);

if ((FUN35(VAR60, VAR3) != 0) ||
(FUN35(VAR61, VAR3, 0) != 0)) {
(void) fprintf(VAR27, FUN4(VAR62),
VAR20);
FUN12();
}

if (VAR6) {
(void) fprintf(VAR27, FUN4(VAR63),
VAR20);
}
FUN28(VAR20, VAR6);
}

FUN17();

return (VAR35);
}