static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 **VAR5, di_node_t VAR6,
int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
int VAR13 = 0, VAR14, VAR15;
char *VAR16, *VAR17 = NULL, *VAR18 = NULL;
VAR3 *VAR19;
uint_t class, VAR20;
uint_t VAR21, VAR22;
uint_t VAR23 = 0;
VAR24 *VAR25 = NULL;

if (*VAR5 == NULL) {
if (VAR9 >= 0)
*VAR5 = FUN2(VAR2, VAR4, VAR6, VAR10);
else
*VAR5 = FUN3(VAR2, VAR4, VAR6, VAR10);
if (*VAR5 == NULL)
return;
++VAR13;
}
if (VAR9 >= 0)
VAR19 = FUN4(VAR2, *VAR5, VAR6, VAR11);
else
VAR19 = FUN5(VAR2, *VAR5, VAR6, VAR11);

if (VAR19 == NULL) {
if (VAR13) {
FUN6(*VAR5);
*VAR5 = NULL;
}
return;
}

if (FUN7(VAR2, VAR6, &class, &VAR20) < 0) {
FUN6(VAR19);
if (VAR13)
FUN6(*VAR5);
return;
}


if (class == VAR26 && VAR20 == VAR27) {
(void) FUN8(VAR2, VAR19, VAR6, VAR7, VAR8, VAR9,
VAR12);
}


else if (class == VAR28 &&
FUN9(VAR2, VAR6, VAR29, &VAR21) >= 0 &&
FUN9(VAR2, VAR6, VAR30, &VAR22) >= 0 &&
VAR21 == VAR31 && VAR22 == VAR32) {

VAR25 = FUN10(VAR2, FUN11(VAR4));
if (FUN12(VAR25) >= 0) {
FUN13(VAR2, "");
(void) FUN14(VAR2, VAR19,
"", VAR33);
} else {
FUN13(VAR2, "");
if (FUN15(VAR2, VAR34, VAR35) == NULL) {
FUN13(VAR2, ""
"");
(void) FUN16(VAR2,
VAR36);
return;
} else {
if (FUN17(VAR2, VAR19,
VAR34, 0, 1) < 0) {
FUN13(VAR2,
""
"",
FUN18(
FUN19(VAR2)));
return;
}
(void) FUN20(VAR2, VAR19,
VAR34, VAR34, VAR11, VAR11, VAR19);
}
}
} else if (class == VAR28) {

if (FUN15(VAR2, VAR37, VAR38) == NULL) {
FUN13(VAR2, ""
"");
(void) FUN16(VAR2, VAR36);
return;
}

(void) FUN20(VAR2, VAR19, VAR37, VAR37, 0, 0, VAR6);
} else if (class == VAR39 && VAR20 == VAR40) {

if (FUN15(VAR2, VAR41, VAR42) == NULL) {
FUN13(VAR2, ""
"");
(void) FUN16(VAR2, VAR36);
return;
}

(void) FUN20(VAR2, VAR19, VAR41, VAR43, 0, 0, VAR6);
} else if (class == VAR44) {
di_node_t VAR45;
int VAR46 = 0;
extern void FUN21(VAR1 *, VAR3 *,
VAR47, int);
extern void FUN22(VAR1 *, VAR3 *,
VAR47);

for (VAR45 = FUN23(VAR6); VAR45 != VAR48;
VAR45 = FUN24(VAR45)) {
if (strcmp(FUN25(VAR45), VAR49) == 0)
VAR46++;
}
if (VAR46 > 0)
FUN21(VAR2, VAR19, VAR6, VAR46);

if ((VAR14 = FUN26(VAR50, VAR6,
VAR51, &VAR16)) > 0) {
if (FUN17(VAR2, VAR19, VAR52, 0,
VAR14) >= 0)
FUN22(VAR2, VAR19, VAR6);
}
}


if (FUN27(VAR19, &VAR17, &VAR15) != 0) {
FUN13(VAR2, "",
VAR53, FUN28(VAR19), FUN29(VAR19));
goto VAR54;
}

if (class == VAR44 && VAR20 == VAR55 &&
strcmp(VAR17, "") != 0) {
char *VAR56 = FUN30(VAR6);
char *VAR57;
topo_pgroup_info_t VAR58;

if (FUN31(VAR19, VAR59, VAR60,
&VAR18, &VAR15) != 0) {
FUN13(VAR2, ""
"", VAR53, VAR60, FUN28(VAR19),
FUN29(VAR19));
goto VAR54;
}


VAR23 = strlen(VAR18) + 1;
if ((VAR57 = strrchr(VAR18, '')) == NULL) {
FUN13(VAR2, "",
VAR53);
(void) FUN16(VAR2, VAR36);
goto VAR54;
}
*VAR57 = '';

VAR58.VAR61 = VAR62;
VAR58.VAR63 = VAR64;
VAR58.VAR65 = VAR64;
VAR58.VAR66 = VAR35;
if (FUN32(VAR19, &VAR58, &VAR15) != 0 ||
FUN33(VAR19, VAR62,
VAR67, VAR68, VAR56,
&VAR15) != 0 ||
FUN33(VAR19, VAR62,
VAR69, VAR68, VAR18,
&VAR15) != 0) {
FUN13(VAR2, ""
"", VAR53);
(void) FUN16(VAR2, VAR36);
goto VAR54;
}


if (FUN15(VAR2, VAR70, VAR35) == NULL) {
FUN13(VAR2, ""
"");
(void) FUN16(VAR2, VAR36);
goto VAR54;
}
(void) FUN20(VAR2, VAR19, VAR70, VAR71, 0, 0, NULL);
}
VAR54:
if (VAR18 != NULL) {
FUN34(VAR2, VAR18, VAR23);
}
FUN35(VAR2, VAR17);
}