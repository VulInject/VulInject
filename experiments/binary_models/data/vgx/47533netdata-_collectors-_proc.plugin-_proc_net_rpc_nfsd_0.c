int FUN1(int VAR1, usec_t VAR2) {
(void)VAR2;
static VAR3 *VAR4 = NULL;
static int VAR5 = -1, VAR6 = -1, VAR7 = -1, VAR8 = -1, VAR9 = -1, VAR10 = -1, VAR11 = -1, VAR12 = -1, VAR13 = -1, VAR14 = -1;
static int VAR15 = 0, VAR16 = 0, VAR17 = 0, VAR18 = 0;

if(FUN2(!VAR4)) {
char VAR19[VAR20 + 1];
FUN3(VAR19, VAR20, "", VAR21, "");
VAR4 = FUN4(FUN5("", "", VAR19), "", VAR22);
if(FUN2(!VAR4)) return 1;
}

VAR4 = FUN6(VAR4);
if(FUN2(!VAR4)) return 0; 

if(FUN2(VAR5 == -1)) {
VAR5 = FUN7("", "", 1);
VAR6 = FUN7("", "", 1);
VAR7 = FUN7("", "", 1);
VAR8 = FUN7("", "", 1);
VAR9 = FUN7("", "", 1);
VAR10 = FUN7("", "", 1);
VAR11 = FUN7("", "", 1);
VAR12 = FUN7("", "", 1);
VAR13 = FUN7("", "", 1);
VAR14 = FUN7("", "", 1);
}



if(VAR5) VAR5 = 1;
if(VAR6) VAR6 = 1;
if(VAR7) VAR7 = 1;
if(VAR8) VAR8 = 1;
if(VAR9) VAR9 = 1;
if(VAR10) VAR10 = 1;
if(VAR11) VAR11 = 1;
if(VAR12) VAR12 = 1;
if(VAR13) VAR13 = 1;
if(VAR14) VAR14 = 1;

size_t VAR23 = FUN8(VAR4), VAR24;

char *VAR25;
unsigned long long VAR26 = 0, VAR27 = 0, VAR28 = 0;
unsigned long long VAR29 = 0;
unsigned long long VAR30 = 0, VAR31 = 0;
unsigned long long VAR32 = 0;
unsigned long long VAR33 = 0, VAR34 = 0, VAR35 = 0, VAR36 = 0;
unsigned long long VAR37 = 0, VAR38 = 0, VAR39 = 0, VAR40 = 0;

for(VAR24 = 0; VAR24 < VAR23 ;VAR24++) {
size_t VAR41 = FUN9(VAR4, VAR24);
if(FUN2(!VAR41)) continue;

VAR25 = FUN10(VAR4, VAR24, 0);

if(VAR5 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 4)) {
FUN11("", VAR25, VAR41, 4);
continue;
}

VAR26 = FUN12(FUN10(VAR4, VAR24, 1), NULL);
VAR27 = FUN12(FUN10(VAR4, VAR24, 2), NULL);
VAR28 = FUN12(FUN10(VAR4, VAR24, 3), NULL);

unsigned long long VAR42 = VAR26 + VAR27 + VAR28;
if(VAR42 == 0ULL) VAR5 = -1;
else VAR5 = 2;
}
else if(VAR6 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 6)) {
FUN11("", VAR25, VAR41, 6);
continue;
}

VAR29 = FUN12(FUN10(VAR4, VAR24, 1), NULL);



if(VAR29 == 0ULL) VAR6 = -1;
else VAR6 = 2;
}
else if(VAR7 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 3)) {
FUN11("", VAR25, VAR41, 3);
continue;
}

VAR30 = FUN12(FUN10(VAR4, VAR24, 1), NULL);
VAR31 = FUN12(FUN10(VAR4, VAR24, 2), NULL);

unsigned long long VAR42 = VAR30 + VAR31;
if(VAR42 == 0ULL) VAR7 = -1;
else VAR7 = 2;
}
else if(VAR8 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 13)) {
FUN11("", VAR25, VAR41, 13);
continue;
}

VAR32 = FUN12(FUN10(VAR4, VAR24, 1), NULL);





VAR8 = 2;
}
else if(VAR9 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 5)) {
FUN11("", VAR25, VAR41, 5);
continue;
}

VAR33 = FUN12(FUN10(VAR4, VAR24, 1), NULL);
VAR34 = FUN12(FUN10(VAR4, VAR24, 2), NULL);
VAR35 = FUN12(FUN10(VAR4, VAR24, 3), NULL);
VAR36 = FUN12(FUN10(VAR4, VAR24, 4), NULL);

