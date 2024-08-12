VAR1 *FUN1(const char *VAR2, M_uint16 VAR3, VAR4 *VAR5, char *VAR6, size_t VAR7)
{
VAR8       *VAR9      = FUN2((const unsigned char *)VAR2, FUN3(VAR2), VAR10);
size_t            VAR11 = 0;
VAR8      **VAR12     = FUN4(VAR9, '', 0, VAR13, &VAR11);
M_bool            VAR14          = VAR15;
size_t            VAR16;
VAR1 *VAR17         = NULL;
size_t            VAR18   = 0;

*VAR5 = 0;

if (VAR11 == 0)
goto VAR19;

VAR17 = FUN5(sizeof(*VAR17) * VAR11);

for (VAR16=0; VAR16<VAR11; VAR16++) {
unsigned char VAR20[16];
size_t        VAR21 = 0;


FUN6(VAR12[VAR16], VAR22);
FUN7(VAR12[VAR16], VAR22);

if (FUN8(VAR12[VAR16]) == 0)
continue;

VAR17[VAR18].VAR23 = VAR3;
if (FUN9(VAR12[VAR16], VAR17[VAR18].VAR24, sizeof(VAR17[VAR18].VAR24), "", VAR15) != 0) {
M_uint64 VAR25;


FUN10(VAR12[VAR16], 1); 

FUN7(VAR12[VAR16], VAR22);
if (!FUN11(VAR12[VAR16], VAR26, FUN8(VAR12[VAR16]), 10, &VAR25) || VAR25 >= (1 << 16) || VAR25 == 0) {
FUN12(VAR6, VAR7, "", VAR16+1);
goto VAR19;
}
VAR17[VAR18].VAR23 = (VAR27)(VAR25 & 0xFFFF);
} else {
FUN13(VAR12[VAR16], sizeof(VAR17[VAR18].VAR24)-1, VAR17[VAR18].VAR24, sizeof(VAR17[VAR18].VAR24));
}

FUN14(VAR17[VAR18].VAR24);
if (!FUN15(VAR17[VAR18].VAR24) &&
!FUN16(VAR20, sizeof(VAR20), VAR17[VAR18].VAR24, &VAR21)) {
FUN12(VAR6, VAR7, "", VAR16+1, VAR17[VAR18].VAR24);
goto VAR19;
}
VAR18++;
}

VAR14 = VAR28;

VAR19:
FUN17(VAR12, VAR11);
FUN18(VAR9);

if (!VAR14) {
FUN19(VAR17);
return NULL;
}

*VAR5 = VAR18;
return VAR17;
}