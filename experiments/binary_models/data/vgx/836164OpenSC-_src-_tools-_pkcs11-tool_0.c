static int FUN1(CK_SESSION_HANDLE VAR1)
{
int             VAR2 = 0;
CK_RV           VAR3;
CK_OBJECT_HANDLE VAR4, VAR5;
CK_MECHANISM    VAR6 = { VAR7, NULL, 0 };
CK_MECHANISM_TYPE VAR8;
CK_SESSION_INFO VAR9;
CK_ULONG        VAR10, VAR11;
unsigned char   VAR12[512]; 
CK_ULONG        VAR13 = 0;
CK_ULONG        VAR14;
unsigned char   VAR15[1024], VAR16[1024];
CK_ULONG        VAR17, VAR18;
unsigned char   VAR19[100];
char 		*VAR20;

CK_MECHANISM_TYPE VAR21[] = {
VAR22,
VAR23,
VAR24,
VAR25,
VAR26,
VAR27,
0xffffff
};
size_t VAR28 = sizeof(VAR21)/sizeof(VAR29);
unsigned char  *VAR30[] = {

NULL,


(unsigned char *) "",

VAR19,
VAR19,
VAR19,
VAR19,
};
CK_ULONG        VAR31[] = {
0,		
35,
sizeof(VAR19),
sizeof(VAR19),
sizeof(VAR19),
sizeof(VAR19),
};

VAR3 = VAR32->FUN2(VAR1, &VAR9);
if (VAR3 != VAR33)
FUN3("", VAR3);
if (!(VAR9.VAR34 & VAR35)) {
FUN4("");
return VAR2;
}

if (!FUN5(VAR9.VAR36, VAR37|VAR38, VAR21, VAR28, &VAR8)) {
FUN4("");
return VAR2;
}

FUN4("");
for (VAR11 = 0; FUN6(VAR1, VAR39, &VAR5, NULL, 0, VAR11); VAR11++) {
FUN4("", VAR11);
if ((VAR20 = FUN7(VAR1, VAR5, NULL)) != NULL) {
FUN4("", VAR20);
free(VAR20);
}
if (FUN8(VAR1, VAR5) != VAR40) {
FUN4("");
continue;
}

if (!FUN9(VAR1, VAR5)) {
FUN4("");
continue;
}

VAR13 = (FUN10(VAR1, VAR5) + 7) / 8;
if(!VAR13) {
FUN4("");
continue;
}
FUN4("");
break;
}
if (VAR5 == VAR41) {
fprintf(VAR42, "");
return 0;
}




switch (VAR8) {
case VAR23:
VAR14 = 35;
memcpy(VAR12, VAR30[1], VAR14);
break;
case VAR22:
VAR14 = VAR13;
FUN11(VAR12, VAR14);
break;
default:
VAR14 = sizeof(VAR12);	
FUN11(VAR12, VAR14);
break;
}

if (VAR8 == VAR22) {

memset(VAR12, 0, 11); 
}

VAR6.VAR43 = VAR8;
VAR3 = VAR32->FUN12(VAR1, &VAR6, VAR5);

if (VAR3 == VAR44)
return VAR2;
if (VAR3 != VAR33)
FUN3("", VAR3);
if (FUN13(VAR1, VAR5))
FUN14(VAR1,VAR45);

VAR3 = VAR32->FUN15(VAR1, VAR12, 5);
if (VAR3 == VAR46) {
FUN16("", VAR3);
} else if (VAR3 != VAR33) {
FUN17("", VAR3);
VAR2++;
} else {
if (VAR3 != VAR33)
FUN3("", VAR3);

VAR3 = VAR32->FUN15(VAR1, VAR12 + 5, 10);
if (VAR3 != VAR33)
FUN3("", VAR3);

VAR3 = VAR32->FUN15(VAR1, VAR12 + 15, VAR14 - 15);
if (VAR3 != VAR33)
FUN3("", VAR3);

VAR17 = sizeof(VAR15);
VAR3 = VAR32->FUN18(VAR1, VAR15, &VAR17);
if (VAR3 != VAR33)
FUN3("", VAR3);

VAR3 = VAR32->FUN12(VAR1, &VAR6, VAR5);
if (VAR3 != VAR33)
FUN3("", VAR3);
if (FUN13(VAR1, VAR5))
FUN14(VAR1,VAR45);

VAR18 = sizeof(VAR16);
VAR3 = VAR32->FUN19(VAR1, VAR12, VAR14, VAR16, &VAR18);
if (VAR3 != VAR33)
FUN3("", VAR3);

if (VAR17 != VAR18) {
VAR2++;
FUN4("");
} else if (memcmp(VAR15, VAR16, VAR17) != 0) {
VAR2++;
FUN4("");
} else
FUN4("");
}



VAR6.VAR43 = VAR8;
VAR3 = VAR32->FUN12(VAR1, &VAR6, VAR5);
if (VAR3 != VAR33)
FUN3("", VAR3);

VAR18 = 1;		
VAR3 = VAR32->FUN19(VAR1, VAR12, VAR14, VAR16, &VAR18);
if (VAR3 != VAR47) {
VAR2++;
FUN4("", FUN20(VAR3), (int) VAR3);
}


VAR3 = VAR32->FUN19(VAR1, VAR12, VAR14, NULL, &VAR18);
if (VAR3 != VAR33) {
VAR2++;
FUN4("",
FUN20(VAR3), (int) VAR3);
}
if (FUN13(VAR1, VAR5))
FUN14(VAR1,VAR45);

VAR3 = VAR32->FUN19(VAR1, VAR12, VAR14, VAR16, &VAR18);
if (VAR3 == VAR48) {
FUN4("");
VAR2++;
} else if (VAR3 != VAR33)
FUN3("", VAR3);




for (VAR10 = 0; VAR10 < 10; VAR10++)
for (VAR11 = 0; VAR11 < 10; VAR11++)
VAR19[10 * VAR10 + VAR11] = (unsigned char) (0x30 + VAR11);


VAR14 = VAR13;
VAR12[0] = 0x00;
VAR12[1] = 0x01;
memset(VAR12 + 2, 0xFF, VAR14 - 3 - VAR31[1]);
if (VAR14 >= 36)
VAR12[VAR14 - 36] = 0x00;
memcpy(VAR12 + (VAR14 - VAR31[1]), VAR30[1], VAR31[1]);
VAR30[0] = VAR12;
VAR31[0] = VAR14;

FUN4("");
for (VAR10 = 0; VAR21[VAR10] != 0xffffff; VAR10++) {
VAR6.VAR43 = VAR21[VAR10];
VAR2 += FUN21(VAR1, &VAR6, VAR5,
VAR30[VAR10], VAR31[VAR10], VAR19, sizeof(VAR19),
VAR13, VAR10);
}



for (VAR10 = 0; VAR21[VAR10] != 0xffffff; VAR10++)
if (VAR21[VAR10] == VAR8)
break;
VAR6.VAR43 = VAR21[VAR10];
VAR11 = 1;  
while (FUN6(VAR1, VAR39, &VAR5, NULL, 0, VAR11++) != 0) {
unsigned char   *VAR49;
CK_ULONG        VAR50;
CK_ULONG	VAR51;

FUN4("", (int) (VAR11-1));
if ((VAR20 = FUN7(VAR1, VAR5, NULL)) != NULL) {
FUN4("", VAR20);
free(VAR20);
}
if ((int) (VAR11-1) != 0)
FUN4("");

if (FUN8(VAR1, VAR5) != VAR40) {
FUN4("");
continue;
}
if (!FUN9(VAR1, VAR5)) {
FUN4("");
continue;
}
if ((VAR49 = FUN22(VAR1, VAR5, &VAR50)) != NULL) {
int VAR52;

VAR52 = FUN6(VAR1, VAR53, &VAR4, VAR49, VAR50, 0);
free(VAR49);
if (VAR52 == 0) {
FUN4("");
continue;
}
}
else {
FUN4("");
continue;
}

VAR51 = FUN10(VAR1, VAR5);
VAR13 = (VAR51 + 7) / 8;
if (!VAR13)   {
FUN4("");
continue;
}
FUN4("");


VAR14 = VAR13;
VAR12[0] = 0x00;
VAR12[1] = 0x01;
memset(VAR12 + 2, 0xFF, VAR14 - 3 - VAR31[1]);
VAR12[VAR14 - 36] = 0x00;
memcpy(VAR12 + (VAR14 - VAR31[1]), VAR30[1], VAR31[1]);
VAR30[0] = VAR12;
VAR31[0] = VAR14;

VAR2 += FUN21(VAR1, &VAR6, VAR5,
VAR30[VAR10], VAR31[VAR10], VAR19, sizeof(VAR19),
VAR13, VAR10);
}

return VAR2;
}