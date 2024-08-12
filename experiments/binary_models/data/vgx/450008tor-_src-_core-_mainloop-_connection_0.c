static VAR1 *
FUN1(const struct VAR2 *VAR3,
socklen_t VAR4,
int VAR5, const char *VAR6,
const VAR7 *VAR8,
int *VAR9)
{
VAR10 *VAR11;
VAR1 *VAR12 = NULL;
tor_socket_t VAR13 = VAR14;  
or_options_t const *VAR15 = FUN2();
(void) VAR15; 
const struct VAR16 *VAR17 = NULL;
uint16_t VAR18 = 0, VAR19 = 0;
int VAR20 = 0;
static int VAR21 = VAR22;
tor_addr_t VAR23;
int VAR24 = 0;

if (VAR9)
*VAR9 = 0;

if (VAR3->VAR25 == VAR26 ||
VAR3->VAR25 == VAR27) {
int VAR28 = (VAR5 != VAR29);
if (VAR28)
VAR20 = 1;

FUN3(&VAR23, VAR3, &VAR18);
FUN4(VAR30, "",
FUN5(VAR5), FUN6(&VAR23, VAR18));

VAR13 = FUN7(FUN8(&VAR23),
VAR28 ? VAR31 : VAR32,
VAR28 ? VAR33: VAR34);
if (!FUN9(VAR13)) {
int VAR35 = FUN10(VAR13);
if (FUN11(VAR35)) {
FUN12();

VAR24 = 1;
} else {
FUN13(VAR30, "",
FUN14(VAR35));
}
goto VAR36;
}

if (FUN15(VAR13) < 0) {
FUN13(VAR30, "",
FUN5(VAR5),
FUN14(VAR37));
}

if (FUN16(VAR13) < 0) {
FUN13(VAR30, "",
FUN5(VAR5),
FUN14(VAR37));
}

if (VAR15->VAR38 == VAR39 &&
VAR5 == VAR40) {
int VAR41 = 1;
if (FUN17(VAR13, VAR42, VAR43, (void*)&VAR41,
(VAR44)sizeof(VAR41)) < 0) {
const char *VAR45 = "";
int VAR35 = FUN10(VAR13);
if (VAR35 == VAR46)
VAR45 = ""
"";
FUN13(VAR30, "",
FUN14(VAR35), VAR45);
}
}

if (VAR3->VAR25 == VAR27) {
int VAR41 = 1;

if (FUN17(VAR13,VAR47, VAR48,
(void*)&VAR41, (VAR44)sizeof(VAR41)) < 0) {
int VAR35 = FUN10(VAR13);
FUN13(VAR30, "",
FUN14(VAR35));

}
}

if (FUN18(VAR13,VAR3,VAR4) < 0) {
const char *VAR49 = "";
int VAR35 = FUN10(VAR13);
if (FUN19(VAR35)) {
VAR49 = "";
if (VAR9)
*VAR9 = 1;
}
FUN13(VAR30, "", VAR6, VAR18,
FUN14(VAR35), VAR49);
goto VAR36;
}

if (VAR28) {
if (FUN20(VAR13) < 0) {
FUN13(VAR30, "", VAR6, VAR18,
FUN14(FUN10(VAR13)));
goto VAR36;
}
}

if (VAR18 != 0) {
VAR19 = VAR18;
} else {
tor_addr_t VAR50;
struct sockaddr_storage VAR51;
socklen_t VAR52=sizeof(VAR51);
if (FUN21(VAR13, (struct VAR2*)&VAR51, &VAR52)<0) {
FUN13(VAR30, "",
FUN5(VAR5),
FUN14(FUN10(VAR13)));
VAR19 = 0;
}
FUN3(&VAR50, (struct VAR2*)&VAR51, &VAR19);
}

} else if (VAR3->VAR25 == VAR53) {

VAR20 = 1;

FUN22(FUN23(VAR5));

if (FUN24(VAR15, VAR6,
(VAR5 == VAR54) ?
VAR55 :
VAR56, VAR8) < 0) {
goto VAR36;
}

FUN4(VAR30, "",
FUN5(VAR5), VAR6);

FUN25(&VAR23);

if (unlink(VAR6) < 0 && VAR37 != VAR57) {
FUN13(VAR30, "", VAR6,
strerror(VAR37));
goto VAR36;
}

VAR13 = FUN7(VAR53, VAR31, 0);
if (! FUN9(VAR13)) {
int VAR35 = FUN10(VAR13);
if (FUN11(VAR35)) {
FUN12();

VAR24 = 1;
} else {
FUN13(VAR30,"", strerror(VAR35));
}
goto VAR36;
}

if (FUN18(VAR13, VAR3,
(VAR44)sizeof(struct VAR58)) == -1) {
FUN13(VAR30,"", VAR6,
FUN14(FUN10(VAR13)));
goto VAR36;
}

if (VAR15->VAR59) {
VAR17 = FUN26(VAR15->VAR59);
struct stat VAR60;
if (VAR17 == NULL) {
FUN13(VAR30,"",
VAR6, VAR15->VAR59);
goto VAR36;
} else if (FUN27(VAR13, &VAR60) == 0 &&
VAR60.VAR61 == VAR17->VAR62 && VAR60.VAR63 == VAR17->VAR64) {

} else if (chown(FUN28(VAR6),
VAR17->VAR62, VAR17->VAR64) < 0) {
FUN13(VAR30,"",
VAR6, strerror(VAR37));
goto VAR36;
}
}

{
unsigned VAR65;
const char *VAR66;
struct stat VAR60;
if (VAR8->VAR67) {
VAR65 = 0666;
VAR66 = "";
} else if (VAR8->VAR68) {
VAR65 = 0660;
VAR66 = "";
} else {
VAR65 = 0600;
VAR66 = "";
}

if (FUN27(VAR13, &VAR60) == 0 && (VAR60.VAR69 & 0777) == VAR65) {

} else if (chmod(FUN28(VAR6), VAR65) < 0) {
FUN13(VAR70,"", VAR6, VAR66);
goto VAR36;
}
}

if (FUN29(VAR13, VAR71) < 0) {
FUN13(VAR30, "", VAR6,
FUN14(FUN10(VAR13)));
goto VAR36;
}


int VAR72;
socklen_t VAR73 = sizeof(VAR72);

if (!FUN30(VAR13, VAR74, VAR75, &VAR72, &VAR73)) {
if (VAR72 == 0) {
FUN31(VAR30, ""
"", VAR6);
goto VAR36;
}
}
} else {
FUN31(VAR76, "",
VAR3->VAR25);
FUN22(0);
}

VAR11 = FUN32(VAR5, VAR3->VAR25);
VAR12 = FUN33(VAR11);
VAR12->VAR77 = VAR3->VAR25;
VAR12->VAR13 = VAR13;
VAR13 = VAR14; 
VAR12->VAR6 = FUN34(VAR6);
VAR12->VAR78 = VAR19;
FUN35(&VAR12->VAR23, &VAR23);

memcpy(&VAR11->VAR79, &VAR8->VAR79, sizeof(VAR80));

if (VAR8->VAR79.VAR81) {
VAR11->VAR79.VAR81 = VAR8->VAR79.VAR81;
if (VAR8->VAR79.VAR82 >= 0) {
VAR11->VAR79.VAR82 = VAR8->VAR79.VAR82;
} else {

VAR11->VAR79.VAR82 = VAR21--;
}
}

if (FUN36(VAR12) < 0) { 
FUN13(VAR30,"");
goto VAR36;
}

FUN37(VAR18==VAR19 ? VAR83 : VAR84, VAR30,
"",
FUN5(VAR5), VAR19);

VAR12->VAR85 = VAR86;
if (VAR20) {
FUN38(VAR12);
} else {
FUN22(VAR5 == VAR29);
FUN39(VAR12);
}


FUN40(FUN41(), 0);

FUN4(VAR30, "", FUN42(VAR12));

return VAR12;

VAR36:
if (FUN9(VAR13))
FUN43(VAR13);
if (VAR12)
FUN44(VAR12);


FUN40(FUN41(), VAR24);

return NULL;
}