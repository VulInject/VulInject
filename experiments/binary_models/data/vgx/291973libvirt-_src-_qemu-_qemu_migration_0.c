static int
FUN1(VAR1 *VAR2,
virConnectPtr VAR3,
virConnectPtr VAR4,
VAR5 *VAR6,
const char *VAR7,
unsigned int VAR8,
const char *VAR9,
unsigned long VAR10,
VAR11 *VAR12)
{
virDomainPtr VAR13 = NULL;
char *VAR14 = NULL;
char *VAR15 = NULL;
char *VAR16 = NULL;
int VAR17 = 0, VAR18;
virErrorPtr VAR19 = NULL;
bool VAR20;
virStreamPtr VAR21 = NULL;
unsigned long VAR22;

FUN2(""
"",
VAR2, VAR3, VAR4, VAR6, FUN3(VAR7),
VAR8, FUN3(VAR9), VAR10);


if (!(VAR16 = FUN4(VAR2, VAR6,
VAR23 |
VAR24)))
return -1;

if (FUN5(VAR6, NULL) == VAR25)
VAR8 |= VAR26;

VAR22 = VAR8 & ~(VAR27 |
VAR28);

FUN2("", VAR4);
if (VAR8 & VAR29) {


if (!(VAR21 = FUN6(VAR4, 0)))
goto VAR30;

FUN7(VAR6);
VAR18 = VAR4->VAR2->VAR31
(VAR4, VAR21, VAR22, VAR9, VAR10, VAR16);
if (FUN8(VAR6, true) < 0)
goto VAR30;
} else {
FUN7(VAR6);
VAR18 = VAR4->VAR2->VAR32
(VAR4, &VAR15, &VAR17, NULL, &VAR14,
VAR22, VAR9, VAR10, VAR16);
if (FUN8(VAR6, true) < 0)
goto VAR30;
}
FUN9(VAR16);
if (VAR18 == -1)
goto VAR30;

if (!(VAR8 & VAR29) &&
(VAR14 == NULL)) {
FUN10(VAR33, "",
FUN11(""));
VAR20 = true;
FUN12(&VAR19);
goto VAR34;
}


FUN2("", VAR3);
FUN13(FUN14(VAR6, VAR35));
if (VAR8 & VAR29)
VAR18 = FUN15(VAR2, VAR6, VAR21, NULL,
NULL, 0, NULL, NULL,
VAR8, VAR10, VAR4,
NULL, 0, NULL, VAR12);
else
VAR18 = FUN16(VAR2, VAR6, NULL, VAR14,
VAR15, VAR17,
NULL, NULL, 
VAR8, VAR10, VAR4, NULL, 0, NULL,
VAR12, NULL);


if (VAR18 < 0)
FUN12(&VAR19);


VAR20 = VAR18 < 0;

VAR34:

if (!VAR9)
VAR9 = VAR6->VAR36->VAR37;
FUN2("", VAR4, VAR18);
FUN7(VAR6);
VAR13 = VAR4->VAR2->VAR38
(VAR4, VAR9, VAR15, VAR17,
VAR14 ? VAR14 : VAR7, VAR22, VAR20);

FUN13(FUN8(VAR6, false));
if (VAR20 && VAR13)
FUN17(FUN11(""));

VAR30:
if (VAR13) {
FUN18(VAR13);
VAR18 = 0;
} else {
VAR18 = -1;
}

FUN18(VAR21);

FUN19(&VAR19);
FUN9(VAR14);
FUN9(VAR15);

return VAR18;
}