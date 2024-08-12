int
main(int argc, char *argv[])
{
int	VAR1 = 0, VAR2, VAR3, VAR4, VAR5;
bool	VAR6;
LINENUM	VAR7 = 0, VAR8, VAR9, VAR10;
const	char *VAR11;
char	*VAR12;

if (FUN1("", NULL) == -1) {
FUN2("");
FUN3(2);
}

VAR13 = VAR14;
if ((VAR15 = malloc(VAR13)) == NULL)
FUN4("");
VAR15[0] = '';

FUN5(VAR16, NULL, VAR17, 0);
FUN5(VAR18, NULL, VAR17, 0);
for (VAR4 = 0; VAR4 < VAR19; VAR4++)
VAR20[VAR4] = NULL;


if ((VAR11 = getenv("")) == NULL || *VAR11 == '')
VAR11 = VAR21;
for (VAR4 = strlen(VAR11) - 1; VAR4 > 0 && VAR11[VAR4] == ''; VAR4--)
;
VAR4++;
if (asprintf(&VAR22, "", VAR4, VAR11) == -1)
FUN6("");
if ((VAR5 = mkstemp(VAR22)) == -1)
FUN4("", VAR22);
close(VAR5);

if (asprintf(&VAR23, "", VAR4, VAR11) == -1)
FUN6("");
if ((VAR5 = mkstemp(VAR23)) == -1)
FUN4("", VAR23);
close(VAR5);

if (asprintf(&VAR24, "", VAR4, VAR11) == -1)
FUN6("");
if ((VAR5 = mkstemp(VAR24)) == -1)
FUN4("", VAR24);
close(VAR5);

if (asprintf(&VAR25, "", VAR4, VAR11) == -1)
FUN6("");
if ((VAR5 = mkstemp(VAR25)) == -1)
FUN4("", VAR25);
close(VAR5);

VAR12 = getenv("");
if (VAR12)
VAR26 = VAR12;
else
VAR26 = VAR27;


VAR28 = argc;
VAR29 = argv;
FUN7();

if (VAR30 == VAR31) {
if ((VAR12 = getenv("")) == NULL)
VAR12 = getenv("");
if (VAR12 != NULL || !VAR32)
VAR30 = FUN8(VAR12);	
}


FUN9(0);

VAR6 = false;
for (FUN10(VAR20[1]); FUN11();
FUN12()) {


VAR6 = true;

VAR33 = true;

if (VAR34 == NULL)
VAR34 = xstrdup(VAR20[0]);


if (!VAR35)
FUN13(VAR22);


FUN14(VAR24);


if (!VAR35)
FUN15(VAR20[0]);


if (VAR36 == VAR37) {
FUN16();
continue;
}





VAR2 = 0;
VAR3 = 0;
VAR38 = false;
while (FUN17()) {
VAR2++;
VAR9 = 0;
VAR10 = FUN18();
if (VAR39 < VAR10)
VAR10 = VAR39;
if (!VAR35) {
do {
VAR7 = FUN19(VAR9);
if ((VAR2 == 1 && VAR7 == 0 && !VAR40) ||
(VAR7 == 1 && FUN20() == 0 && !VAR40)) {

if (!FUN21()) {
if (VAR9 == 0)
FUN22("");
continue;
}
VAR41 = !VAR41;

VAR7 = FUN19(VAR9);
if (VAR7 == 0) {

if (!FUN21())

FUN6("");
VAR41 = !VAR41;


if (FUN20() == 0)
VAR7 = 1;
} else if (VAR42) {
if (!FUN21())

FUN6("");
VAR41 = !VAR41;
FUN22("");
VAR35 = true;
} else if (VAR43) {
if (VAR44)
FUN22("",
VAR41 ? "" : "",
VAR41 ? "" : "");
} else {
FUN23("",
VAR41 ? "" : "",
VAR41 ? "" : "");
if (*VAR15 == '') {
FUN23("");
if (*VAR15 != '')
VAR35 = true;
VAR7 = 0;
VAR41 = !VAR41;
if (!FUN21())

FUN6("");
}
}
}
} while (!VAR35 && VAR7 == 0 &&
++VAR9 <= VAR10);

if (VAR35) {	
fclose(VAR45);
VAR45 = NULL;
}
}
VAR8 = FUN24() + VAR46;
if (VAR35) {
FUN25();
VAR3++;
if (VAR44)
FUN22("",
VAR2, VAR8);
} else if (VAR7 == 0) {
FUN25();
VAR3++;
if (VAR44)
FUN22("",
VAR2, VAR8);
} else {
FUN26(VAR7);
if (VAR44) {
FUN22("",
VAR2, VAR8);
if (VAR9 != 0)
FUN22("", VAR9);
if (VAR46)
FUN22("",
VAR46,
VAR46 == 1L ? "" : "");
FUN22("");
}
}
}

if (VAR38 && VAR47) {
VAR28 = VAR48;
VAR29 = VAR49;
FUN22("");
if (VAR45)
fclose(VAR45);
VAR45 = NULL;
if (VAR50)
fclose(VAR50);
VAR50 = NULL;
continue;
}
if (VAR2 == 0)
FUN6("");


if (!VAR35)
FUN27();


FUN28();
if (!VAR35) {
struct stat	VAR51;
char	*VAR52 = VAR34;

if (!VAR53) {
if (FUN29(VAR22, VAR34) < 0) {
VAR54 = true;
VAR52 = VAR22;
chmod(VAR22, VAR55);
} else
chmod(VAR34, VAR55);

if (VAR56 &&
FUN30(VAR52, &VAR51) == 0 &&
VAR51.VAR57 == 0) {
if (VAR44)
FUN22("",
VAR52);
unlink(VAR52);
}
}
}
fclose(VAR50);
VAR50 = NULL;
if (VAR3) {
VAR1 = 1;
if (*VAR58 == '') {
if (FUN31(VAR58, VAR34,
sizeof(VAR58)) >= sizeof(VAR58))
FUN6("", VAR34);
if (FUN32(VAR58, VAR59,
sizeof(VAR58)) >= sizeof(VAR58))
FUN6("", VAR34);
}
if (!VAR53)
FUN22("",
VAR3, VAR2, VAR35 ? "" : "", VAR58);
else
FUN22("",
VAR3, VAR2, VAR35 ? "" : "");
if (!VAR53 && FUN29(VAR24, VAR58) < 0)
VAR60 = true;
}
FUN9(1);
}

if (!VAR6)
VAR1 = 2;

FUN3(VAR1);

}