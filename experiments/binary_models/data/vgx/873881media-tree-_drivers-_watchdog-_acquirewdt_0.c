static int VAR1 = 0x43;
FUN1(VAR1, int, 0);
FUN2(VAR1, "");


static int VAR2 = 0x443;
FUN1(VAR2, int, 0);
FUN2(VAR2, "");

static bool VAR3 = VAR4;
FUN1(VAR3, bool, 0);
FUN2(VAR3,
""
FUN3(VAR4) "");



static void FUN4(void)
{

FUN5(VAR2);
}