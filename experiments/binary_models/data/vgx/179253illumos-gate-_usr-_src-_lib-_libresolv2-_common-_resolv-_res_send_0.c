static int
FUN1(res_state VAR1,
const VAR2 *VAR3, int VAR4, VAR2 *VAR5, int VAR6,
int *VAR7, int VAR8)
{
const VAR9 *VAR10 = (const VAR9 *) VAR3;
VAR9 *VAR11 = (VAR9 *) VAR5;
struct VAR12 *VAR13;
int VAR14;
int VAR15, VAR16, VAR17, VAR18;
struct iovec VAR19[2];
u_short VAR20;
VAR2 *VAR21;
void *VAR22;
int VAR23 = 1;

VAR13 = FUN2(VAR1, VAR8);
VAR14 = FUN3(VAR13);

VAR16 = 0;
VAR24:
VAR15 = 0;


if (VAR1->VAR25 >= 0 && (VAR1->VAR26 & VAR27) != 0) {
struct sockaddr_storage VAR28;
ISC_SOCKLEN_T VAR29 = sizeof VAR28;

if (FUN4(VAR1->VAR25,
(struct VAR12 *)&VAR28, &VAR29) < 0 ||
!FUN5((struct VAR12 *)&VAR28, VAR13)) {
FUN6(VAR1);
VAR1->VAR26 &= ~VAR27;
}
}

if (VAR1->VAR25 < 0 || (VAR1->VAR26 & VAR27) == 0) {
if (VAR1->VAR25 >= 0)
FUN6(VAR1);

VAR1->VAR25 = socket(VAR13->VAR30, VAR31, 0);
if (VAR1->VAR25 > VAR32) {
FUN6(VAR1);
VAR33 = VAR34;
}
if (VAR1->VAR25 < 0) {
switch (VAR33) {
case VAR35:
case VAR36:
case VAR37:
FUN7(VAR1, VAR38, "", VAR33);
return (0);
default:
*VAR7 = VAR33;
FUN7(VAR1, VAR38, "", VAR33);
return (-1);
}
}

(void)FUN8(VAR1->VAR25, VAR39, VAR40, &VAR23,
sizeof(VAR23));

if (getenv("") != NULL) {
int VAR41;
VAR41 = VAR1->VAR42 * 2000; 
(void)FUN8(VAR1->VAR25, VAR43,
VAR44, &VAR41,
sizeof(VAR41));
}
VAR33 = 0;
if (connect(VAR1->VAR25, VAR13, VAR14) < 0) {
*VAR7 = VAR33;
FUN9(VAR1, VAR38, "", VAR33, VAR13,
VAR14);
FUN6(VAR1);
return (0);
}
VAR1->VAR26 |= VAR27;
}


FUN10((VAR45)VAR4, (VAR2*)&VAR20);
VAR19[0] = FUN11(&VAR20, VAR46);
FUN12(VAR3, VAR22);
VAR19[1] = FUN11(VAR22, VAR4);
if (FUN13(VAR1->VAR25, VAR19, 2) != (VAR46 + VAR4)) {
*VAR7 = VAR33;
FUN7(VAR1, VAR38, "", VAR33);
FUN6(VAR1);
return (0);
}

VAR47:
VAR21 = VAR5;
VAR20 = VAR46;
while ((VAR18 = read(VAR1->VAR25, (char *)VAR21, (int)VAR20)) > 0) {
VAR21 += VAR18;
if ((VAR20 -= VAR18) == 0)
break;
}
if (VAR18 <= 0) {
*VAR7 = VAR33;
FUN7(VAR1, VAR38, "", VAR33);
FUN6(VAR1);

if (*VAR7 == VAR48 && !VAR16) {
VAR16 = 1;
FUN6(VAR1);
goto VAR24;
}
FUN6(VAR1);
return (0);
}
VAR17 = FUN14(VAR5);
if (VAR17 > VAR6) {
FUN15(VAR1->VAR49 & VAR50,
(VAR51, "")
);
VAR15 = 1;
VAR20 = VAR6;
} else
VAR20 = VAR17;
if (VAR20 < VAR52) {

FUN15(VAR1->VAR49 & VAR50,
(VAR51, "", VAR20));
*VAR7 = VAR53;
FUN6(VAR1);
return (0);
}
VAR21 = VAR5;
while (VAR20 != 0 && (VAR18 = read(VAR1->VAR25, (char *)VAR21, (int)VAR20)) > 0){
VAR21 += VAR18;
VAR20 -= VAR18;
}
if (VAR18 <= 0) {
*VAR7 = VAR33;
FUN7(VAR1, VAR38, "", VAR33);
FUN6(VAR1);
return (0);
}
if (VAR15) {

VAR11->VAR54 = 1;
VAR20 = VAR17 - VAR6;
while (VAR20 != 0) {
char VAR55[VAR56];

VAR18 = read(VAR1->VAR25, VAR55,
(VAR20 > sizeof VAR55) ? sizeof VAR55 : VAR20);
if (VAR18 > 0)
VAR20 -= VAR18;
else
break;
}
}

if (VAR10->VAR57 != VAR11->VAR57) {
FUN16((VAR1->VAR49 & VAR50) ||
(VAR1->VAR58 & VAR59),
(VAR51, ""),
VAR5, (VAR17 > VAR6) ? VAR6: VAR17);
goto VAR47;
}


return (VAR17);
}