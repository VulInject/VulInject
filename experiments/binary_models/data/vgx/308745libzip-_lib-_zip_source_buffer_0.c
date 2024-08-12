static VAR1
FUN1(void *VAR2, void *VAR3, zip_uint64_t VAR4, zip_source_cmd_t VAR5) {
struct VAR6 *VAR7 = (struct VAR6 *)VAR2;

switch (VAR5) {
case VAR8:
if ((VAR7->VAR9 = FUN2(NULL, 0, 0, &VAR7->VAR10)) == NULL) {
return -1;
}
VAR7->VAR9->VAR11 = 0;
VAR7->VAR9->VAR12 = 0;
return 0;

case VAR13:
if ((VAR7->VAR9 = FUN3(VAR7->VAR14, VAR4, &VAR7->VAR10)) == NULL) {
return -1;
}
VAR7->VAR9->VAR11 = VAR4;
VAR7->VAR9->VAR12 = VAR7->VAR9->VAR15;
return 0;

case VAR16:
return 0;

case VAR17:
FUN4(VAR7->VAR14);
VAR7->VAR14 = VAR7->VAR9;
VAR7->VAR9 = NULL;
return 0;

case VAR18:
return FUN5(&VAR7->VAR10, VAR3, VAR4);

case VAR19:
FUN4(VAR7->VAR14);
FUN4(VAR7->VAR9);
free(VAR7);
return 0;

case VAR20: {
if (VAR4 < sizeof(VAR7->VAR21)) {
FUN6(&VAR7->VAR10, VAR22, 0);
return -1;
}

(void)memcpy_s(VAR3, sizeof(VAR7->VAR21), &VAR7->VAR21, sizeof(VAR7->VAR21));

return sizeof(VAR7->VAR21);
}

case VAR23:
VAR7->VAR14->VAR11 = 0;
VAR7->VAR14->VAR12 = 0;
return 0;

case VAR24:
if (VAR4 > VAR25) {
FUN6(&VAR7->VAR10, VAR22, 0);
return -1;
}
return FUN7(VAR7->VAR14, VAR3, VAR4);

case VAR26: {
VAR27 *VAR28 = FUN2(NULL, 0, 0, &VAR7->VAR10);
if (VAR28 == NULL) {
return -1;
}

FUN4(VAR7->VAR14);
VAR7->VAR14 = VAR28;
return 0;
}

case VAR29:
FUN4(VAR7->VAR9);
VAR7->VAR9 = NULL;
return 0;

case VAR30:
return FUN8(VAR7->VAR14, VAR3, VAR4, &VAR7->VAR10);

case VAR31:
return FUN8(VAR7->VAR9, VAR3, VAR4, &VAR7->VAR10);

case VAR32: {
VAR33 *VAR34;

if (VAR4 < sizeof(*VAR34)) {
FUN6(&VAR7->VAR10, VAR22, 0);
return -1;
}

VAR34 = (VAR33 *)VAR3;

FUN9(VAR34);
VAR34->VAR35 = VAR7->VAR35;
VAR34->VAR36 = VAR7->VAR14->VAR36;
VAR34->VAR37 = VAR34->VAR36;
VAR34->VAR38 = VAR39;
VAR34->VAR40 = VAR41;
VAR34->VAR42 = VAR43 | VAR44 | VAR45 | VAR46 | VAR47;

return sizeof(*VAR34);
}

case VAR48:
return FUN10(VAR20, VAR23, VAR24, VAR16, VAR32, VAR18, VAR19, VAR30, VAR49, VAR8, VAR13, VAR17, VAR26, VAR29, VAR31, VAR50, VAR51, VAR52, -1);

case VAR49:
if (VAR7->VAR14->VAR11 > VAR25) {
FUN6(&VAR7->VAR10, VAR53, VAR54);
return -1;
}
return (VAR1)VAR7->VAR14->VAR11;


case VAR50:
if (VAR7->VAR9->VAR11 > VAR25) {
FUN6(&VAR7->VAR10, VAR53, VAR54);
return -1;
}
return (VAR1)VAR7->VAR9->VAR11;

case VAR51:
if (VAR4 > VAR25) {
FUN6(&VAR7->VAR10, VAR22, 0);
return -1;
}
return FUN11(VAR7->VAR9, VAR3, VAR4, &VAR7->VAR10);

default:
FUN6(&VAR7->VAR10, VAR55, 0);
return -1;
}
}