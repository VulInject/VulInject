const char *FUN1(VAR1 *VAR2, unsigned char *VAR3,
uint32_t VAR4, int VAR5) {
(FUN2(VAR6) && VAR7 < 0x3050000L)
EVP_MD_CTX VAR8;
VAR9 *VAR10;
const VAR11 *VAR12;
char *VAR13 = "", *VAR14;
unsigned char *VAR15;
unsigned int VAR16 = 0;
register unsigned int VAR17;

switch (VAR5) {
case VAR18:
VAR12 = FUN3();
VAR13 = "";
break;

case VAR19:
VAR12 = FUN4();
VAR13 = "";
break;

case VAR20:
VAR12 = FUN5();
VAR13 = "";
break;

default:
(void) FUN6(VAR21, VAR22,
"", VAR5);
VAR23 = VAR24;
return NULL;
}

(FUN2(VAR6) && VAR7 >= 0x3050000L)
VAR10 = FUN7();
VAR10 = &VAR8;



if (EVP_DigestInit(VAR10, VAR12) != 1) {
(void) FUN6(VAR21, VAR22,
"", VAR13,
FUN8());
(FUN2(VAR6) && VAR7 >= 0x3050000L)
FUN9(VAR10);
VAR23 = VAR25;
return NULL;
}
EVP_DigestInit(VAR10, VAR12);

if (EVP_DigestUpdate(VAR10, VAR3, VAR4) != 1) {
(void) FUN6(VAR21, VAR22,
"", VAR13, FUN8());
(FUN2(VAR6) && VAR7 >= 0x3050000L)
FUN9(VAR10);
VAR23 = VAR25;
return NULL;
}
EVP_DigestUpdate(VAR10, VAR3, VAR4);

VAR15 = FUN10(VAR2, VAR26);

if (FUN11(VAR10, VAR15, &VAR16) != 1) {
(void) FUN6(VAR21, VAR22,
"", VAR13, FUN8());
(FUN2(VAR6) && VAR7 >= 0x3050000L)
FUN9(VAR10);
VAR23 = VAR25;
return NULL;
}
FUN11(VAR10, VAR15, &VAR16);

(FUN2(VAR6) && VAR7 >= 0x3050000L)
FUN9(VAR10);


VAR14 = "";

for (VAR17 = 0; VAR17 < VAR16; VAR17++) {
char VAR27[4];

memset(VAR27, '', sizeof(VAR27));
FUN12(VAR27, sizeof(VAR27), "", VAR15[VAR17]);
VAR14 = FUN13(VAR2, VAR14, &VAR27, NULL);
}
VAR14[strlen(VAR14)-1] = '';

return VAR14;
}