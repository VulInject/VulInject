FUN1("");
FUN2("");
FUN3("");
FUN4(VAR1);

FUN5(VAR2, VAR2, VAR3, 0644);
FUN6(VAR2, ""
"" FUN7(VAR4) "");
FUN5(VAR5, VAR5, VAR3, 0644);
FUN6(VAR5, ""
""
"" FUN7(VAR6) "");
FUN5(VAR7, VAR7, VAR3, 0644);
FUN6(VAR7, ""
"" FUN7(VAR8) "");
FUN5(VAR9, VAR9, VAR10, 0644);
FUN6(VAR9, ""
"" FUN7(VAR11) "");
FUN5(VAR12, VAR13, VAR3, 0644);
FUN6(VAR12, ""
"" FUN7(VAR14) "");
FUN5(VAR15, VAR15, bool, 0444);
FUN6(VAR15, "");


static atomic_long_t VAR16;
static unsigned long VAR17;
static unsigned long VAR18;

static FUN8(VAR19);
static int VAR20; 

static struct VAR21 *VAR22;
static struct balloon_dev_info VAR23;

static long FUN9(struct VAR24 *VAR24)
{
const unsigned long VAR25 = FUN10(VAR24);
unsigned long VAR26 = FUN11();
long VAR27 = 0;
int VAR28;

if (FUN12(VAR15))
return 0;

for (VAR28 = 0; !VAR27 && VAR28 < VAR29; VAR28 += VAR26)
VAR27 = FUN13(VAR30, VAR31, VAR25 + VAR28, 0);

for (VAR28 -= VAR26; VAR27 && VAR28 != 0; VAR28 -= VAR26)
FUN13(VAR30, VAR32,
VAR25 + VAR28 - VAR26, 0);

return VAR27;
}