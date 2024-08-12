FUN1(VAR1, VAR2, 0600);
FUN2(VAR1, "");

static unsigned int VAR3;
FUN1(VAR3, VAR2, 0600);
FUN2(VAR3, "");

static unsigned int VAR4;
FUN1(VAR4, VAR2, 0600);
FUN2(VAR4, "");

static unsigned int VAR5;
FUN1(VAR5, VAR2, 0600);
FUN2(VAR5, "");

static unsigned int VAR6 = 1;
FUN1(VAR6, VAR2, 0600);
FUN2(VAR6, "");

static bool VAR7;
FUN1(VAR7, bool, 0400);
FUN2(VAR7, "");

static int VAR8;
static char *VAR9 = "";
FUN1(VAR9, VAR10, 0400);
FUN2(VAR9, "");

static bool VAR11;
FUN1(VAR11, bool, 0400);
FUN2(VAR11, "");

static bool VAR12;
FUN1(VAR12, bool, 0400);
FUN2(VAR12, "");

static bool VAR13;
FUN1(VAR13, bool, 0400);
FUN2(VAR13, "");

static bool VAR14;
FUN1(VAR14, bool, 0400);
FUN2(VAR14, "");

static bool VAR15;
FUN1(VAR15, bool, 0400);
FUN2(VAR15, "");

static bool VAR16;
FUN1(VAR16, bool, 0600);
FUN2(VAR16, "");

static bool VAR17;
FUN1(VAR17, bool, 0600);
FUN2(VAR17, "");

static bool VAR18;
FUN1(VAR18, bool, 0600);
FUN2(VAR18, "");

static bool VAR19;
FUN1(VAR19, bool, 0400);
FUN2(VAR19, "");

static unsigned long VAR20 = VAR21;
FUN1(VAR20, VAR22, 0400);
FUN2(VAR20, "");

static bool VAR23;
FUN3(VAR24, VAR23, bool, 0400);
FUN2(VAR24, "");

static bool VAR25;
FUN1(VAR25, bool, 0400);
FUN2(VAR25, "");

static bool VAR26;
FUN1(VAR26, bool, 0400);
FUN2(VAR26, "");

static bool VAR27;
FUN1(VAR27, bool, 0400);
FUN2(VAR27, "");

static bool VAR28;
FUN1(VAR28, bool, 0400);
FUN2(VAR28, "");

static unsigned long VAR29;
FUN4(VAR29, VAR22, 0400);
FUN2(VAR29, "");

static unsigned long VAR30;
FUN4(VAR30, VAR22, 0400);
FUN2(VAR30, "");

static unsigned long VAR31;
FUN4(VAR31, VAR22, 0400);
FUN2(VAR31, "");

static unsigned long VAR32;
FUN4(VAR32, VAR22, 0400);
FUN2(VAR32, "");

static unsigned int VAR33;
FUN4(VAR33, VAR2, 0600);
FUN2(VAR33, "");

static unsigned int VAR34;
FUN1(VAR34, VAR2, 0400);
FUN2(VAR34, "");

static gfp_t VAR35 = VAR36;
FUN4(VAR35, VAR2, 0400);
FUN2(VAR35, "");

static bool VAR37;
FUN1(VAR37, bool, 0400);
FUN2(VAR37, "");

static bool VAR38;
FUN1(VAR38, bool, 0400);
FUN2(VAR38, "");

struct VAR39 *VAR40;
static struct VAR41 *VAR42;
static char VAR43[256];
FUN5(VAR44, VAR43, sizeof(VAR43), 0400);
FUN2(VAR44, "");

static bool VAR45;
FUN3(VAR46, VAR45, bool, 0400);
FUN2(VAR46, "");

static bool VAR47;
FUN3(VAR48, VAR47, bool, 0400);
FUN2(VAR48, "");

static bool VAR49;
FUN3(VAR50, VAR49, bool, 0400);
FUN2(VAR50, "");

static atomic_t VAR51 = FUN6(0);

static atomic64_t VAR52 = FUN7(0);

static struct VAR53 *VAR54;
static int VAR55;

static void FUN8(bool VAR56, bool VAR57)
{
u64 VAR58;

if (VAR19)
VAR58 = FUN9();

if (VAR30 && VAR56) {
if (VAR57)
FUN10("", (void *)VAR30);
FUN11((struct mutex *)VAR30);
}

if (VAR29 && VAR56) {
if (VAR57)
FUN10("",
(void *)VAR29);
if (VAR13)
FUN12((struct VAR59 *)VAR29);
else
FUN13((struct VAR59 *)VAR29);
}

if (VAR28 && VAR56) {
if (VAR57)
FUN10("", VAR54->VAR60);
if (VAR13)
FUN14(VAR54->VAR61);
else
FUN15(VAR54->VAR61);
}

if (VAR23)
FUN16();

if (VAR25)
FUN17();

if (VAR26)
FUN18();

if (VAR27)
FUN19();

if (VAR31 && VAR56) {
if (VAR57)
FUN10("",
(void *)VAR31);
FUN20((VAR62 *)VAR31);
}

if (VAR32 && VAR56) {
if (VAR57)
FUN10("",
(void *)VAR32);
if (VAR13)
FUN21((VAR63 *)VAR32);
else
FUN22((VAR63 *)VAR32);
}

if (VAR19) {
s64 VAR64 = FUN9() - VAR58;
s64 VAR65 = FUN23(&VAR52);

do {
if (VAR64 < VAR65)
break;
VAR65 = FUN24(&VAR52,
VAR65, VAR64);
} while (VAR65 != VAR64);

if (VAR64 > VAR20)
FUN25("", VAR64);
}
}