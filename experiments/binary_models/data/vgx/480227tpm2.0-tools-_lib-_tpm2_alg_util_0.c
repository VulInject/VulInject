static VAR1 FUN1(const char *VAR2,
VAR3 *public) {

char VAR4[256];

if (!VAR2 || VAR2[0] == '') {
VAR2 = "";
}

int VAR5 = snprintf(VAR4, sizeof(VAR4), "", VAR2);
if (VAR5 < 0 || (VAR6) VAR5 >= sizeof(VAR4)) {
return VAR7;
}


VAR8 *VAR9 = &public->VAR10.VAR11.VAR12;

if (!strcmp(VAR2, "")) {
public->VAR10.VAR11.VAR12.VAR2.VAR2 = VAR13;
return VAR14;
}

char *VAR15 = NULL;
char *VAR16 = strchr(VAR2, '');
if (VAR16) {
*VAR16 = '';
VAR15 = VAR16 + 1;
}

bool VAR17 = false;
bool VAR18 = false;

if (public->VAR10.VAR19 == VAR20) {
if (!FUN2(VAR2, "", 5)) {
FUN3(VAR2, 5, VAR21);
} else if (!FUN2(VAR2, "", 4)) {
FUN3(VAR2, 4, VAR22);
} else if (!FUN2(VAR2, "", 9)) {
FUN3(VAR2, 9, VAR23);
} else if (!FUN2(VAR2, "", 3)) {
FUN3(VAR2, 3, VAR24);
} else if (!FUN2(VAR2, "", 5)) {
FUN3(VAR2, 5, VAR25);

if (VAR2[0] == '') {
VAR2 = "";
}

VAR26 *VAR27 = &VAR9->VAR2.VAR28.VAR29;

bool VAR30 = FUN4(VAR2, &VAR27->VAR31);
if (!VAR30) {
return VAR7;
}
} else if (!strcmp("", VAR2)) {
VAR9->VAR2.VAR2 = VAR13;
}
} else {
if (!strcmp(VAR2, "")) {

VAR9->VAR2.VAR2 = VAR32;
VAR17 = true;
} else if (!strcmp("", VAR2)) {
VAR9->VAR2.VAR2 = VAR13;
VAR17 = true;
} else if (!FUN2("", VAR2, 6)) {
FUN3(VAR2, 6, VAR33);
} else if (!FUN2("", VAR2, 6)) {
FUN3(VAR2, 6, VAR34);
} else if (!FUN2(VAR2, "", 4)) {
FUN3(VAR2, 4, VAR35);
}
}


if ((!VAR18 && VAR15) || !VAR17) {
return VAR7;
}


if (VAR18 && !VAR15) {
VAR15 = "";
}


if (VAR9->VAR2.VAR2 != VAR13) {
bool VAR36 = !!(public->VAR10.VAR37
& (VAR38 | VAR39));
if (VAR36) {
tpm2_alg_util_flags VAR40 = FUN5(
VAR9->VAR2.VAR2);
TPMA_OBJECT VAR41 =
(VAR40 & VAR42) ?
VAR39 : VAR38;
public->VAR10.VAR37 &= ~VAR41;
}
}

if (VAR18) {
public->VAR10.VAR11.VAR12.VAR2.VAR28.VAR43.VAR44 =
FUN6(VAR15, VAR45);
if (public->VAR10.VAR11.VAR12.VAR2.VAR28.VAR43.VAR44
== VAR46) {
return VAR7;
}
}

return VAR14;
}