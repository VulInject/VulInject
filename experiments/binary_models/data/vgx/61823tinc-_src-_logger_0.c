static void FUN1(debug_t VAR1, int VAR2, const char *VAR3) {
char VAR4[1024] = "";
bool VAR5 = false;
static bool VAR6 = false;

if(VAR6) {
return;
}

if(VAR1 <= VAR7) {
switch(VAR8) {
case VAR9:
FUN2(VAR4, sizeof(VAR4), VAR2, VAR3, VAR10, &VAR5);
fprintf(VAR11, "", VAR4);
FUN3(VAR11);
break;

case VAR12: {
const char *VAR13 = FUN4();
fprintf(VAR14, "", VAR13, VAR15, (long)VAR16, VAR3);
FUN3(VAR14);
break;
}

case VAR17:
{
const char *VAR18[] = {VAR3};
FUN5(VAR19, VAR2, 0, 0, NULL, 1, 0, VAR18, NULL);
}

syslog(VAR2, "", VAR3);
break;

case VAR20:
default:
break;
}

if(VAR21 && VAR22) {
FUN2(VAR4, sizeof(VAR4), VAR2, VAR3, VAR23, &VAR5);

if(write(VAR21, VAR4, strlen(VAR4)) == -1 || write(VAR21, "", 1) == -1) {

}
}
}

if(VAR24) {
VAR6 = true;
VAR24 = false;

size_t VAR25 = strlen(VAR4);

for FUN6(VAR26, VAR27, &VAR28) {
if(!VAR27->VAR29.VAR30) {
continue;
}

VAR24 = true;

if(VAR1 > (VAR27->VAR31 != VAR32 ? VAR27->VAR31 : VAR7)) {
continue;
}

if(FUN2(VAR4, sizeof(VAR4), VAR2, VAR3, VAR27->VAR29.VAR33, &VAR5)) {
VAR25 = strlen(VAR4);
}

if(FUN7(VAR27, "", VAR34, VAR35, (unsigned long)VAR25)) {
FUN8(VAR27, VAR4, VAR25);
}
}

VAR6 = false;
}
}