static void FUN1(char **VAR1, char *VAR2);
static void FUN2(VAR3 *VAR4, int VAR5);
static void FUN3(VAR3 *VAR4, int VAR5);
static void FUN4(VAR6 *VAR7, int VAR8);
static void FUN5(VAR9 *VAR10, int VAR11);
static void FUN6(VAR6 *VAR7, int VAR8);
static void FUN7(char **VAR12, char *VAR13,
uint16_t VAR14);
static void FUN8(VAR15 *VAR16, int VAR17);
static void FUN9(VAR15 *VAR16, int VAR17);
static void FUN10(VAR18 *VAR19, int VAR20);
static void FUN11(VAR21 *VAR19, int VAR22);
static void FUN12(VAR18 *VAR19, int VAR20);
static void FUN13(VAR21 *VAR19, int VAR22);
static VAR23 FUN14(char *VAR24);
extern void *FUN15(void *VAR25);
static int  FUN16(char *VAR26);
static char *FUN17(char *VAR27, char **VAR1, int *VAR28);
static void FUN18(char **VAR29);
static int  FUN19 (struct VAR30 *VAR31);
static void *FUN20(void *VAR25);
static void FUN21(
VAR3 *VAR4, int VAR5,
VAR6 *VAR7, int VAR8,
VAR15 *VAR16, int VAR17,
VAR18 *VAR19, int VAR20);
static void FUN22(void);
static void FUN23(char *VAR32, int VAR33);
static void FUN24(VAR34 *VAR35,
VAR3 *VAR4, int VAR5,
VAR6 *VAR7, int VAR8,
VAR15 *VAR16, int VAR17,
VAR18 *VAR19, int VAR20);
static int FUN25(char *VAR26, bool VAR36);
static void FUN26(VAR34 *VAR35);


extern int FUN27(char *VAR37,
VAR38 *VAR39);

static VAR40 *FUN28(char *VAR41)
{
VAR40 *VAR42 = NULL;

FUN29(VAR41);

if (!(VAR42 = FUN30(VAR43))) {
FUN31("", VAR44);
return VAR42;
}

if (FUN32(VAR42, NULL, VAR41, false, NULL) == VAR45) {
FUN31("", VAR44);
FUN33(VAR42);
VAR42 = NULL;
}

return VAR42;
}