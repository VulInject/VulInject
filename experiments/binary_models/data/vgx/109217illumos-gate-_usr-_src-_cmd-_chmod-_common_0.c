VAR1
FUN1(char *VAR2, mode_t VAR3, mode_t VAR4, char *VAR5, char *VAR6,
VAR7 *VAR8, VAR7 *VAR9)
{


int VAR10;	
int VAR11;
int VAR12;
int VAR13;
int VAR14;

int VAR15 = 0;
int VAR16;

mode_t VAR17;
mode_t VAR18;
mode_t VAR19 = VAR3;	
mode_t VAR20;

VAR21 = VAR2;

*VAR8 = 0;
*VAR9 = 0;

if (FUN2(*VAR21))
return (FUN3(VAR19, VAR8, VAR9));

do {


if ((VAR17 = FUN4()) == VAR22) {
VAR16 = 1;
VAR17 = VAR23;
} else {
VAR16 = 0;
}

while (VAR10 = FUN5()) {


VAR15++;
VAR18 = 0;
VAR14 = 0;
VAR11 = VAR12 = VAR13 = 0;

switch (*VAR21) {
case '':
VAR18 = (VAR3 & VAR24) >> 6;
goto VAR25;
case '':
VAR18 = (VAR3 & VAR26) >> 3;
goto VAR25;
case '':
VAR18 = (VAR3 & VAR27);
VAR25:
VAR18 &= (VAR28|VAR29|VAR30);
VAR18 |= (VAR18 << 3) |
(VAR18 << 6);
VAR21++;
VAR14 = 1;
}

while (VAR14 == 0) {
switch (*VAR21++) {
case '':
VAR18 |= VAR28;
continue;
case '':
VAR18 |= VAR29;
continue;
case '':
VAR18 |= VAR30;
VAR13 = 1;
continue;
case '':
if (((VAR19 & VAR31) == VAR32) ||
(VAR19 & VAR30)) {
VAR18 |= VAR30;
VAR13 = 1;
}
continue;
case '':
VAR18 |= VAR33;
VAR17 |= VAR33;
VAR11 = 1;
continue;
case '':
VAR18 |= VAR34;
VAR12 = 1;
continue;
case '':
VAR18 |= VAR35;
continue;
default:
VAR21--;
VAR14 = 1;
}
}

VAR18 &= VAR17;

switch (VAR10) {
case '':
if (VAR16) {
VAR18 &= ~VAR4;
}



if (VAR13 == 1 &&
(VAR18 & VAR26 & VAR30) ==
(VAR26 & VAR30)) {

if (VAR11 == 1 && !FUN6(VAR3)) {
FUN7(1, 3,
FUN8(""
""
""));
}


if (((VAR3 & VAR26 &
(VAR33 | VAR30)) == VAR33) &&
!FUN6(VAR3)) {
FUN7(2, 0,
FUN8(""
""
""),
VAR6);
return (VAR19);
}
}


if (VAR12 == 1 && (VAR18 & VAR26 & VAR34)
== (VAR26 & VAR34)) {

if (VAR11 == 1 &&
((VAR18 & VAR26 & VAR30) ==
(VAR26 & VAR30)) &&
!FUN6(VAR3)) {
FUN7(1, 4,
FUN8(""
""
""));
}



if (((VAR3 & VAR26 &
(VAR33 | VAR30)) == VAR33) &&
!FUN6(VAR3)) {
FUN7(2, 0,
FUN8(""
""
""), VAR6);
return (VAR19);
}
}


if ((VAR12 == 1) &&
((VAR3 & VAR31) != VAR32)) {

if (((VAR3 | VAR18) &
VAR17 & VAR30 & (VAR24 | VAR26)) !=
(VAR17 & VAR30 & (VAR24 | VAR26))) {
FUN7(2, 0,
FUN8(""
""
""
""),
VAR6);
return (VAR19);
}
}


if (VAR11 == 1) {

if ((VAR3 & VAR26 & VAR30) ==
(VAR26 & VAR30) &&
!FUN6(VAR3)) {
FUN7(2, 0,
FUN8(""
""
""
""),
VAR6);
return (VAR19);
}
}

if ((VAR20 = (VAR18 & VAR36) >> 3)
!= 0) {
*VAR8 &= ~VAR20;
*VAR9 |= VAR20;
}


VAR3 |= VAR18;
break;

case '':
if (VAR16) {
VAR18 &= ~VAR4;
}


if (VAR11 == 1 && VAR12 == 0 &&
(VAR3 & VAR26 & (VAR33 | VAR30)) !=
VAR33) {
VAR18 &= ~VAR33;
}


if (VAR12 == 1 &&
((VAR3 & VAR31) != VAR32) &&
VAR11 == 0 &&
(VAR3 & VAR26 & (VAR33 | VAR30)) ==
VAR33) {
VAR18 &= ~(VAR26 & VAR34);
}


if (VAR13 == 1 && VAR12 == 0 &&
((VAR17 & VAR26) == VAR26 ||
(VAR17 & VAR24) == VAR24) &&
(VAR3 & VAR17 & (VAR34 | VAR30)) ==
(VAR17 & (VAR34 | VAR30)) &&
!FUN6(VAR3)) {
FUN7(2, 0,
FUN8(""
""
""
""),
VAR6);

if ((VAR18 & VAR24 & VAR34) !=
(VAR24 & VAR34) && (VAR3 &
VAR24 & (VAR34 | VAR30)) ==
(VAR17 & VAR24 &
(VAR34 | VAR30))) {
VAR18 |= VAR24 & VAR34;
}
if ((VAR18 & VAR26 & VAR34) !=
(VAR26 & VAR34) &&
(VAR3 & VAR26 &
(VAR34 | VAR30)) ==
(VAR17 & VAR26 &
(VAR34 | VAR30))) {
VAR18 |= VAR26 & VAR34;
}
}

if ((VAR20 = (VAR18 & VAR36) >> 3)
!= 0) {
*VAR8 |= VAR20;
*VAR9 &= ~VAR20;
}


VAR3 &= ~VAR18;
break;

case '':
if (VAR16) {
VAR18 &= ~VAR4;
}

if (VAR11 == 1) {

if ((VAR18 & VAR26 & VAR30) ==
(VAR26 & VAR30) &&
!FUN6(VAR3)) {
FUN7(1, 3,
FUN8(""
""
""));
}


if ((VAR17 & VAR26) != VAR26) {
VAR3 &= ~(VAR26 & VAR30);
}
}


if (VAR12 == 1 &&
(VAR18 & VAR30 & (VAR24 | VAR26)) !=
(VAR17 & VAR30 & (VAR24 | VAR26)) &&
!FUN6(VAR3)) {
FUN7(1, 2,
FUN8(""
""
""));
}


if ((VAR19 & VAR31) == VAR32)
VAR18 = (VAR18 &
~VAR37) | (VAR19 & VAR37);



if ((VAR20 = (VAR18 & VAR36) >> 3)
!= 0) {
*VAR8 = VAR36 >> 3;
*VAR9 = VAR20;
}

VAR3 &= ~VAR17;
VAR3 |= VAR18;
break;
}
}
} while (*VAR21++ == '');

if (*--VAR21 || VAR15 == 0) {
FUN7(1, 5, FUN8(""));
}

return (VAR3);
}