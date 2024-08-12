static void FUN1(void) {
static const char* VAR1[][2] = {


{"", ""},
{"", ""},
{"", ""}
};


int32_t VAR2;
for(VAR2=0; VAR2<2; VAR2++){
const char* VAR3 = "";
double VAR4 = 123.567;
VAR5* VAR6;
UNumberFormatStyle VAR7 = VAR8;
UErrorCode VAR9 = VAR10;
int32_t VAR11;

if(VAR2 == 1){ 
VAR7 = VAR12;
}

VAR6 = FUN2(VAR7, NULL, 0, VAR3, NULL, &VAR9);
if (FUN3(VAR9)) {
FUN4("",
VAR3, (int)VAR7, FUN5(VAR9));
continue;
}

if(VAR2 == 0){ 
if(FUN6(VAR6, VAR13) != VAR14) {
FUN7("");
}

FUN8(VAR6, VAR13, VAR15);
}

if(FUN6(VAR6, VAR13) != VAR15) {
FUN7("");
}

for (VAR11=0; VAR11<FUN9(VAR1); ++VAR11) {
UChar VAR16[64];
int32_t VAR17;
UChar VAR18[4];
UChar VAR19[64];
int32_t VAR20;
UFieldPosition VAR21 = {0};

FUN10(VAR1[VAR11][0], VAR18, 3);
VAR17 = FUN11(VAR1[VAR11][1], VAR16, FUN9(VAR16));

FUN12(VAR6, VAR22, VAR18, 3, &VAR9);
FUN13("", &VAR9);

VAR20 = FUN14(VAR6, VAR4, VAR19, FUN9(VAR19),
&VAR21, &VAR9);
FUN13("", &VAR9);

if(VAR20 != VAR17 || FUN15(VAR19, VAR16) != 0) {
FUN7("",
FUN16(VAR16, VAR17), FUN16(VAR19, VAR20));
}

}

FUN17(VAR6);
}
}

static UChar VAR23[] = 
{0xA4,0x23,0x2C,0x23,0x23,0x30,0x2E,0x30,0x30,0x3B,0xA4,0x23,0x2C,0x23,0x23,0x30,0x2E,0x30,0x30,0};






static const VAR24* VAR25 = VAR23;

static UChar VAR26[] = 
{0x24,0x31,0x30,0x30,0x2E,0x30,0x30,0};

static UChar VAR27[] = {0};

enum { VAR28 = 64, VAR29 = 128 };

static void FUN18(void) {
UErrorCode VAR9 = VAR10;
VAR5* VAR30 = FUN2(VAR8, NULL, 0, "", NULL, &VAR9);
if ( FUN19(VAR9) ) {
FUN20(VAR30, false, VAR23, -1, NULL, &VAR9);
if (FUN19(VAR9)) {
UChar VAR31[VAR28];
int32_t VAR32 = FUN21(VAR30, false, VAR31, VAR28, &VAR9);
if (FUN3(VAR9)) {
FUN7("", FUN5(VAR9));
} else if (FUN15(VAR31, VAR25) != 0) {
FUN7("", FUN16(VAR25,-1), FUN16(VAR31,VAR32));
}
FUN22(VAR30, VAR33, VAR27, 0, &VAR9);
if (FUN19(VAR9)) {
VAR32 = FUN14(VAR30, -100.0, VAR31, VAR28, NULL, &VAR9);
if (FUN3(VAR9)) {
FUN7("", FUN5(VAR9));
} else if (FUN15(VAR31, VAR26) != 0) {
FUN7("", FUN16(VAR26,-1), FUN16(VAR31,VAR32));
}
} else {
FUN7("", FUN5(VAR9));
}
} else {
FUN7("", FUN5(VAR9));
}
FUN17(VAR30);
} else {
FUN4("", FUN5(VAR9));
}
}