unsigned long long VAR42 = VAR33 + VAR34 + VAR35 + VAR36;
if(VAR42 == 0ULL) VAR9 = -1;
else VAR9 = 2;
}
else if(VAR10 == 1 && strcmp(VAR25, "") == 0) {
if(FUN2(VAR41 < 6)) {
FUN11("", VAR25, VAR41, 6);
continue;
}

VAR37 = FUN12(FUN10(VAR4, VAR24, 1), NULL);
VAR38 = FUN12(FUN10(VAR4, VAR24, 3), NULL);
VAR39 = FUN12(FUN10(VAR4, VAR24, 4), NULL);
VAR40 = FUN12(FUN10(VAR4, VAR24, 5), NULL);

unsigned long long VAR42 = VAR37 + VAR38 + VAR39 + VAR40;
if(VAR42 == 0ULL) VAR10 = -1;
else VAR10 = 2;
}
else if(VAR11 == 1 && strcmp(VAR25, "") == 0) {



unsigned long long VAR42 = 0;
unsigned int VAR43, VAR44;
for(VAR43 = 0, VAR44 = 2; VAR44 < VAR41 && VAR45[VAR43].VAR46[0] ; VAR43++, VAR44++) {
VAR45[VAR43].VAR47 = FUN12(FUN10(VAR4, VAR24, VAR44), NULL);
VAR45[VAR43].VAR48 = 1;
VAR42 += VAR45[VAR43].VAR47;
}

if(VAR42 == 0ULL) {
if(!VAR15) {
FUN11("");
VAR15 = 1;
}
VAR11 = 0;
}
else VAR11 = 2;
}
else if(VAR12 == 1 && strcmp(VAR25, "") == 0) {



unsigned long long VAR42 = 0;
unsigned int VAR43, VAR44;
for(VAR43 = 0, VAR44 = 2; VAR44 < VAR41 && VAR49[VAR43].VAR46[0] ; VAR43++, VAR44++) {
VAR49[VAR43].VAR47 = FUN12(FUN10(VAR4, VAR24, VAR44), NULL);
VAR49[VAR43].VAR48 = 1;
VAR42 += VAR49[VAR43].VAR47;
}

if(VAR42 == 0ULL) {
if(!VAR16) {
FUN13("");
VAR16 = 1;
}
VAR12 = 0;
}
else VAR12 = 2;
}
else if(VAR13 == 1 && strcmp(VAR25, "") == 0) {



unsigned long long VAR42 = 0;
unsigned int VAR43, VAR44;
for(VAR43 = 0, VAR44 = 2; VAR44 < VAR41 && VAR50[VAR43].VAR46[0] ; VAR43++, VAR44++) {
VAR50[VAR43].VAR47 = FUN12(FUN10(VAR4, VAR24, VAR44), NULL);
VAR50[VAR43].VAR48 = 1;
VAR42 += VAR50[VAR43].VAR47;
}

if(VAR42 == 0ULL) {
if(!VAR17) {
FUN13("");
VAR17 = 1;
}
VAR13 = 0;
}
else VAR13 = 2;
}
else if(VAR14 == 1 && strcmp(VAR25, "") == 0) {



unsigned long long VAR42 = 0;
unsigned int VAR43, VAR44;
for(VAR43 = 0, VAR44 = 2; VAR44 < VAR41 && VAR51[VAR43].VAR46[0] ; VAR43++, VAR44++) {
VAR51[VAR43].VAR47 = FUN12(FUN10(VAR4, VAR24, VAR44), NULL);
VAR51[VAR43].VAR48 = 1;
VAR42 += VAR51[VAR43].VAR47;
}

if(VAR42 == 0ULL) {
if(!VAR18) {
FUN13("");
VAR18 = 1;
}
VAR14 = 0;
}
else VAR14 = 2;
}
}

if(VAR5 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR55    = NULL,
*VAR56  = NULL,
*VAR57 = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR60
, VAR1
, VAR61
);

VAR55    = FUN15(VAR53, "",    NULL, 1, 1, VAR62);
VAR56  = FUN15(VAR53, "",  NULL, 1, 1, VAR62);
VAR57 = FUN15(VAR53, "", NULL, 1, 1, VAR62);
}

FUN16(VAR53, VAR55,    VAR26);
FUN16(VAR53, VAR56,  VAR27);
FUN16(VAR53, VAR57, VAR28);
FUN17(VAR53);
}

if(VAR6 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR63                 = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR64
, VAR1
, VAR65
);
FUN18(VAR53, VAR66);

VAR63                 = FUN15(VAR53, "",                 NULL,  1, 1, VAR67);
}

