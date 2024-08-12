static VAR1 FUN1(VAR2 *VAR3, void *VAR4,
unsigned long VAR5,
void *VAR6, int VAR7, char *VAR8,
u64 VAR9, u64 VAR10)
{
int VAR11, VAR12;
int VAR13;
u32 VAR14;
u64 VAR15;


if (VAR4) {
if (FUN2(VAR4)) {
FUN3(VAR3, "");
return VAR16;
}

if (VAR5 && FUN4(VAR4) > VAR5) {
FUN3(VAR3, "");
return VAR16;
}
}

if (VAR4) {
VAR13 = FUN5(VAR4, VAR6, VAR7);
} else {
VAR13 = FUN6(VAR6, VAR7);
if (VAR13 == 0) {

FUN7(VAR3, VAR6);
}
}

if (VAR13 != 0)
goto VAR17;


VAR12 = FUN8(VAR6);
while (VAR12-- > 0)
FUN9(VAR6, VAR12);

VAR11 = FUN10(VAR6, 0, "");
if (VAR11 < 0) {
VAR11 = FUN11(VAR6, 0, "");
if (VAR11 < 0) {
VAR13 = VAR11; 
goto VAR17;
}
}

if ((VAR8 != NULL) && (strlen(VAR8) > 0)) {
VAR13 = FUN12(VAR6, VAR11, "", VAR8,
strlen(VAR8) + 1);
if (VAR13)
goto VAR17;
}


if (VAR10 != 0) {
u64 VAR18;
u64 VAR19 = FUN13(VAR9);

VAR13 = FUN12(VAR6, VAR11, "",
&VAR19, sizeof(VAR20));
if (VAR13)
goto VAR17;
VAR18 = FUN13(VAR9 + VAR10);
VAR13 = FUN12(VAR6, VAR11, "",
&VAR18, sizeof(VAR20));
if (VAR13)
goto VAR17;
}


VAR11 = FUN10(VAR6, 0, "");
VAR15 = FUN13((VAR20)(unsigned long)VAR3);
VAR13 = FUN12(VAR6, VAR11, "",
&VAR15, sizeof(VAR15));
if (VAR13)
goto VAR17;

VAR15 = VAR21; 
VAR13 = FUN12(VAR6, VAR11, "",
&VAR15,  sizeof(VAR15));
if (VAR13)
goto VAR17;

VAR14 = VAR22; 
VAR13 = FUN12(VAR6, VAR11, "",
&VAR14,  sizeof(VAR14));
if (VAR13)
goto VAR17;

VAR13 = FUN12(VAR6, VAR11, "",
&VAR14, sizeof(VAR14));
if (VAR13)
goto VAR17;

VAR13 = FUN12(VAR6, VAR11, "",
&VAR14, sizeof(VAR14));
if (VAR13)
goto VAR17;

if (FUN14(VAR23)) {
efi_status_t VAR24;

VAR24 = FUN15(VAR3, sizeof(VAR15),
(VAR25 *)&VAR15);
if (VAR24 == VAR26) {
VAR13 = FUN12(VAR6, VAR11, "",
&VAR15, sizeof(VAR15));
if (VAR13)
goto VAR17;
} else if (VAR24 != VAR27) {
return VAR24;
}
}
return VAR26;

VAR17:
if (VAR13 == -VAR28)
return VAR29;

return VAR16;
}