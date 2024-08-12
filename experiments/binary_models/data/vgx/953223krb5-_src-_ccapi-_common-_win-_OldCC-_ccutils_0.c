VAR1 FUN1() {
OSVERSIONINFO VAR2;
DWORD   VAR3              = 0;
BOOL    VAR4   = VAR5;
BOOL    VAR6               = VAR5;

memset(&VAR2, 0, sizeof(VAR2));
VAR2.VAR7 = sizeof(VAR8);

VAR3 = !FUN2(&VAR2);       

if (!VAR3) {
switch(VAR2.VAR9) {
case VAR10:
VAR6 = VAR5;
VAR4 = VAR11;
break;
case VAR12:
VAR6 = VAR11;
VAR4 = VAR11;
break;
case VAR13:
default:
VAR6 = VAR5;
break;
}

if (!VAR4) {
FUN3("", VAR14);
VAR3  = 1;
}
}

return (!VAR3 && VAR6 && VAR4);
}

char*   FUN4(char* VAR15, char* VAR16) {
LPSTR       VAR17      = NULL;
cc_int32    VAR18             = VAR19;

VAR17 = malloc(strlen(VAR15) + strlen(VAR16) + 3);
if (!VAR17) VAR18 = FUN5(VAR20);

if (!VAR18) {
strcpy(VAR17, VAR15);
strcat(VAR17, "");
strcat(VAR17, VAR16);
}

return VAR17;
}

VAR21 FUN6(char* VAR22, char* VAR16) {
LPSTR                   VAR17  = NULL;
HANDLE                  VAR23      = NULL;
PSECURITY_ATTRIBUTES    VAR24         = 0;        
SECURITY_ATTRIBUTES     VAR25          = { 0 };    
DWORD                   VAR3      = 0;        

VAR24 = FUN1() ? &VAR25 : 0;

if (FUN1()) {
VAR25.VAR26 = sizeof(VAR25);
VAR3 = FUN7(&VAR25.VAR27);
FUN5(VAR3);
}

if (!VAR3) {
VAR17 = FUN4(VAR22, VAR16);