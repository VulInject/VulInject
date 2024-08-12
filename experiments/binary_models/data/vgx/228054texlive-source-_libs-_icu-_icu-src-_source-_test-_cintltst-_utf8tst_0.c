static void FUN1() {
static const uint8_t VAR1[]
= {0x61, 0xe4, 0xba, 0x8c, 0x7f, 0xfe, 0x62, 0xc5, 0x7f, 0x61, 0x80, 0x80, 0xe0, 0x00 };
static const int16_t VAR2[]
= {0,    1,    1,    1,    4,    5,    6,    7,    8,    9,    10,   11,   12,   13,  14 };
static const int16_t VAR3[]
= {0,    1,    4,    4,    4,    5,    6,    7,    8,    9,    10,   11,   12,   13,  14 };

uint32_t VAR4=0;
int32_t VAR5=0, VAR6=0;
for(VAR5=0; VAR5<=FUN2(VAR1); VAR5++){
if (VAR5<FUN2(VAR1)){
VAR6=VAR5;
FUN3(VAR1, 0, VAR6);
if(VAR6 != VAR2[VAR4]){
FUN4("", VAR5, VAR2[VAR4], VAR6);
}
VAR6=VAR5;
FUN5(VAR1, 0, VAR6);
if(VAR6 != VAR2[VAR4]){
FUN4("", VAR5, VAR2[VAR4], VAR6);
}
}
VAR6=VAR5;
FUN6(VAR1,0, VAR6, (VAR7)sizeof(VAR1));
if(VAR6 != VAR3[VAR4]){
FUN4("", VAR5, VAR3[VAR4], VAR6);
}
VAR6=VAR5;
FUN7(VAR1,0, VAR6, (VAR7)sizeof(VAR1));
if(VAR6 != VAR3[VAR4]){
FUN4("", VAR5, VAR3[VAR4], VAR6);
}

VAR4++;
}
}