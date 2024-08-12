static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4,
int VAR5) {
int VAR6 = 0, VAR7 = 0;
const unsigned char *VAR8 = NULL;
size_t VAR9 = 0;
unsigned long VAR10 = 0, *VAR11 = NULL, VAR12 = 0;

if (VAR4 == NULL ||
(strlen(VAR4) == 0)) {
FUN2(VAR13, 1,
"");
(void) FUN3(VAR14, VAR15,
"", VAR3);
VAR16 = VAR17;
return -1;
}

switch (VAR18) {
case VAR19:
case VAR20:
case VAR21: {
VAR10 = (unsigned long) FUN4(NULL);
break;
}

case VAR22:
VAR11 = &VAR10;
break;

default:
FUN3(VAR14, VAR15,
"");
return 0;
}

VAR6 = FUN5(VAR23);
if (VAR6 < 0) {
(void) FUN3(VAR14, VAR15,
"", strerror(VAR24));
}

VAR6 = FUN6(VAR2, VAR23, VAR3, &VAR8, &VAR9,
VAR11);
VAR7 = VAR24;

if (FUN7(VAR23) < 0) {
(void) FUN3(VAR14, VAR15,
"", strerror(VAR24));
}

if (VAR6 < 0) {
if (VAR7 == VAR25) {
FUN3(VAR14, VAR15,
"", VAR3);

} else {
FUN3(VAR14, VAR15,
"", VAR3,
strerror(VAR7));
}



if (VAR5 == VAR26) {
if (VAR27 & VAR28) {
(void) FUN3(VAR14, VAR15,
"", VAR3);
VAR16 = VAR29;
return -1;
}
}

return 0;
}

VAR6 = FUN8(VAR2, VAR3, VAR4, VAR8, VAR9, VAR10);
if (VAR6 == 0) {
FUN9((char *) VAR8, VAR9);

(void) FUN3(VAR14, VAR15,
"", VAR3);


FUN10(VAR2, VAR3, VAR10 + 1);

VAR16 = VAR30;
return 1;
}


FUN2(VAR13, 3,
"");

switch (VAR18) {
case VAR19:
case VAR20:
case VAR21:
VAR12 = VAR10 - VAR31;
break;

case VAR22:
VAR12 = VAR10 - 1;
break;
}

VAR6 = FUN8(VAR2, VAR3, VAR4, VAR8, VAR9, VAR12);
if (VAR6 == 0) {
FUN9((char *) VAR8, VAR9);

FUN2(VAR13, 3,
""
"");

(void) FUN3(VAR14, VAR15,
"", VAR3);


FUN10(VAR2, VAR3, VAR10 + 1);

VAR16 = VAR30;
return 1;
}

FUN2(VAR13, 3,
"");

switch (VAR18) {
case VAR19:
case VAR20:
case VAR21:
VAR12 = VAR10 + VAR31;
break;

case VAR22:
VAR12 = VAR10 + 1;
break;
}

VAR6 = FUN8(VAR2, VAR3, VAR4, VAR8, VAR9, VAR12);
if (VAR6 == 0) {
FUN9((char *) VAR8, VAR9);

FUN2(VAR13, 3,
""
"");

(void) FUN3(VAR14, VAR15,
"", VAR3);


FUN10(VAR2, VAR3, VAR10 + 1);

VAR16 = VAR30;
return 1;
}

FUN9((char *) VAR8, VAR9);

if (VAR5 == VAR26) {
(void) FUN3(VAR14, VAR15,
"", VAR3);
VAR16 = VAR17;
return -1;
}

return 0;
}