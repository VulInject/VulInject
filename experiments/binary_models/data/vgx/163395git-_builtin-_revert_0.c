static int FUN1(int argc, const char **argv, struct VAR1 *VAR2)
{
const char * const * VAR3 = FUN2(VAR2);
const char *VAR4 = FUN3(VAR2);
const char *VAR5 = NULL;
int VAR6 = 0;
struct option VAR7[] = {
FUN4(0, "", &VAR6, FUN5(""), ''),
FUN4(0, "", &VAR6, FUN5(""), ''),
FUN4(0, "", &VAR6, FUN5(""), ''),
FUN4(0, "", &VAR6, FUN5(""), ''),
FUN6(&VAR5),
FUN7('', "", &VAR2->VAR8, FUN5("")),
FUN7('', "", &VAR2->VAR9, FUN5("")),
FUN8('', NULL),
FUN7('', "", &VAR2->VAR10, FUN5("")),
FUN9('', "", VAR2, FUN5(""),
FUN5(""), VAR11),
FUN10(&VAR2->VAR12),
FUN11(0, "", &VAR2->VAR13, FUN5(""), FUN5("")),
FUN9('', "", &VAR2, FUN5(""),
FUN5(""), VAR14),
{ VAR15, '', "", &VAR2->VAR16, FUN5(""),
FUN5(""), VAR17, NULL, (VAR18) "" },
FUN12()
};
struct VAR19 *VAR20 = VAR7;

if (VAR2->VAR21 == VAR22) {
struct option VAR23[] = {
FUN7('', NULL, &VAR2->VAR24, FUN5("")),
FUN7(0, "", &VAR2->VAR25, FUN5("")),
FUN7(0, "", &VAR2->VAR26, FUN5("")),
FUN7(0, "", &VAR2->VAR27, FUN5("")),
FUN7(0, "", &VAR2->VAR28, FUN5("")),
FUN12(),
};
VAR20 = FUN13(VAR20, VAR23);
} else if (VAR2->VAR21 == VAR29) {
struct option VAR23[] = {
FUN7(0, "", &VAR2->VAR30,
FUN5("")),
FUN12(),
};
VAR20 = FUN13(VAR20, VAR23);
}

argc = FUN14(argc, argv, NULL, VAR20, VAR3,
VAR31 |
VAR32);

FUN15(VAR33);
VAR33->VAR34.VAR35 = 0;


if (VAR2->VAR28)
VAR2->VAR26 = 1;

if (VAR5) {
VAR2->VAR36 = FUN16(VAR5, 1);
VAR2->VAR37 = 1;
}


if (VAR6) {
char *VAR38;
if (VAR6 == '')
VAR38 = "";
else if (VAR6 == '')
VAR38 = "";
else if (VAR6 == '')
VAR38 = "";
else {
assert(VAR6 == '');
VAR38 = "";
}

FUN17(VAR4, VAR38,
"", VAR2->VAR8,
"", VAR2->VAR10,
"", VAR2->VAR39,
"", VAR2->VAR13 ? 1 : 0,
"", VAR2->VAR40 ? 1 : 0,
"", VAR2->VAR24,
"", VAR2->VAR25,
"", VAR2->VAR12 == VAR41,
"", VAR2->VAR12 == VAR42,
NULL);
}

if (!VAR2->VAR13 && VAR2->VAR43) {
VAR2->VAR13 = VAR2->VAR43;
VAR2->VAR43 = NULL;
}

if (VAR2->VAR25)
FUN17(VAR4, "",
"", VAR2->VAR10,
"", VAR2->VAR8,
"", VAR2->VAR24,
"", VAR2->VAR9 > 0,
NULL);

if (VAR6) {
VAR2->VAR44 = NULL;
} else {
struct setup_revision_opt VAR45;
VAR2->VAR44 = xmalloc(sizeof(*VAR2->VAR44));
FUN18(VAR33, VAR2->VAR44, NULL);
VAR2->VAR44->VAR46 = 1;
VAR2->VAR44->VAR47 = 1;
if (argc < 2)
FUN19(VAR3, VAR20);
if (!strcmp(argv[1], ""))
argv[1] = "";
memset(&VAR45, 0, sizeof(VAR45));
VAR45.VAR48 = 1;
argc = FUN20(argc, argv, VAR2->VAR44, &VAR45);
}

if (argc > 1)
FUN19(VAR3, VAR20);


VAR2->VAR16 = FUN21(VAR2->VAR16);
VAR2->VAR13 = FUN21(VAR2->VAR13);
if (!VAR2->VAR13 && getenv(""))
VAR2->VAR13 = xstrdup(getenv(""));
free(VAR20);

if (VAR6 == '') {
int VAR49 = FUN22(VAR2);
if (!VAR49)
FUN23(VAR33, 0);
return VAR49;
}
if (VAR6 == '')
return FUN24(VAR33, VAR2);
if (VAR6 == '')
return FUN25(VAR33, VAR2);
if (VAR6 == '')
return FUN26(VAR33, VAR2);
return FUN27(VAR33, VAR2);
}