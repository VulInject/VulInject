static int FUN1(curl_socket_t VAR1, struct VAR2 *VAR3)
{
ssize_t VAR4;
size_t VAR5;
const char *VAR6;
char *VAR7 = NULL;
char *VAR8 = NULL;
size_t VAR9 = 0;
VAR10 *VAR11;
bool VAR12 = VAR13;
bool VAR14 = VAR15;
size_t VAR16;
int VAR17 = 0;
int VAR18;

static char VAR19[256];

FUN2("", VAR3->VAR20, VAR3->VAR21);

switch(VAR3->VAR22) {
default:
case VAR23:
break; 
case VAR24:
VAR5 = strlen(VAR25);
for(;;) {
VAR4 = FUN3(VAR1, VAR25, VAR5);
if(VAR26)
return -1;
if(VAR4 != (VAR27)VAR5) {
FUN2("");
break;
}
}
return -1;
case VAR28:

return 0;
}

VAR3->open = VAR15;

if(VAR3->VAR20 < 0) {
size_t VAR29;
char VAR30[64];

switch(VAR3->VAR20) {
case VAR31:
FUN2("");
VAR6 = VAR32;
break;
case VAR33:

FUN2("");
FUN4(VAR30, sizeof(VAR30), ""
VAR34 "", FUN5());
VAR29 = strlen(VAR30);
FUN4(VAR19, sizeof(VAR19),
"",
VAR29, VAR30);
VAR6 = VAR19;
break;
case VAR35:
FUN2("");
return -1;
case VAR36:
FUN2("");
VAR6 = VAR37;
break;
case VAR38:
FUN2("");
VAR6 = VAR39;
break;
case VAR40:
default:
FUN2("");
if(VAR3->VAR41 == VAR42) {
VAR6 = VAR43;
}
else {
VAR6 = VAR44;
}
break;
}

VAR5 = strlen(VAR6);
}
else {
VAR10 *VAR45 = FUN6(VAR3->VAR20);
char VAR46[80]="";
if(0 != VAR3->VAR21)
FUN4(VAR46, sizeof(VAR46), "", VAR3->VAR21);
if(!VAR45) {
VAR17 = VAR47;
FUN2("", VAR17, strerror(VAR17));
FUN2("");
return 0;
}
else {
VAR17 = FUN7(&VAR7, &VAR5, "", VAR46, VAR45);
fclose(VAR45);
if(VAR17) {
FUN2("", VAR17);
return 0;
}
VAR6 = VAR7;
}

if(VAR26) {
free(VAR7);
return -1;
}


VAR45 = FUN6(VAR3->VAR20);
if(!VAR45) {
VAR17 = VAR47;
FUN2("", VAR17, strerror(VAR17));
FUN2("");
free(VAR7);
return 0;
}
else {

VAR17 = FUN7(&VAR8, &VAR9, "", "", VAR45);
fclose(VAR45);
if(VAR17) {
FUN2("", VAR17);
free(VAR7);
return 0;
}
}
}

if(VAR26) {
free(VAR7);
free(VAR8);
return -1;
}


if(strstr(VAR6, "") || !VAR5) {
VAR12 = VAR15;
FUN2(""VAR48\"");
}
if(strstr(VAR6, "")) {
VAR49 = VAR13;
FUN2(""VAR50\"");
}
else
VAR49 = VAR15;

VAR11 = fopen(VAR51, "");
if(!VAR11) {
VAR17 = VAR47;
FUN2("", VAR17, strerror(VAR17));
FUN2("", VAR51);
FUN2("" VAR51);
free(VAR7);
free(VAR8);
return -1;
}

VAR16 = VAR5;
do {

size_t VAR52 = VAR5;
if(VAR52 > 200)
VAR52 = 200;
VAR4 = FUN3(VAR1, VAR6, VAR52);
if(VAR4 < 0) {
VAR14 = VAR13;
break;
}
else {
FUN2("", VAR4);
}

fwrite(VAR6, 1, (VAR53)VAR4, VAR11);
if(VAR26)
break;

VAR5 -= VAR4;
VAR6 += VAR4;
} while(VAR5>0);


if(VAR3->VAR54) {
FUN2("", VAR3->VAR55);
VAR5 = VAR3->VAR55;
do {
size_t VAR52 = VAR5;
if(VAR52 > 200)
VAR52 = 200;
VAR4 = FUN3(VAR1, VAR3->VAR54 + (VAR3->VAR55 - VAR5),
VAR52);
if(VAR4 < 0) {
VAR14 = VAR13;
break;
}
VAR5 -= VAR4;
} while(VAR5 > 0);

free(VAR3->VAR54);
VAR3->VAR55 = 0;
}

do {
VAR18 = fclose(VAR11);
} while(VAR18 && ((VAR17 = VAR47) == VAR56));
if(VAR18)
FUN2("",
VAR51, VAR17, strerror(VAR17));

if(VAR26) {
free(VAR7);
free(VAR8);
return -1;
}

if(VAR14) {
FUN2(""
"",
VAR16-VAR5, VAR16);
free(VAR7);
free(VAR8);
return -1;
}

FUN2("" VAR51,
VAR16);
free(VAR7);

if(VAR9 > 0) {
char VAR57[32];
int VAR58;
int VAR52;
VAR7 = VAR8;
do {
if(2 == sscanf(VAR7, "", VAR57, &VAR52)) {
if(!strcmp("", VAR57)) {
FUN2("", VAR52);
VAR58 = VAR52 * 4;
while(VAR58 > 0) {
VAR58--;
VAR18 = FUN8(250);
if(VAR26)
break;
if(VAR18) {

VAR17 = VAR47;
FUN2("",
VAR17, strerror(VAR17));
break;
}
}
if(!VAR58)
FUN2("", VAR52);
}
else
FUN2("");
}
VAR7 = strchr(VAR7, '');
if(VAR7)
VAR7++;
else
VAR7 = NULL;
} while(VAR7 && *VAR7);
}
free(VAR8);
VAR3->open = VAR12;

VAR59 = VAR3->VAR20;
VAR60 = VAR3->VAR21;

return 0;
}