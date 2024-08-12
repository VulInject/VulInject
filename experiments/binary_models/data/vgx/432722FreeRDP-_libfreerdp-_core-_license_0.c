static VAR1 FUN1(const VAR2* VAR3, VAR4* VAR5);
static VAR1 FUN2(VAR2* VAR3, VAR4* VAR5);
static VAR1 FUN3(VAR2* VAR3);

static VAR1 FUN4(VAR2* VAR3);
static VAR1 FUN5(VAR2* VAR3, VAR4* VAR5);

static VAR1 FUN6(VAR2* VAR3, VAR4* VAR5);
static VAR1 FUN7(VAR2* VAR3, VAR4* VAR5);

static VAR1 FUN8(VAR2* VAR3, VAR4* VAR5);
static VAR1 FUN9(const VAR2* VAR3, VAR4* VAR5);

static VAR1 FUN10(VAR2* VAR3, const VAR6* VAR7,
const VAR8* VAR9, size_t VAR10);
static VAR1 FUN11(VAR2* VAR3, VAR4* VAR5);
static VAR11 FUN12(VAR2* VAR3, VAR4* VAR5);
static VAR11 FUN13(VAR2* VAR3, VAR4* VAR5);



static const char* const VAR12[] = { "",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"" };

static const char* const VAR13[] = { "", "", "",
"",
"" };

static void FUN14(const VAR14* VAR15)
{
char* VAR16 = NULL;
char* VAR17 = NULL;

FUN15(VAR15);
FUN15(VAR15->VAR18);
FUN15(VAR15->VAR19);

VAR16 = FUN16((const VAR20*)VAR15->VAR18,
VAR15->VAR21 / sizeof(VAR20), NULL);
VAR17 = FUN16((const VAR20*)VAR15->VAR19,
VAR15->VAR22 / sizeof(VAR20), NULL);
FUN17(VAR23, "");
FUN17(VAR23, "" VAR24 "", VAR15->VAR25);
FUN17(VAR23, "", VAR16);
FUN17(VAR23, "", VAR17);
free(VAR16);
free(VAR17);
}