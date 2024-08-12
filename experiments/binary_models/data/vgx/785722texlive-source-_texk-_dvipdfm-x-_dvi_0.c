FUN1 (int VAR1,
double *VAR2, double *VAR3,
double *VAR4, double *VAR5, int *VAR6,
int *VAR7, int *VAR8,
int *VAR9, int *VAR10, VAR11 *VAR12,
char *VAR13, char *VAR14,
int *VAR15, unsigned char *VAR16, unsigned char *VAR17)
{
VAR18          *VAR19 = VAR20;
int32_t        VAR21;
unsigned char  VAR22;
static int     VAR23 = -1;
unsigned int VAR24;

if (VAR1 == VAR23 || VAR25 == 0)
return; 
VAR23 = VAR1;

VAR26 = 0;

if (!VAR27) {
if (VAR1 >= VAR25)
FUN2("", VAR1);
VAR21 = VAR28[VAR1];

FUN3 (VAR19, VAR21, "");
}

while ((VAR22 = FUN4(VAR19)) != VAR29) {
if (VAR22 <= VAR30 ||
(VAR22 >= VAR31 && VAR22 <= VAR32))
continue;
else if (VAR22 == VAR33 || VAR22 == VAR34 ||
VAR22 == VAR35 || VAR22 == VAR36) {
uint32_t VAR37 = FUN4(VAR19);
switch (VAR22) {
case VAR36: VAR37 = VAR37 * 0x100u + FUN4(VAR19);
if (VAR37 > 0x7fff)
FUN5("", VAR37);
case VAR35: VAR37 = VAR37 * 0x100u + FUN4(VAR19);
case VAR34: VAR37 = VAR37 * 0x100u + FUN4(VAR19);
default: break;
}
if (VAR26 + VAR37 >= VAR38) {
VAR38 = (VAR26 + VAR37 + VAR39);
VAR40 = FUN6(VAR40, VAR38, unsigned char);
}
if (fread(VAR41, sizeof(char), VAR37, VAR19) != VAR37)
FUN2("");
if (FUN7(VAR2, VAR3, VAR4, VAR5, VAR6,
VAR7, VAR8,
VAR9, VAR10, VAR12, VAR13, VAR14,
VAR15, VAR16, VAR17,
VAR41, VAR37))
FUN5(""%.*VAR42\"", VAR37, VAR41);
VAR26 += VAR37;
continue;
}


switch (VAR22) {
case VAR43:
FUN8(VAR19, 44);
break;
case VAR44: case VAR45: case VAR46:
case VAR47: case VAR48: case VAR49: case VAR50:
break;
case VAR51: case VAR52: case VAR53:  case VAR54:
case VAR55: case VAR56: case VAR57: case VAR58: case VAR59:
FUN8(VAR19, 1);
break;

case VAR60: case VAR61: case VAR62: case VAR63:
case VAR64: case VAR65: case VAR66: case VAR67: case VAR68:
FUN8(VAR19, 2);
break;

case VAR69: case VAR70: case VAR71: case VAR72:
case VAR73: case VAR74: case VAR75: case VAR76: case VAR77:
FUN8(VAR19, 3);
break;

case VAR78: case VAR79: case VAR80: case VAR81:
case VAR82: case VAR83: case VAR84: case VAR85: case VAR86:
FUN8(VAR19, 4);
break;

case VAR87: case VAR88:
FUN8(VAR19, 8);
break;

case VAR89: case VAR90: case VAR91: case VAR92:
FUN9(FUN10(VAR19, VAR22-VAR89));
break;
case VAR93:
FUN11(VAR22);
FUN8(VAR19, 4);            
VAR24 = FUN12(VAR19); 
FUN8(VAR19, VAR24 * 10);     
break;
case VAR94:
FUN11(VAR22);
VAR24 = FUN12(VAR19); 
FUN8(VAR19, VAR24 * 2);      
FUN8(VAR19, 4);            
VAR24 = FUN12(VAR19); 
FUN8(VAR19, VAR24 * 10);     
break;
case VAR95:
FUN11(VAR22);
FUN13(FUN14(VAR20));
break;
case VAR96:
case VAR97:
FUN11(VAR22);
break;

case VAR98:
FUN15(VAR22);
FUN8(VAR19, 1);
break;

case VAR99:
if (VAR27 && VAR26 == 1) {

return;
}

default: 
FUN2("", VAR22, FUN16(VAR19));
break;
}
}

return;
}