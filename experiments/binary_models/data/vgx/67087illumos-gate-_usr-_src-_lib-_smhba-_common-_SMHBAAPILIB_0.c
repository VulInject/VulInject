VAR1
FUN1()
{
HBARegisterLibraryFunc VAR2;
HBARegisterLibraryV2Func VAR3;
SMHBARegisterLibraryFunc VAR4;
HBALoadLibraryFunc	VAR5;
HBAGetVersionFunc	VAR6;
int			VAR7;
HBA_STATUS		VAR8;
HBA_UINT32		VAR9;


LONG		VAR10;
HKEY		VAR11, VAR12;
FILETIME		VAR13;
TCHAR		VAR14[256];
DWORD		VAR15, VAR16, VAR17;
BYTE		VAR18[VAR19];
VAR20	*VAR21;

if (VAR22 != NULL) {

return (VAR23);
}

VAR10 = FUN2(VAR24, "",
0, VAR25, &VAR11);
if (VAR10 != VAR26) {

return (VAR23);
}

for (VAR15 = 0; ; VAR15++) {
VAR16 = 255;	
VAR10 = FUN3(VAR11, VAR15,
(char *)&VAR14, &VAR16, NULL,
NULL, NULL, &VAR13);
if (VAR10 == VAR27) {
break;	
} else if (VAR10 == VAR28) { 

;
}

VAR10 = FUN2(VAR11, VAR14, 0, VAR25,
&VAR12);
if (VAR10 != VAR26) {
FUN4(VAR11);

return (VAR23);

}

VAR16 = VAR19;
VAR10 = RegQueryValueEx(VAR12, "", NULL, &VAR17,
VAR18, &VAR16);
if (VAR10 != VAR26) {
FUN4(VAR12);

continue;
}
VAR21 = (VAR20 *)calloc(1, sizeof (VAR20));
if (VAR21 == NULL) {

FUN4(VAR12);

return (VAR23);
}
VAR21->VAR8 = VAR29;
VAR21->VAR30 = VAR22;
VAR21->VAR31 = VAR32;
VAR32++;
VAR22 = VAR21;


VAR21->VAR33 = LoadLibrary(VAR18);
if (VAR21->VAR33 == NULL) {


goto VAR34;
}
VAR21->VAR35 = strdup(VAR18);
FUN5(1, "", VAR18, 0, 0);

VAR4 = (VAR36)
FUN6(VAR21->VAR33, "");
if (VAR4 != NULL) {
VAR8 = ((VAR4)(VAR37 *)
(&VAR21->VAR38.VAR39));
if (VAR8 != VAR40) {


goto VAR34;
} else {
VAR21->VAR41 = VAR42;
}
} else {

VAR3 = (VAR43)FUN6(
VAR21->VAR33, "");
if (VAR3 != NULL) {

VAR8 = ((VAR3)
(VAR44 *)(&VAR21->VAR38.VAR45));
if (VAR8 != VAR40) {


goto VAR34;
} else {
VAR21->VAR41 = VAR46;
}
} else {

VAR2 = (VAR47)
FUN6(VAR21->VAR33, "");
if (VAR2 == NULL) {

goto VAR34;
}

VAR8 = ((VAR2)(
(VAR48 *)(&VAR21->VAR38.VAR45)));
if (VAR8 != VAR40) {


goto VAR34;
} else {
VAR21->VAR41 = VAR49;
}
}
}



VAR6 = FUN7(VAR21, VAR50);
if (VAR6 != NULL) {
if (VAR21->VAR41 == VAR42) {

VAR9 = ((VAR6)());
if (VAR9 < VAR51) {
goto VAR34;
}
} else {


VAR9 = ((VAR6)());
if (VAR9 < VAR52) {
goto VAR34;
}
}
} else {

goto VAR34;
}

VAR5 = FUN7(VAR21, VAR53);
if (VAR5 == NULL) {



goto VAR34;
}

VAR8 = ((VAR5)());
if (VAR8 != VAR40) {

continue;
}

VAR21->VAR8 = VAR54;

VAR34: 
FUN4(VAR12);
}
FUN4(VAR11);

VAR55		*VAR56;
char		VAR57[512];		
char		*VAR58;		
char		*VAR59;		
char		VAR60[256];
char		*VAR61;
VAR20	*VAR21;

FUN8(&VAR62);
if (VAR22 != NULL) {
(void) fprintf(VAR63,
""
"");
FUN9(&VAR62);
return (VAR23);
}

(void) strcpy(VAR60, "");

if ((VAR56 = fopen(VAR60, "")) == NULL) {
(void) FUN10("", VAR60);
FUN9(&VAR62);
return (VAR23);
}


while ((VAR56 != NULL) &&
(fgets(VAR57, sizeof (VAR57), VAR56))) {

if ((VAR57[0] == '') || (VAR57[0] == '')) {
continue;
}


if ((VAR58 = strtok(VAR57, "")) != NULL) {
if (strlen(VAR58) >= 64) {
(void) fprintf(VAR63,
"",
VAR58, VAR60);
}
}

if ((VAR59 = strtok(NULL, "")) != NULL) {
if (strlen(VAR59) >= 256) {
(void) fprintf(VAR63,
"",
VAR59, VAR60);
}
}


if ((VAR61 = strtok(NULL, "")) != NULL) {
(void) fprintf(VAR63, ""%VAR64\"",
VAR61, VAR60);
}


if (VAR58 == NULL ||
strlen(VAR58) == 0 ||
VAR59 == NULL ||
(strlen(VAR59) == 0)) {
continue;
}


if (strcmp(VAR58, "") == 0) {
VAR65 = FUN11(VAR59, NULL, 10);

continue;
}

VAR21 = (VAR20 *)calloc(1, sizeof (VAR20));
if (VAR21 == NULL) {
(void) fprintf(VAR63, "");
FUN9(&VAR62);
fclose(VAR56);
return (VAR23);
}
VAR21->VAR8 = VAR29;
VAR21->VAR66 = strdup(VAR58);
VAR21->VAR35 = strdup(VAR59);
VAR21->VAR67 = 0;
VAR21->VAR41 = VAR68;
VAR21->VAR31 = VAR32;
VAR32++;
VAR21->VAR30 = VAR22;
VAR22 = VAR21;


if ((VAR21->VAR33 = dlopen(VAR59, VAR69)) == NULL) {

continue;
}

VAR4 = (VAR36)
FUN12(VAR21->VAR33, "");
if (VAR4 != NULL) {

VAR8 = ((VAR4)
(&VAR21->VAR38.VAR39));
if (VAR8 != VAR40) {

continue;
} else {
VAR21->VAR41 = VAR42;
}
} else {
VAR3 = (VAR43)
FUN12(VAR21->VAR33, "");
if (VAR3 != NULL) {

VAR8 = ((VAR3)((VAR44 *)
(&VAR21->VAR38.VAR45)));
if (VAR8 != VAR40) {

continue;
} else {
VAR21->VAR41 = VAR46;
}
} else {

VAR2 = (VAR47)
FUN12(VAR21->VAR33, "");
if (VAR2 == NULL) {

(void) fprintf(VAR63,
""
"", VAR59);
FUN5(1, ""
"",
VAR59, 0, 0);
continue;
}

VAR8 = ((VAR2)
((VAR48 *)(&VAR21->VAR38.VAR45)));
if (VAR8 != VAR40) {

(void) fprintf(VAR63,
""
"",
VAR59);
FUN5(1,
""
"",
VAR59, 0, 0);
continue;
} else {
VAR21->VAR41 = VAR49;
}
}
}



if ((VAR6 = FUN7(VAR21, VAR50))
== NULL) {
continue;
}
if (VAR21->VAR41 == VAR42) {
VAR9 = ((VAR6)());
if (VAR9 < VAR51) {
(void) FUN10(""
"",
VAR9, VAR51);
continue;
}
} else {
VAR9 = ((VAR6)());


if (VAR9 < VAR52) {
(void) FUN10(""
"",
VAR9, VAR52);
continue;
}
}

FUN5(1, "", VAR59, VAR9, 0);
VAR5 = FUN7(VAR21, VAR53);
if (VAR5 == NULL) {

(void) fprintf(VAR63,
""
"", VAR59);
FUN5(1, ""
"", VAR59, 0, 0);
continue;
}

if ((VAR8 = ((VAR5)())) != VAR40) {

(void) fprintf(VAR63,
"",
VAR59);
FUN5(1, "", VAR59, 0, 0);
FUN5(1, "", VAR8, 0, 0);
continue;
}

VAR21->VAR8 = VAR54;
}
fclose(VAR56);

VAR7 = pthread_mutex_init(&VAR70, NULL);
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR71, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR72, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR73, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR74, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR75, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR76, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR77, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR78, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR79, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR80, NULL);
}
if (VAR7 == 0) {
VAR7 = pthread_mutex_init(&VAR81, NULL);
}
if (VAR7 != 0) {
FUN13("");
FUN9(&VAR62);
return (VAR23);
}
FUN9(&VAR62);
FUN14(&VAR62);
FUN14(&VAR70);
FUN14(&VAR71);
FUN14(&VAR72);
FUN14(&VAR73);
FUN14(&VAR74);
FUN14(&VAR75);
FUN14(&VAR81);
FUN14(&VAR76);
FUN14(&VAR77);
FUN14(&VAR78);
FUN14(&VAR79);
FUN14(&VAR80);

return (VAR40);
}