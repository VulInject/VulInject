int FUN1(int argc, const char **argv)
{
struct VAR1 *VAR2;
struct VAR3 *VAR4;
int VAR5, VAR6 = -1;
bool VAR7 = false;
bool VAR8 = false;
bool VAR9 = false;
bool VAR10 = false;
char const *VAR11 = NULL,
*VAR12 = NULL,
*VAR13 = NULL,
*VAR14 = NULL,
*VAR15 = NULL,
*VAR16 = NULL;
struct perf_debuginfod VAR17 = { };
char VAR18[VAR19];

struct perf_data VAR20 = {
.VAR21  = VAR22,
};
struct VAR23 *VAR24 = NULL;
struct VAR25 *VAR26 = NULL;

const struct option VAR27[] = {
FUN2('', "", &VAR11,
"", ""),
FUN2('', "", &VAR16,
"", ""),
FUN2('', "", &VAR12, "",
""),
FUN2('', "", &VAR13, "",
""),
FUN3('', "", &VAR10, ""),
FUN3('', "", &VAR8, ""),
FUN2('', "", &VAR14, "",
""),
FUN3('', "", &VAR7, ""),
FUN2('', "", &VAR15, "",
""),
FUN4(0, "", &VAR17.VAR28,
&VAR17.VAR29, "",
"",
""),
FUN5('', "", &VAR30, ""),
FUN6(0, "", &VAR6, ""),
FUN7()
};
const char * const VAR31[] = {
"",
NULL
};

VAR5 = FUN8(VAR32, &VAR17);
if (VAR5)
return VAR5;

argc = FUN9(argc, argv, VAR27,
VAR31, 0);

VAR9 = VAR11 || VAR16 ||
VAR12 || VAR13 ||
VAR14 || VAR15 ||
VAR10;

if (argc || !(VAR8 || VAR9))
FUN10(VAR31, VAR27);

FUN11(&VAR17);


if (VAR8 && VAR9) {
FUN12(VAR31,
VAR27, "");
}

if (VAR6 > 0)
VAR26 = FUN13(VAR6);

if (VAR14) {
VAR20.VAR33  = VAR14;
VAR20.VAR7 = VAR7;

VAR24 = FUN14(&VAR20, NULL);
if (FUN15(VAR24))
return FUN16(VAR24);
}

if (FUN17(VAR24 ? &VAR24->VAR34.VAR35 : NULL) < 0)
goto VAR36;

FUN18();

if (VAR8) {
VAR5 = FUN19();
goto VAR36;
}

if (VAR11) {
VAR2 = FUN20(VAR11, NULL);
if (VAR2) {
FUN21(VAR4, VAR2)
if (FUN22(VAR4->VAR37, VAR26)) {
if (VAR38 == VAR39) {
FUN23("",
VAR4->VAR37);
continue;
}
FUN24("",
VAR4->VAR37, FUN25(VAR38, VAR18, sizeof(VAR18)));
}

FUN26(VAR2);
}
}

if (VAR12) {
VAR2 = FUN20(VAR12, NULL);
if (VAR2) {
FUN21(VAR4, VAR2)
if (FUN27(VAR4->VAR37, VAR26)) {
if (VAR38 == VAR40) {
FUN23("",
VAR4->VAR37);
continue;
}
FUN24("",
VAR4->VAR37, FUN25(VAR38, VAR18, sizeof(VAR18)));
}

FUN26(VAR2);
}
}

if (VAR13) {
VAR2 = FUN20(VAR13, NULL);
if (VAR2) {
FUN21(VAR4, VAR2)
if (FUN28(VAR4->VAR37, VAR26)) {
if (VAR38 == VAR40) {
FUN23("",
VAR4->VAR37);
continue;
}
FUN24("",
VAR4->VAR37, FUN25(VAR38, VAR18, sizeof(VAR18)));
}

FUN26(VAR2);
}
}

if (VAR10) {
if (FUN29()) {
FUN24("",
FUN25(VAR38, VAR18, sizeof(VAR18)));
}
}

if (VAR14)
VAR5 = FUN30(VAR24, VAR41);

if (VAR15) {
VAR2 = FUN20(VAR15, NULL);
if (VAR2) {
FUN21(VAR4, VAR2)
if (FUN31(VAR4->VAR37, VAR26)) {
if (VAR38 == VAR40) {
FUN23("",
VAR4->VAR37);
continue;
}
FUN24("",
VAR4->VAR37, FUN25(VAR38, VAR18, sizeof(VAR18)));
}

FUN26(VAR2);
}
}

if (VAR16 && FUN32(VAR16, VAR7))
FUN24("", VAR16);

VAR36:
FUN33(VAR24);
FUN34(VAR26);

return VAR5;
}