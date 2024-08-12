FUN1 (VAR1 *VAR2,             
const VAR3 *VAR4, 
void *VAR5)                    
{
uint32_t VAR6 = 0;
const char *VAR7 = NULL;
bool VAR8;

FUN2 (VAR2);
FUN2 (VAR4);

while (FUN3 (VAR2, 0, &VAR7, &VAR6, &VAR8)) {
if (*VAR7 && !FUN4 (VAR7, strlen (VAR7), false)) {
VAR2->VAR9 = VAR2->VAR10;
break;
}

if (FUN5 (VAR2, VAR7, VAR5)) {
return true;
}

switch (VAR6) {
case VAR11:

if (FUN6 (VAR2, VAR7, FUN7 (VAR2), VAR5)) {
return true;
}

break;
case VAR12: {
uint32_t VAR13;
const char *VAR14;

VAR14 = FUN8 (VAR2, &VAR13);

if (!FUN4 (VAR14, VAR13, true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN9 (VAR2, VAR7, VAR13, VAR14, VAR5)) {
return true;
}
} break;
case VAR15: {
const VAR16 *VAR17 = NULL;
uint32_t VAR18 = 0;
bson_t VAR19;

FUN10 (VAR2, &VAR18, &VAR17);

if (FUN11 (&VAR19, VAR17, VAR18) &&
FUN12 (VAR2, VAR7, &VAR19, VAR5)) {
return true;
}
} break;
case VAR20: {
const VAR16 *VAR17 = NULL;
uint32_t VAR18 = 0;
bson_t VAR19;

FUN13 (VAR2, &VAR18, &VAR17);

if (FUN11 (&VAR19, VAR17, VAR18) &&
FUN14 (VAR2, VAR7, &VAR19, VAR5)) {
return true;
}
} break;
case VAR21: {
const VAR16 *VAR22 = NULL;
bson_subtype_t VAR23 = VAR24;
uint32_t VAR25 = 0;

FUN15 (VAR2, &VAR23, &VAR25, &VAR22);

if (FUN16 (VAR2, VAR7, VAR23, VAR25, VAR22, VAR5)) {
return true;
}
} break;
case VAR26:

if (FUN17 (VAR2, VAR7, VAR5)) {
return true;
}

break;
case VAR27:

if (FUN18 (VAR2, VAR7, FUN19 (VAR2), VAR5)) {
return true;
}

break;
case VAR28:

if (FUN20 (VAR2, VAR7, FUN21 (VAR2), VAR5)) {
return true;
}

break;
case VAR29:

if (FUN22 (VAR2, VAR7, FUN23 (VAR2), VAR5)) {
return true;
}

break;
case VAR30:

if (FUN24 (VAR2, VAR7, VAR5)) {
return true;
}

break;
case VAR31: {
const char *VAR32 = NULL;
const char *VAR33 = NULL;
VAR32 = FUN25 (VAR2, &VAR33);

if (!FUN4 (VAR32, strlen (VAR32), true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN26 (VAR2, VAR7, VAR32, VAR33, VAR5)) {
return true;
}
} break;
case VAR34: {
uint32_t VAR35 = 0;
const char *VAR36 = NULL;
const VAR37 *VAR38 = NULL;

FUN27 (VAR2, &VAR35, &VAR36, &VAR38);

if (!FUN4 (VAR36, VAR35, true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN28 (
VAR2, VAR7, VAR35, VAR36, VAR38, VAR5)) {
return true;
}
} break;
case VAR39: {
uint32_t VAR40;
const char *VAR41;

VAR41 = FUN29 (VAR2, &VAR40);

if (!FUN4 (VAR41, VAR40, true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN30 (VAR2, VAR7, VAR40, VAR41, VAR5)) {
return true;
}
} break;
case VAR42: {
uint32_t VAR43;
const char *VAR44;

VAR44 = FUN31 (VAR2, &VAR43);

if (!FUN4 (VAR44, VAR43, true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN32 (VAR2, VAR7, VAR43, VAR44, VAR5)) {
return true;
}
} break;
case VAR45: {
uint32_t VAR46 = 0;
const char *VAR41;
const VAR16 *VAR17 = NULL;
uint32_t VAR18 = 0;
bson_t VAR19;

VAR41 = FUN33 (VAR2, &VAR46, &VAR18, &VAR17);

if (!FUN4 (VAR41, VAR46, true)) {
VAR2->VAR9 = VAR2->VAR10;
return true;
}

if (FUN11 (&VAR19, VAR17, VAR18) &&
FUN34 (VAR2, VAR7, VAR46, VAR41, &VAR19, VAR5)) {
return true;
}
} break;
case VAR47:

if (FUN35 (VAR2, VAR7, FUN36 (VAR2), VAR5)) {
return true;
}

break;
case VAR48: {
uint32_t VAR49;
uint32_t VAR50;
FUN37 (VAR2, &VAR49, &VAR50);

if (FUN38 (VAR2, VAR7, VAR49, VAR50, VAR5)) {
return true;
}
} break;
case VAR51:

if (FUN39 (VAR2, VAR7, FUN40 (VAR2), VAR5)) {
return true;
}

break;
case VAR52: {
bson_decimal128_t VAR53;
FUN41 (VAR2, &VAR53);

if (FUN42 (VAR2, VAR7, &VAR53, VAR5)) {
return true;
}
} break;
case VAR54:

if (FUN43 (VAR2, FUN44 (VAR2), VAR5)) {
return true;
}

break;
case VAR55:

if (FUN45 (VAR2, FUN44 (VAR2), VAR5)) {
return true;
}

break;
case VAR56:
default:
break;
}

if (FUN46 (VAR2, FUN44 (VAR2), VAR5)) {
return true;
}
}

if (VAR2->VAR9) {
if (VAR8 && VAR4->VAR57 &&
FUN4 (VAR7, strlen (VAR7), false)) {
VAR4->FUN47 (VAR2, VAR7, VAR6, VAR5);
return false;
}

FUN48 (VAR2, VAR5);
}


return false;
}