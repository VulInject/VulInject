static inline int FUN1() {
static char VAR1[VAR2 + 1] = "";
static VAR3 *VAR4 = NULL;
static kernel_uint_t VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
static usec_t VAR10 = 0, VAR11 = 0;

if(FUN2(!VAR4)) {
FUN3(VAR1, VAR2, "", VAR12);
VAR4 = FUN4(VAR1, "", VAR13);
if(FUN2(!VAR4)) goto VAR14;
}

VAR4 = FUN5(VAR4);
if(FUN2(!VAR4)) goto VAR14;

VAR11 = VAR10;
VAR10 = FUN6();

VAR15++;


kernel_uint_t VAR16 = 0;

FUN7(VAR17, VAR5, FUN8(FUN9(VAR4, 0,  1)), VAR10, VAR11);
FUN7(VAR16, VAR9, FUN8(FUN9(VAR4, 0,  2)), VAR10, VAR11);
FUN7(VAR18, VAR6, FUN8(FUN9(VAR4, 0,  3)), VAR10, VAR11);
FUN7(VAR19, VAR7, FUN8(FUN9(VAR4, 0, 10)), VAR10, VAR11);

VAR17 += VAR16;

if(VAR20) {

kernel_uint_t VAR21 = 0;


FUN7(VAR21, VAR8, FUN8(FUN9(VAR4, 0, 11)), VAR10, VAR11);

VAR19 += VAR21;


VAR17 -= (VAR17 > VAR19) ? VAR19 : VAR17;
}

if(FUN2(VAR22 == 1)) {
VAR17 = 0;
VAR18 = 0;
VAR19 = 0;
}

return 1;

VAR14:
VAR17 = 0;
VAR18 = 0;
VAR19 = 0;
return 0;
}