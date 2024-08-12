static int FUN1(VAR1 *VAR2, const char *VAR3,
const char *VAR4) {
int VAR5, VAR6;

VAR5 = FUN2(VAR3, VAR4);
VAR6 = VAR7;

if (VAR5 == 0) {
int VAR8;
const char *VAR9 = NULL, *VAR10 = NULL;
size_t VAR11 = 0, VAR12 = 0;
VAR13 *VAR14;
uint32_t VAR15, VAR16;

VAR14 = FUN3(VAR17);
FUN4(VAR14, "");

VAR9 = FUN5(VAR14, VAR3, &VAR11);
if (VAR9 == NULL) {
VAR6 = VAR7;

FUN6(VAR14);
VAR7 = VAR6;
return VAR5;
}

VAR10 = FUN5(VAR14, VAR4, &VAR12);
if (VAR10 == NULL) {
VAR6 = VAR7;

FUN6(VAR14);
VAR7 = VAR6;
return VAR5;
}

VAR15 = FUN7(VAR9, VAR11);
VAR16 = FUN7(VAR10, VAR12);
VAR8 = VAR18->VAR19;

if (FUN8(VAR8, VAR15) < 0) {
FUN9(VAR20, 3,
"", strerror(VAR7));
}   

(void) FUN10(VAR8, VAR9, VAR11, VAR15);

if (FUN11(VAR8, VAR15) < 0) {
FUN9(VAR20, 3,
"", strerror(VAR7));
}

if (FUN8(VAR8, VAR16) < 0) {
FUN9(VAR20, 3,
"", strerror(VAR7));
}

(void) FUN10(VAR8, VAR10, VAR12, VAR16);

if (FUN11(VAR8, VAR16) < 0) {
FUN9(VAR20, 3,
"", strerror(VAR7));
}

FUN6(VAR14);
}

VAR7 = VAR6;
return VAR5;
}