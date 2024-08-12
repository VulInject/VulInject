static int
FUN1(struct VAR1 *VAR2)
{
dk_efi_t	VAR3;
dk_efi_t	VAR4;
VAR5	*VAR6 = NULL;
VAR5	*VAR7 = NULL;
struct dk_geom	VAR8;
struct dk_minfo	VAR9;
VAR5	*VAR10;
int		VAR11 = VAR12;
int		VAR13 = -1;
int		VAR14 = VAR15 * 2;
int		VAR16 = 0;
uint64_t	VAR17;
uint64_t	VAR18;

if ((VAR6 = calloc(VAR14, 1)) == NULL) {
FUN2("");
goto VAR19;
}

VAR3.VAR20 = VAR6;
VAR3.VAR21 = 1;
VAR3.VAR22 = VAR14;

if (FUN3(VAR11, VAR23, &VAR3) != 0) {
FUN2("");
goto VAR19;
}

if ((VAR7 = calloc(VAR14, 1)) == NULL) {
FUN2("");
goto VAR19;
}


if (FUN4(VAR11, VAR24, (VAR25)&VAR9) == -1) {
FUN2("");
goto VAR19;
}

if (VAR9.VAR26 == 0) {
if (VAR27 && VAR28) {
FUN2(""
"");
}
VAR9.VAR26 = VAR29;
}

VAR4.VAR20 = VAR7;


VAR4.VAR21 = VAR9.VAR30 - 1 - 1;
VAR4.VAR22 = VAR14;

if (FUN3(VAR11, VAR23, &VAR4) != 0) {
FUN2("");
goto VAR19;
}

VAR17 = VAR3.VAR20->VAR31;
VAR3.VAR20->VAR31 = 0x0;

FUN5();

if (FUN3(VAR11, VAR32, &VAR3) == -1) {
FUN2("");
FUN6();
goto VAR19;
}

VAR10 = (VAR5 *)((VAR33)VAR4.VAR20 + VAR34);

VAR18 = VAR10->VAR31;

VAR10->VAR31 = 0;

if (FUN3(VAR11, VAR32, &VAR4) == -1) {
FUN2("");
}

if (FUN4(VAR12, VAR35, &VAR8) != 0)
FUN2("");
else
VAR16 = 1;

VAR3.VAR20->VAR31 = VAR17;
VAR10->VAR31 = VAR18;

if (FUN3(VAR12, VAR32, &VAR4) == -1) {
FUN2("");
VAR16 = 0;
}

if (FUN3(VAR12, VAR32, &VAR3) == -1) {
FUN2("");
VAR16 = 0;
}

FUN6();

if (VAR16 == 0)
goto VAR19;

VAR36 = VAR8.VAR37;
VAR38 = VAR8.VAR39;
VAR40 =  VAR8.VAR41;
VAR42 = VAR8.VAR43;
VAR44 = VAR36 + VAR38;

VAR2->VAR45 = VAR44;
VAR2->VAR46 = VAR36;
VAR2->VAR47 = VAR38;
VAR2->VAR48 = VAR40;
VAR2->VAR49 = VAR42;
VAR2->VAR50 = 0;
VAR2->VAR51 = 1;
VAR2->VAR52 = VAR8.VAR53;

VAR2->VAR54 = VAR55;

(void) snprintf(VAR2->VAR56, sizeof (VAR2->VAR56),
"",
"", VAR36, VAR38, VAR40, VAR42);

VAR13 = 0;
(void) FUN7(VAR2);
VAR36 = VAR2->VAR46;


if (!FUN8(VAR2, VAR57)) {
VAR13 = -1;
}

(void) FUN9(VAR2, VAR58);


VAR19:
if (VAR6)
free(VAR6);
if (VAR7)
free(VAR7);

return (VAR13);
}