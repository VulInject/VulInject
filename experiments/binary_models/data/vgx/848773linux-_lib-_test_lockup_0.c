FUN1(VAR1, bool, 0600);
FUN2(VAR1, "");

static bool VAR2;
FUN1(VAR2, bool, 0600);
FUN2(VAR2, "");

static bool VAR3;
FUN1(VAR3, bool, 0400);
FUN2(VAR3, "");

static unsigned long VAR4 = VAR5;
FUN1(VAR4, VAR6, 0400);
FUN2(VAR4, "");

static bool VAR7;
FUN3(VAR8, VAR7, bool, 0400);
FUN2(VAR8, "");

static bool VAR9;
FUN1(VAR9, bool, 0400);
FUN2(VAR9, "");

static bool VAR10;
FUN1(VAR10, bool, 0400);
FUN2(VAR10, "");

static bool VAR11;
FUN1(VAR11, bool, 0400);
FUN2(VAR11, "");

static bool VAR12;
FUN1(VAR12, bool, 0400);
FUN2(VAR12, "");

static unsigned long VAR13;
FUN4(VAR13, VAR6, 0400);
FUN2(VAR13, "");

static unsigned long VAR14;
FUN4(VAR14, VAR6, 0400);
FUN2(VAR14, "");

static unsigned long VAR15;
FUN4(VAR15, VAR6, 0400);
FUN2(VAR15, "");

static unsigned long VAR16;
FUN4(VAR16, VAR6, 0400);
FUN2(VAR16, "");

static unsigned int VAR17;
FUN4(VAR17, VAR18, 0600);
FUN2(VAR17, "");

static unsigned int VAR19;
FUN1(VAR19, VAR18, 0400);
FUN2(VAR19, "");

static gfp_t VAR20 = VAR21;
FUN4(VAR20, VAR18, 0400);
FUN2(VAR20, "");

static bool VAR22;
FUN1(VAR22, bool, 0400);
FUN2(VAR22, "");

static bool VAR23;
FUN1(VAR23, bool, 0400);
FUN2(VAR23, "");

struct VAR24 *VAR25;
static struct VAR26 *VAR27;
static char VAR28[256];
FUN5(VAR29, VAR28, sizeof(VAR28), 0400);
FUN2(VAR29, "");

static bool VAR30;
FUN3(VAR31, VAR30, bool, 0400);
FUN2(VAR31, "");

static bool VAR32;
FUN3(VAR33, VAR32, bool, 0400);
FUN2(VAR33, "");

static bool VAR34;
FUN3(VAR35, VAR34, bool, 0400);
FUN2(VAR35, "");

static atomic_t VAR36 = FUN6(0);

static atomic64_t VAR37 = FUN7(0);

static struct VAR38 *VAR39;
static int VAR40;

static void FUN8(bool VAR41, bool VAR42)
{
u64 VAR43;

if (VAR3)
VAR43 = FUN9();

if (VAR14 && VAR41) {
if (VAR42)
FUN10("", (void *)VAR14);
FUN11((struct mutex *)VAR14);
}

if (VAR13 && VAR41) {
if (VAR42)
FUN10("",
(void *)VAR13);
if (VAR44)
FUN12((struct VAR45 *)VAR13);
else
FUN13((struct VAR45 *)VAR13);
}

if (VAR12 && VAR41) {
if (VAR42)
FUN10("", VAR39->VAR46);
if (VAR44)
FUN14(VAR39->VAR47);
else
FUN15(VAR39->VAR47);
}

if (VAR7)
FUN16();

if (VAR9)
FUN17();

if (VAR10)
FUN18();

if (VAR11)
FUN19();

if (VAR15 && VAR41) {
if (VAR42)
FUN10("",
(void *)VAR15);
FUN20((VAR48 *)VAR15);
}

if (VAR16 && VAR41) {
if (VAR42)
FUN10("",
(void *)VAR16);
if (VAR44)
FUN21((VAR49 *)VAR16);
else
FUN22((VAR49 *)VAR16);
}

if (VAR3) {
s64 VAR50 = FUN9() - VAR43;
s64 VAR51 = FUN23(&VAR37);

do {
if (VAR50 < VAR51)
break;
VAR51 = FUN24(&VAR37,
VAR51, VAR50);
} while (VAR51 != VAR50);

if (VAR50 > VAR4)
FUN25("", VAR50);
}
}