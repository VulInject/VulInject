static VAR1 FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = VAR3->VAR5;
struct VAR6 *VAR7 = &VAR5->VAR8.VAR7;
const char *VAR9 = VAR3->VAR10.VAR11[VAR12];
const char *VAR13 = VAR3->VAR10.VAR11[VAR14];

FUN2(VAR3, "",
VAR9 != NULL ? VAR9 : "");
FUN2(VAR3, "",
VAR13 != NULL ? VAR13 : "");

if(VAR13) {
const char *VAR15 = NULL;
char *VAR16 = NULL;
size_t VAR17;
size_t VAR18 = 0;
size_t VAR19 = 0;


VAR15 = FUN3(VAR7->VAR20,
VAR21);
const char *VAR22;
size_t VAR23 = 0;
unsigned char VAR24[32];

VAR22 = FUN4(VAR7->VAR20, &VAR23, NULL);
if(VAR22) {
if(!FUN5(VAR24, (const unsigned char *) VAR22, VAR23))
VAR15 = (char *) VAR24;
}

if(!VAR15) {
FUN6(VAR3,
""
"");
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}


if(FUN8(VAR15, 32, &VAR16,
&VAR17) != VAR28) {
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}

if(!VAR16) {
FUN6(VAR3, "");
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}

FUN2(VAR3, "", VAR16);


while((VAR13[VAR18] != '') && VAR13[VAR18]) {
VAR18++;
}


while((VAR16[VAR19] != '') && VAR16[VAR19]) {
VAR19++;
}


if((VAR18 != VAR19) ||
FUN9(VAR16, VAR13, VAR18)) {
free(VAR16);

FUN6(VAR3,
""
"", VAR16, VAR13);
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}

free(VAR16);

FUN2(VAR3, "");
}

if(VAR9) {
char VAR29[33];
const char *VAR15 = NULL;

VAR15 = FUN3(VAR7->VAR20,
VAR30);

if(VAR15) {

int VAR31;
for(VAR31 = 0; VAR31 < 16; VAR31++) {
FUN10(&VAR29[VAR31*2], 3, "", (unsigned char) VAR15[VAR31]);
}

FUN2(VAR3, "", VAR29);
}


if(!VAR15 || !FUN11(VAR29, VAR9)) {
if(VAR15) {
FUN6(VAR3,
""
"", VAR29, VAR9);
}
else {
FUN6(VAR3,
""
"");
}
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}
FUN2(VAR3, "");
}

if(!VAR9 && !VAR13) {
if(VAR3->VAR10.VAR32) {
size_t VAR33 = 0;
int VAR34 = 0;
int VAR35 = 0;

const char *VAR36 = FUN4(VAR7->VAR20,
&VAR33, &VAR34);
if(VAR36) {
int VAR37 = FUN12(VAR34);
FUN13(VAR3, true);
VAR35 = VAR3->VAR10.FUN14(VAR3->VAR10.VAR38,
VAR37, VAR36, VAR33);
FUN13(VAR3, false);
if(VAR35!= VAR39) {
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}
}
else {
FUN7(VAR3, VAR25);
VAR7->VAR26 = VAR27;
return VAR7->VAR26;
}
return VAR28;
}
else {
return FUN15(VAR3);
}
}
else {

return VAR28;
}
}