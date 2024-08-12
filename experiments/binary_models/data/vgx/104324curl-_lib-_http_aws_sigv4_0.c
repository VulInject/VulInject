VAR1 FUN1(struct VAR2 *VAR3, bool VAR4)
{
CURLcode VAR5 = VAR6;
struct VAR7 *VAR8 = VAR3->VAR8;
size_t VAR9;
const char *VAR10;
char VAR11[VAR12 + 1]="";
char VAR13[VAR12 + 1]="";
char VAR14[VAR12 + 1]="";
char VAR15[VAR12 + 1]="";
const char *VAR16 = VAR8->VAR17.VAR18;
time_t VAR19;
struct tm VAR20;
char VAR21[VAR22];
char VAR23[9];
struct dynbuf VAR24;
struct dynbuf VAR25;
char *VAR26 = NULL;
char *VAR27 = NULL;
size_t VAR28 = 0;
const char *VAR29 = VAR3->VAR30.VAR31;
size_t VAR32 = 0;
unsigned char VAR33[32];
char VAR34[65];
char *VAR35 = NULL;
char *VAR36 = NULL;
char *VAR37 = NULL;
char *VAR38 = NULL;
const char *VAR39 = VAR3->VAR40.VAR41.VAR39 ? VAR3->VAR40.VAR41.VAR39 : "";
char *VAR42 = NULL;
unsigned char VAR43[32] = {0};
unsigned char VAR44[32] = {0};
char *VAR45 = NULL;

FUN2(!VAR4);
(void)VAR4;

if(FUN3(VAR3, FUN4(""))) {

return VAR46;
}


FUN5(&VAR24, VAR47);
FUN5(&VAR25, VAR47);


VAR10 = VAR3->VAR30.VAR48[VAR49] ?
VAR3->VAR30.VAR48[VAR49] : "";


(void)sscanf(VAR10, "" VAR50 ""
"" VAR50 ""
"" VAR50 ""
"" VAR50 "",
VAR11, VAR13, VAR14, VAR15);
if(!VAR11[0]) {
FUN6(VAR3, "");
VAR5 = VAR51;
goto VAR52;
}
else if(!VAR13[0])
strcpy(VAR13, VAR11);

if(!VAR15[0]) {
char *VAR53 = strchr(VAR16, '');
if(!VAR53) {
FUN6(VAR3, "");
VAR5 = VAR54;
goto VAR52;
}
VAR9 = VAR53 - VAR16;
if(VAR9 > VAR12) {
FUN6(VAR3, "");
VAR5 = VAR54;
goto VAR52;
}
strncpy(VAR15, VAR16, VAR9);
VAR15[VAR9] = '';

if(!VAR14[0]) {
const char *VAR55 = VAR53 + 1;
const char *VAR56 = strchr(VAR55, '');
if(!VAR56) {
FUN6(VAR3, "");
VAR5 = VAR54;
goto VAR52;
}
VAR9 = VAR56 - VAR55;
if(VAR9 > VAR12) {
FUN6(VAR3, "");
VAR5 = VAR54;
goto VAR52;
}
strncpy(VAR14, VAR55, VAR9);
VAR14[VAR9] = '';
}
}

{
char *VAR57 = getenv("");
if(VAR57)
VAR19 = 0;
else
FUN7(&VAR19);
}
FUN7(&VAR19);
VAR5 = FUN8(VAR19, &VAR20);
if(VAR5) {
goto VAR52;
}
if(!FUN9(VAR21, sizeof(VAR21), "", &VAR20)) {
VAR5 = VAR6;
goto VAR52;
}

VAR5 = FUN10(VAR3, VAR16, VAR21, VAR13,
&VAR26, &VAR24, &VAR25);
if(VAR5)
goto VAR52;
VAR5 = VAR6;

memcpy(VAR23, VAR21, sizeof(VAR23));
VAR23[sizeof(VAR23) - 1] = 0;

VAR27 = FUN11(VAR3, VAR13, &VAR28);

if(!VAR27) {
if(VAR29) {
if(VAR3->VAR30.VAR58 < 0)
VAR32 = strlen(VAR29);
else
VAR32 = (VAR59)VAR3->VAR30.VAR58;
}
if(FUN12(VAR33, (const unsigned char *) VAR29,
VAR32))
goto VAR52;

FUN13(VAR34, VAR33, sizeof(VAR34));
VAR27 = VAR34;
VAR28 = strlen(VAR34);
}

{
Curl_HttpReq VAR60;
const char *VAR61;

FUN14(VAR3, VAR8, &VAR61, &VAR60);

VAR35 =
FUN15("" 
"" 
"" 
"" 
"" 
"",  
VAR61,
VAR3->VAR40.VAR62.VAR63,
VAR3->VAR40.VAR62.VAR64 ? VAR3->VAR40.VAR62.VAR64 : "",
FUN16(&VAR24),
FUN16(&VAR25),
(int)VAR28, VAR27);
if(!VAR35)
goto VAR52;
}


FUN17(VAR11, VAR11, strlen(VAR11));
VAR36 = FUN15("", VAR11);
if(!VAR36)
goto VAR52;

VAR37 = FUN15("",
VAR23, VAR14, VAR15, VAR36);
if(!VAR37)
goto VAR52;

if(FUN12(VAR33, (unsigned char *) VAR35,
strlen(VAR35)))
goto VAR52;

FUN13(VAR34, VAR33, sizeof(VAR34));


FUN18(VAR11, VAR11, strlen(VAR11));


VAR38 = FUN15("" 
"" 
"" 
"",  
VAR11,
VAR21,
VAR37,
VAR34);
if(!VAR38) {
goto VAR52;
}


VAR42 = FUN15("", VAR11,
VAR3->VAR40.VAR41.VAR65 ?
VAR3->VAR40.VAR41.VAR65 : "");
if(!VAR42)
goto VAR52;

FUN19(VAR42, strlen(VAR42), VAR23, strlen(VAR23), VAR43);
FUN19(VAR43, sizeof(VAR43), VAR14, strlen(VAR14), VAR44);
FUN19(VAR44, sizeof(VAR44), VAR15, strlen(VAR15), VAR43);
FUN19(VAR43, sizeof(VAR43), VAR36, strlen(VAR36), VAR44);
FUN19(VAR44, sizeof(VAR44), VAR38, strlen(VAR38), VAR43);

FUN13(VAR34, VAR43, sizeof(VAR34));


VAR45 = FUN15(""
""
""
""
"",
VAR11,
VAR39,
VAR37,
FUN16(&VAR25),
VAR34,
VAR26);
if(!VAR45) {
goto VAR52;
}

FUN20(VAR3->VAR40.VAR41.VAR66);
VAR3->VAR40.VAR41.VAR66 = VAR45;
VAR3->VAR40.VAR67.VAR68 = VAR69;
VAR5 = VAR46;

VAR52:
FUN21(&VAR24);
FUN21(&VAR25);
free(VAR35);
free(VAR36);
free(VAR37);
free(VAR38);
free(VAR42);
free(VAR26);
return VAR5;
}