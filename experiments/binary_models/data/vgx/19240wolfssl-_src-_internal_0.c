static int FUN1(VAR1* VAR2, VAR3* VAR4, const VAR3* VAR5, word32 VAR6,
int VAR7, int VAR8, int VAR9, int VAR10);






static int  FUN2(VAR1* VAR2, void* VAR11,
int* VAR12, void* VAR13);
static int  FUN3(VAR1* VAR2, int VAR14,
const unsigned char* VAR11, int VAR12, void* VAR13);




static int FUN2(VAR1* VAR2, void* VAR11,
int* VAR12, void* VAR13)
{
wolfSSL_CTX_keylog_cb_func VAR15 = NULL;
int VAR16;
int VAR17;
int VAR18;
const char* VAR19 = VAR20;
int VAR21 = sizeof(VAR20);
int VAR22;
VAR3* VAR23 = NULL;
word32 VAR24;
int VAR25;
int VAR26;
(void)VAR13;

if (VAR2 == NULL || VAR11 == NULL || *VAR12 == 0)
return VAR27;
if (VAR2->VAR28 == NULL)
return VAR27;


VAR15 = VAR2->VAR13->VAR29;
if (VAR15 == NULL)
return 0;


VAR16   = *VAR12;
VAR17 = 0;
for (VAR18 = 0; VAR18 < VAR16; VAR18++) {
if (*((VAR3*)VAR11) != 0) {
VAR17 = 1;
break;
}
}
if (VAR17 == 0)
return 0; 


VAR22  = VAR21 + (VAR30 * 2) + 1 + ((*VAR12) * 2) + 1;
VAR23     = FUN4(VAR22, VAR2->VAR31, VAR32);
if (VAR23 == NULL)
return VAR33;
FUN5("", VAR23, VAR22);

FUN6(VAR23, 0, VAR22);
FUN7(VAR23, VAR19, VAR21 -1);     
VAR23[VAR21 - 1] = '';              
VAR25 = VAR21;
VAR24 = VAR22 - VAR25;
if ((VAR26 = FUN8(VAR2->VAR28->VAR34, VAR30,
VAR23 + VAR25, &VAR24)) == 0) {
VAR25 += (VAR24 - 1); 
VAR24 = VAR22 - VAR25;

if (VAR24 > 1) {
VAR23[VAR25++] = '';  
VAR24 = VAR22 - VAR25;

if ((VAR26 = FUN8((VAR3*)VAR11, *VAR12,
VAR23 + VAR25, &VAR24)) == 0) {

FUN9(VAR2, (char*)VAR23);
VAR26 = 0;
}
}
else
VAR26 = VAR33;
}

FUN10(VAR23, VAR22);
FUN11(VAR23, VAR2->VAR31, VAR32);
return VAR26;
}











static int FUN3(VAR1* VAR2, int VAR14,
const unsigned char* VAR11, int VAR12, void* VAR13)
{
wolfSSL_CTX_keylog_cb_func VAR15 = NULL;
const char* VAR19;
int         VAR21 = 0;
int         VAR22  = 0;
VAR3*       VAR23     = NULL;
word32 VAR24;
int VAR25;
int VAR26;

(void)VAR13;

if (VAR2 == NULL || VAR11 == NULL || VAR12 == 0)
return VAR27;
if (VAR2->VAR28 == NULL)
return VAR27;


VAR15 = VAR2->VAR13->VAR29;
if (VAR15 == NULL)
return 0;

switch (VAR14) {
case VAR35:
VAR21 = sizeof(VAR36);
VAR19 = VAR36;
break;

case VAR37:
VAR21 = sizeof(VAR38);
VAR19 = VAR38;
break;

case VAR39:
VAR21 = sizeof(VAR40);
VAR19 = VAR40;
break;

case VAR41:
VAR21 = sizeof(VAR42);
VAR19 = VAR42;
break;

case VAR43:
VAR21 = sizeof(VAR44);
VAR19 = VAR44;
break;

case VAR45:
VAR21 = sizeof(VAR46);
VAR19 = VAR46;
break;

case VAR47:
VAR21 = sizeof(VAR48);
VAR19 = VAR48;
break;

default:
return VAR27;
}

VAR22 = VAR21 + (VAR30 * 2) + 1 + VAR12 * 2 + 1;
VAR23    = FUN4(VAR22, VAR2->VAR31, VAR32);
if (VAR23 == NULL)
return VAR33;
FUN5("", VAR23, VAR22);

FUN6(VAR23, 0, VAR22);
FUN7(VAR23, VAR19, VAR21 - 1);     
VAR23[VAR21 - 1] = '';               

VAR25 = VAR21;
VAR24 = VAR22 - VAR25;
if ((VAR26 = FUN8(VAR2->VAR28->VAR34, VAR30,
VAR23 + VAR25, &VAR24)) == 0) {
VAR25  += (VAR24 - 1); 
VAR24 = VAR22 - VAR25;

if (VAR24 >1) {
VAR23[VAR25++] = '';        
VAR24 = VAR22 - VAR25;

if ((VAR26 = FUN8((VAR3*)VAR11, VAR12,
VAR23 + VAR25, &VAR24)) == 0) {
FUN9(VAR2, (char*)VAR23);
VAR26 = 0;
}
}
else
VAR26 = VAR33;
}

FUN10(VAR23, VAR22);
FUN11(VAR23, VAR2->VAR31, VAR32);
return VAR26;
}

int FUN12(const VAR1* VAR2)
{
if (VAR2->VAR49.VAR50 == VAR51 && VAR2->VAR49.VAR52 >=VAR53)
return 1;

return 0;
}