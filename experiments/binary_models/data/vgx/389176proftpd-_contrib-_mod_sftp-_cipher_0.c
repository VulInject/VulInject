int FUN1(struct VAR1 *VAR2, unsigned char *VAR3,
uint32_t VAR4, unsigned char **VAR5, VAR6 *VAR7) {
struct VAR8 *VAR9;
VAR10 *VAR11;
size_t VAR12 = 0, VAR13;
uint32_t VAR14;

VAR9 = &(VAR15[VAR16]);
VAR11 = VAR17[VAR16];
VAR13 = VAR18[VAR16];
VAR12 = FUN2();
VAR14 = *VAR7;

if (VAR9->VAR19 != NULL) {
int VAR20;
unsigned char *VAR21 = NULL, *VAR22 = NULL;

if (*VAR5 == NULL) {
size_t VAR23;


VAR23 = (VAR4 + VAR13 - 1);
VAR21 = VAR22 = FUN3(VAR2->VAR24, VAR23);

} else {
VAR21 = VAR22 = *VAR5;
}

if (VAR2->VAR25 == 0) {
if (VAR12 > 0) {
unsigned char VAR26[1];


if (FUN4(VAR11, VAR27, 1, VAR26) != 1) {
(void) FUN5(VAR28, VAR29,
"", VAR9->VAR30,
FUN6());
VAR31 = VAR32;
return -1;
}
}

if (VAR2->VAR33 > 0 &&
VAR2->VAR34 == NULL) {
VAR2->VAR34 = FUN3(VAR2->VAR24, VAR2->VAR33);
memcpy(VAR2->VAR34, VAR3, VAR2->VAR33);
memcpy(VAR21, VAR3, VAR2->VAR33);


VAR22 += VAR2->VAR33;
VAR3 += VAR2->VAR33;
VAR4 -= VAR2->VAR33;
VAR14 -= VAR2->VAR33;

if (VAR12 > 0) {
if (FUN7(VAR11, NULL, VAR2->VAR34, VAR2->VAR33) < 0) {
(void) FUN5(VAR28, VAR29,
"", VAR9->VAR30,
FUN6());
VAR31 = VAR32;
return -1;
}
}
}
}

if (VAR14 % VAR13 != 0) {
(void) FUN5(VAR28, VAR29,
""
"", VAR14, (unsigned long) VAR2->VAR33,
(unsigned int) VAR13);
return -1;
}

if (VAR2->VAR25 > 0 &&
VAR12 > 0) {
unsigned char *VAR35 = NULL;
uint32_t VAR36 = VAR12;


VAR35 = VAR3 + (VAR4 - VAR12);

if (FUN4(VAR11, VAR37, VAR36,
VAR35) != 1) {
(void) FUN5(VAR28, VAR29,
"", VAR9->VAR30,
FUN6());
VAR31 = VAR32;
return -1;
}

VAR4 -= VAR12;
}

VAR20 = FUN7(VAR11, VAR22, VAR3, VAR4);
if (VAR20 < 0) {
(void) FUN5(VAR28, VAR29,
"", VAR9->VAR30,
FUN6());
return -1;
}

if (VAR2->VAR25 > 0) {
*VAR7 = VAR4;

} else {

*VAR7 = VAR2->VAR33 + VAR4;
}

*VAR5 = VAR21;

if (VAR2->VAR25 > 0 &&
VAR12 > 0) {

if (FUN7(VAR11, NULL, NULL, 0) < 0) {
(void) FUN5(VAR28, VAR29,
"", VAR9->VAR30,
FUN6());
VAR31 = VAR32;
return -1;
}
}

return 0;
}

*VAR5 = VAR3;
*VAR7 = VAR4;
return 0;
}