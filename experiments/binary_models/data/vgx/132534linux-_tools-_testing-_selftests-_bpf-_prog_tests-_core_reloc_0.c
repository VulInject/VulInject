static void FUN1(bool VAR1)
{
const size_t VAR2 = FUN2(sizeof(struct VAR3));
FUN3(VAR4, VAR5);
struct VAR6 *VAR7, VAR8;
const char *VAR9, *VAR10;
int VAR11, VAR12, VAR13, VAR14;
struct VAR15 *VAR16 = NULL;
struct VAR17 *VAR18;
struct VAR19 *VAR20;
struct VAR21 *VAR22;
uint64_t VAR23;
struct VAR3 *VAR3;
void *VAR24 = NULL;

VAR23 = FUN4() | ((VAR25)FUN5(VAR26) << 32);

for (VAR12 = 0; VAR12 < FUN6(VAR27); VAR12++) {
char VAR28[] = "";

VAR8 = VAR27[VAR12];
VAR7 = &VAR8;

if (!FUN7(VAR7->VAR29))
continue;

if (VAR7->VAR30 && !VAR31.VAR32) {
FUN8();
continue;
}


if (VAR1) {

if (!VAR7->VAR33 || VAR7->VAR34) {
FUN8();
continue;
}

VAR14 = mkstemp(VAR28);
if (!FUN9(VAR14, 0, ""))
continue;
close(VAR14); 
VAR11 = FUN10(VAR7->VAR33, VAR28,
VAR7->VAR35);
if (!FUN11(VAR11, ""))
continue;

VAR7->VAR33 = VAR28;
}

if (VAR7->VAR36) {
VAR11 = VAR7->FUN12(VAR7);
if (FUN13(VAR11, "", "", VAR12, VAR11))
continue;
}

if (VAR7->VAR33) {
VAR11 = FUN14(VAR7->VAR33, VAR37);
if (!FUN11(VAR11, ""))
continue;
}

VAR5.VAR38 = VAR7->VAR33;
VAR22 = FUN15(VAR7->VAR35, &VAR5);
if (!FUN16(VAR22, ""))
goto VAR39;

VAR10 = VAR7->VAR40;
VAR9 = VAR7->VAR41; 
VAR20 = FUN17(VAR22, VAR10);
if (FUN13(!VAR20, "",
"", VAR10))
goto VAR39;

VAR11 = FUN18(VAR22);
if (VAR11) {
if (!VAR7->VAR42)
FUN11(VAR11, "");
goto VAR39;
}

VAR18 = FUN19(VAR22, "");
if (FUN13(!VAR18, "", ""))
goto VAR39;

VAR24 = FUN20(NULL, VAR2, VAR43 | VAR44,
VAR45, FUN21(VAR18), 0);
if (FUN13(VAR24 == VAR46, "",
"", VAR47)) {
VAR24 = NULL;
goto VAR39;
}
VAR3 = VAR24;

memset(VAR24, 0, sizeof(*VAR3));
if (VAR7->VAR48)
memcpy(VAR3->VAR49, VAR7->VAR50, VAR7->VAR48);
VAR3->VAR23 = VAR23;

VAR16 = FUN22(VAR20, VAR9);
if (!FUN16(VAR16, ""))
goto VAR39;


if (VAR7->VAR51) {
if (!FUN11(VAR7->FUN23(VAR7), ""))
goto VAR39;
} else {
FUN24(1);
}

if (VAR3->VAR52) {
FUN8();
goto VAR39;
}

if (!FUN25(VAR7->VAR42, ""))
goto VAR39;

VAR13 = memcmp(VAR3->VAR53, VAR7->VAR54,
VAR7->VAR55) == 0;
if (FUN13(!VAR13, "",
"")) {
int VAR56;

for (VAR56 = 0; VAR56 < VAR7->VAR48; VAR56++) {
FUN26("",
VAR56, VAR7->VAR50[VAR56]);
}
for (VAR56 = 0; VAR56 < VAR7->VAR55; VAR56++) {
FUN26("",
VAR56, VAR7->VAR54[VAR56], VAR3->VAR53[VAR56]);
}
goto VAR39;
}

VAR39:
if (VAR24) {
FUN27(FUN28(VAR24, VAR2));
VAR24 = NULL;
}
if (VAR1)
remove(VAR7->VAR33);
FUN29(VAR16);
VAR16 = NULL;
FUN30(VAR22);
}
}