static int
FUN1(struct VAR1 *VAR1, const struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);
const char *VAR6 = FUN3(VAR3, "");
const char *VAR7 = FUN4(VAR3, "",
"");
unsigned long long VAR8 =
FUN5(VAR3, "",
VAR9);
uint32_t VAR10, VAR11;
uint32_t VAR12, VAR13;
uint64_t VAR14;
uint8_t VAR15;
uint32_t VAR16, VAR17;
uint64_t  VAR18, VAR19;
bool VAR20 = false;
enum sched_assignment_type VAR21;
static bool VAR22 = true;

VAR12 = FUN6(VAR3, "",
VAR23);
FUN7(&VAR5->VAR12, &VAR13);
if (VAR12 != VAR13) {
FUN8(&VAR5->VAR12, VAR12);
FUN9(""VAR24"",
VAR12);
}

if (!FUN10(VAR5->VAR25, VAR6)) {
free(VAR5->VAR25);
VAR5->VAR25 = FUN11(VAR6);
FUN12(VAR5);
}

FUN7(&VAR5->VAR26, &VAR11);
if (VAR8 <= VAR27) {
VAR10 = VAR8 == 0 ? 0 : VAR27 / VAR8;
} else {
VAR10 = VAR28;
VAR8 = VAR9;
}

if (VAR10 != VAR11) {
FUN8(&VAR5->VAR26, VAR10);
if (VAR10 == 0) {
FUN9("");
} else {
FUN9("",
VAR8, (100 / (float)VAR8));
}
}

bool VAR29 = FUN13(VAR3, "", false);
bool VAR30;
FUN7(&VAR5->VAR31, &VAR30);
if (VAR29 != VAR30) {
FUN8(&VAR5->VAR31, VAR29);
if (VAR29) {
FUN9("");
} else {
FUN9("");
}
}

bool VAR32 = FUN13(VAR3, "", false);
bool VAR33;
FUN7(&VAR5->VAR34, &VAR33);
if (VAR32 != VAR33) {
FUN8(&VAR5->VAR34, VAR32);
if (VAR32) {
FUN9("");
} else {
FUN9("");
}
}

if (!strcmp(VAR7, "")) {
VAR21 = VAR35;
} else if (!strcmp(VAR7, "")) {
VAR21 = VAR36;
} else if (!strcmp(VAR7, "")) {
VAR21 = VAR37;
} else {

FUN14(""
"");
VAR21 = VAR36;
VAR7 = "";
}
if (VAR5->VAR21 != VAR21) {
VAR5->VAR21 = VAR21;
FUN9("",
VAR7);
FUN12(VAR5);
}

bool VAR38 = FUN13(VAR3, "", true);

if (VAR21 != VAR37 && VAR38 == false) {

FUN14(""
"");
VAR38 = true;
}
if (VAR5->VAR38 != VAR38) {
VAR5->VAR38 = VAR38;
if (VAR38) {
FUN9("");
} else {
FUN9("");
}
FUN12(VAR5);
}

struct VAR39 *VAR40 = &VAR5->VAR40;

VAR14 = FUN5(VAR3,
"",
VAR41);
if (VAR14 > VAR42) {
VAR14 = VAR41;
}


VAR14 =
VAR14 ? VAR14 * VAR43 : VAR43;

if (VAR40->VAR14 != VAR14) {
VAR40->VAR14 = VAR14;
FUN9(""
""VAR44"", VAR14 / VAR43);
VAR20 = true;
}

VAR17 = FUN15(VAR3,
"",
VAR45);
if (VAR17 > 100) {
VAR17 = VAR45;
}
if (VAR17 != VAR40->VAR46) {
VAR40->VAR46 = VAR17;
FUN9(""
""VAR24"", VAR17);
VAR20 = true;
}

VAR16 = FUN15(VAR3, "",
VAR47);
if (VAR16 > 100) {
VAR16 = VAR47;
}
FUN7(&VAR40->VAR48, &VAR15);
if (VAR16 != VAR15) {
FUN8(&VAR40->VAR48,
VAR16);
FUN9(""VAR24"",
VAR16);
VAR20 = true;
}

bool VAR49 = FUN13(VAR3, "", false);

FUN16(VAR5, VAR49, VAR20);

VAR18 = FUN5(VAR3, "", 0);
VAR18 = FUN17(VAR50, VAR18);
FUN7(&VAR5->VAR18, &VAR19);
if (VAR22 || VAR18 != VAR19) {
FUN8(&VAR5->VAR18, VAR18);
FUN9(""VAR44"", VAR18);
FUN9("",
VAR18 ? "" : "" );
}

VAR22  = false;
return 0;
}