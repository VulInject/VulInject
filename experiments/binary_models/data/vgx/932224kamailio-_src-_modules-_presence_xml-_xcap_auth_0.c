int FUN1(str VAR1, str VAR2, VAR3 *VAR4);

int FUN2(VAR5 *VAR6)
{
xmlDocPtr VAR7 = NULL;
xmlNodePtr VAR8 = NULL, VAR9 = NULL;
xmlNodePtr VAR10 = NULL;
char *VAR11 = NULL;
int VAR12 = 0;


if(VAR13) {
VAR6->VAR14 = VAR15;
VAR6->VAR16.VAR17 = NULL;
VAR6->VAR16.VAR18 = 0;
return 0;
}

if(VAR6->VAR19 == NULL) {
VAR6->VAR14 = VAR20;
VAR6->VAR16.VAR17 = NULL;
VAR6->VAR16.VAR18 = 0;
return 0;
}

VAR7 =
FUN3(VAR6->VAR19->VAR17, VAR6->VAR19->VAR18);
if(VAR7 == NULL) {
FUN4("");
return -1;
}

VAR8 = FUN5(VAR6, VAR7);
if(VAR8 == NULL) {

if(VAR6->VAR14 != VAR20) {
VAR6->VAR14 = VAR21;
VAR6->VAR16 = VAR22;
}
goto VAR23;
}

VAR6->VAR14 = VAR20;
VAR6->VAR16.VAR17 = NULL;
VAR6->VAR16.VAR18 = 0;


VAR9 = FUN6(VAR8, "");
if(VAR9 == NULL) {
FUN7("");
goto VAR23;
}
FUN7("", VAR9->VAR24);

VAR10 = FUN6(VAR9, "");
if(VAR10 == NULL) {
FUN7("");
goto VAR23;
}
VAR11 = (char *)FUN8(VAR10);
FUN7("", VAR10->VAR24);
FUN7("", VAR11);

if(VAR11 == NULL) {
FUN4("");
VAR12 = -1;
goto VAR23;
}
if(FUN9((char *)VAR11, "", 5) == 0) {
VAR6->VAR14 = VAR21;
VAR6->VAR16.VAR17 = "";
VAR6->VAR16.VAR18 = 8;
} else if(FUN9((char *)VAR11, "", 7) == 0) {
VAR6->VAR14 = VAR20;
} else if(FUN9((char *)VAR11, "", 12) == 0) {
VAR6->VAR14 = VAR15;
VAR6->VAR16.VAR17 = "";
VAR6->VAR16.VAR18 = 12;
} else if(FUN9((char *)VAR11, "", 5) == 0) {
VAR6->VAR14 = VAR15;
} else {
FUN4("");
VAR12 = -1;
}

VAR23:
if(VAR11)
FUN10(VAR11);
FUN11(VAR7);
return VAR12;
}