FUN16(VAR53, VAR63,                 VAR29);
FUN17(VAR53);
}

if(VAR7 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR68  = NULL,
*VAR69 = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR70
, VAR1
, VAR71
);

VAR68  = FUN15(VAR53, "",  NULL,  1, 1000, VAR62);
VAR69 = FUN15(VAR53, "", NULL, -1, 1000, VAR62);
}

FUN16(VAR53, VAR68,  VAR30);
FUN16(VAR53, VAR69, VAR31);
FUN17(VAR53);
}

if(VAR8 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR72 = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR73
, VAR1
, VAR65
);

VAR72 = FUN15(VAR53, "", NULL, 1, 1, VAR67);
}

FUN16(VAR53, VAR72, VAR32);
FUN17(VAR53);
}

if(VAR9 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR74 = NULL,
*VAR75 = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR76
, VAR1
, VAR61
);
FUN18(VAR53, VAR66);

VAR74 = FUN15(VAR53, "", NULL, 1, 1, VAR62);
VAR75 = FUN15(VAR53, "", NULL, 1, 1, VAR62);
}


(void)VAR33;
(void)VAR36;

FUN16(VAR53, VAR74, VAR34);
FUN16(VAR53, VAR75, VAR35);
FUN17(VAR53);
}

if(VAR10 == 2) {
static VAR52 *VAR53 = NULL;
static VAR54 *VAR77      = NULL,
*VAR78 = NULL,
*VAR79   = NULL;

if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR80
, VAR1
, VAR65
);
FUN18(VAR53, VAR66);

VAR77      = FUN15(VAR53, "",      NULL,  1, 1, VAR62);
VAR78 = FUN15(VAR53, "", NULL, -1, 1, VAR62);
VAR79   = FUN15(VAR53, "",   NULL, -1, 1, VAR62);
}


(void)VAR40;

FUN16(VAR53, VAR77, VAR37);
FUN16(VAR53, VAR78, VAR38);
FUN16(VAR53, VAR79, VAR39);
FUN17(VAR53);
}

if(VAR11 == 2) {
static VAR52 *VAR53 = NULL;
if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR81
, VAR1
, VAR61
);
}

size_t VAR43;
for(VAR43 = 0; VAR45[VAR43].VAR48 ; VAR43++) {
if(FUN2(!VAR45[VAR43].VAR82))
VAR45[VAR43].VAR82 = FUN15(VAR53, VAR45[VAR43].VAR46, NULL, 1, 1, VAR62);

FUN16(VAR53, VAR45[VAR43].VAR82, VAR45[VAR43].VAR47);
}

FUN17(VAR53);
}

if(VAR12 == 2) {
static VAR52 *VAR53 = NULL;
if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR83
, VAR1
, VAR61
);
}

size_t VAR43;
for(VAR43 = 0; VAR49[VAR43].VAR48 ; VAR43++) {
if(FUN2(!VAR49[VAR43].VAR82))
VAR49[VAR43].VAR82 = FUN15(VAR53, VAR49[VAR43].VAR46, NULL, 1, 1, VAR62);

FUN16(VAR53, VAR49[VAR43].VAR82, VAR49[VAR43].VAR47);
}

FUN17(VAR53);
}

if(VAR13 == 2) {
static VAR52 *VAR53 = NULL;
if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR84
, VAR1
, VAR61
);
}

size_t VAR43;
for(VAR43 = 0; VAR50[VAR43].VAR48 ; VAR43++) {
if(FUN2(!VAR50[VAR43].VAR82))
VAR50[VAR43].VAR82 = FUN15(VAR53, VAR50[VAR43].VAR46, NULL, 1, 1, VAR62);

FUN16(VAR53, VAR50[VAR43].VAR82, VAR50[VAR43].VAR47);
}

FUN17(VAR53);
}

if(VAR14 == 2) {
static VAR52 *VAR53 = NULL;
if(FUN2(!VAR53)) {
VAR53 = FUN14(
""
, ""
, NULL
, ""
, NULL
, ""
, ""
, VAR58
, VAR59
, VAR85
, VAR1
, VAR61
);
}

size_t VAR43;
for(VAR43 = 0; VAR51[VAR43].VAR48 ; VAR43++) {
if(FUN2(!VAR51[VAR43].VAR82))
VAR51[VAR43].VAR82 = FUN15(VAR53, VAR51[VAR43].VAR46, NULL, 1, 1, VAR62);

FUN16(VAR53, VAR51[VAR43].VAR82, VAR51[VAR43].VAR47);
}

FUN17(VAR53);
}

return 0;
}