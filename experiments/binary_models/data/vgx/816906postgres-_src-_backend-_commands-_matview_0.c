static void FUN1(VAR1 *VAR2);
static VAR3 FUN2(VAR1 *VAR4, VAR5 *VAR6,
const char *VAR7);
static char *FUN3(char *VAR8, int VAR9);
static void FUN4(Oid VAR10, Oid VAR11, Oid VAR12,
int VAR13);
static void FUN5(Oid VAR10, Oid VAR14, char VAR15);
static bool FUN6(Relation VAR16);
static void FUN7(void);
static void FUN8(void);


void
FUN9(Relation VAR17, bool VAR18)
{
Relation	VAR19;
HeapTuple	VAR20;

FUN10(VAR17->VAR21->VAR22 == VAR23);


VAR19 = FUN11(VAR24, VAR25);
VAR20 = FUN12(VAR26,
FUN13(FUN14(VAR17)));
if (!FUN15(VAR20))
FUN16(VAR27, "",
FUN14(VAR17));

((VAR28) FUN17(VAR20))->VAR29 = VAR18;

FUN18(VAR19, &VAR20->VAR30, VAR20);

FUN19(VAR20);
FUN20(VAR19, VAR25);


FUN21();
}