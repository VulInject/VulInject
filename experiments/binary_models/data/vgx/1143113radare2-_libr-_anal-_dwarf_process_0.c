static VAR1 *FUN1(VAR2 *VAR3, const VAR4 *VAR5, const VAR4 *VAR6) {



if (VAR5->VAR7 != VAR8 && VAR5->VAR7 != VAR9 && VAR5->VAR7 != VAR10 && VAR5->VAR7 != VAR11) {
return NULL;
}
RBinDwarfBlock VAR12;
if (VAR5->VAR7 == VAR9 || VAR5->VAR7 == VAR10 || VAR5->VAR7 == VAR11) {
ut64 VAR13 = VAR5->VAR14;
VAR15 *VAR16 = FUN2 (VAR3->VAR17, VAR13, NULL);
if (!VAR16) { 
return NULL;
}

VAR18 *VAR19 = FUN3 (VAR16->VAR20);
if (!VAR19) {
return NULL;
}

VAR12 = *VAR19->VAR21;

} else {
VAR12 = VAR5->VAR12;
}
VariableLocationKind VAR7 = VAR22;
st64 VAR13 = 0;
ut64 VAR23 = 0;
ut64 VAR24 = -1;
const char *VAR25 = NULL; 
const char *VAR26 = VAR3->VAR27->VAR28->VAR26;
const int VAR29 = VAR3->VAR27->VAR28->VAR29;
const bool VAR30 = FUN4 (VAR3->VAR27->VAR28);
size_t VAR31;
for (VAR31 = 0; VAR31 < VAR12.VAR32; VAR31++) {
switch (VAR12.VAR33[VAR31]) {
case VAR34: {

if (VAR31 == VAR12.VAR32 - 1) {
return NULL;
}
VAR31++;
const VAR35 *VAR36 = VAR12.VAR33 + VAR31;
if (VAR5->VAR12.VAR32 > VAR12.VAR32) {
return NULL;
}
VAR13 = FUN5 (&VAR36, VAR12.VAR33 + VAR5->VAR12.VAR32);
if (VAR6) {

VAR1 *VAR37 = FUN1 (VAR3, VAR6, NULL);
if (VAR37) {
VAR37->VAR13 += VAR13;
return VAR37;
}
} else {

}
return NULL;
}
case VAR38:
case VAR39:
case VAR40:
case VAR41:
case VAR42:
case VAR43:
case VAR44:
case VAR45:
case VAR46:
case VAR47:
case VAR48:
case VAR49:
case VAR50:
case VAR51:
case VAR52:
case VAR53:
case VAR54:
case VAR55:
case VAR56:
case VAR57:
case VAR58:
case VAR59:
case VAR60:
case VAR61:
case VAR62:
case VAR63:
case VAR64:
case VAR65:
case VAR66:
case VAR67:
case VAR68:
case VAR69: {


VAR24 = VAR12.VAR33[VAR31] - VAR38; 
VAR25 = FUN6 (VAR26, VAR24, &VAR7, VAR29);
break;
}
case VAR70:
case VAR71:
case VAR72:
case VAR73:
case VAR74:
case VAR75:
case VAR76:
case VAR77:
case VAR78:
case VAR79:
case VAR80:
case VAR81:
case VAR82:
case VAR83:
case VAR84:
case VAR85:
case VAR86:
case VAR87:
case VAR88:
case VAR89:
case VAR90:
case VAR91:
case VAR92:
case VAR93:
case VAR94:
case VAR95:
case VAR96:
case VAR97:
case VAR98:
case VAR99:
case VAR100:
case VAR101: {
if (VAR31 == VAR12.VAR32 - 1) {
return NULL;
}

VAR24 = VAR12.VAR33[VAR31] - VAR70; 
const VAR35 *VAR102 = &VAR12.VAR33[++VAR31];
VAR13 = FUN5 (&VAR102, &VAR12.VAR33[VAR12.VAR32]);

VAR31 += VAR102 - &VAR12.VAR33[0];
VAR25 = FUN6 (VAR26, VAR24, &VAR7, VAR29);
break;
}
case VAR103: {
if (VAR31 == VAR12.VAR32 - 1) {
return NULL;
}


const VAR35 *VAR102 = &VAR12.VAR33[++VAR31];
const VAR35 *VAR104 = &VAR12.VAR33[VAR12.VAR32];
VAR102 = FUN7 (VAR102, VAR104 - VAR102, &VAR24, NULL);
if (VAR102 == VAR104) {
return NULL;
}
VAR13 = FUN5 (&VAR102, VAR104);
VAR25 = FUN6 (VAR26, VAR24, &VAR7, VAR29);
break;
}
case VAR105: {

const int VAR106 = VAR29 / 8;
const VAR35 *VAR36 = &VAR12.VAR33[++VAR31];

if (VAR12.VAR32 - VAR31 < VAR106) {
return NULL;
}
switch (VAR106) {
case 1:
VAR23 = FUN8 (VAR36);
break;
case 2:
VAR23 = FUN9 (VAR36, VAR30);
break;
case 4:
VAR23 = FUN10 (VAR36, VAR30);
break;
case 8:
VAR23 = FUN11 (VAR36, VAR30);
break;
default:
FUN12 (); 
return NULL;
}
VAR7 = VAR107; 
break;
}
case VAR108: {

VAR7 = VAR109;
VAR13 += 16;
break;
}
default:
break;
}
}
if (VAR7 == VAR22) {
return NULL;
}
VAR1 *VAR37 = FUN13 (VAR1);
if (VAR37) {
VAR37->VAR25 = VAR25;
VAR37->VAR24 = VAR24;
VAR37->VAR7 = VAR7;
VAR37->VAR13 = VAR13;
VAR37->VAR23 = VAR23;
}
return VAR37;
}