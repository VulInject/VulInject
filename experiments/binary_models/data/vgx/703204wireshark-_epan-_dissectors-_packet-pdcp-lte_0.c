void FUN1(guint16 VAR1, const char *VAR2, guint32 VAR3)
{
char *VAR4 = NULL;


VAR5 *VAR6 = (VAR5*)FUN2(VAR7,
FUN3((VAR8)VAR1));
if (VAR6 == NULL) {

VAR6 = FUN4(FUN5(), VAR5);
FUN6(VAR7, FUN3((VAR8)VAR1), VAR6);
}

if (VAR6->VAR9 == VAR10) {

return;
}

VAR11 *VAR12 = &VAR6->VAR13[VAR6->VAR9++];
VAR12->VAR14 = VAR15;
VAR12->VAR16 = FUN7(VAR2);
VAR12->VAR17 = VAR3;
FUN8(VAR12->VAR16, VAR12->VAR18, &VAR12->VAR19, &VAR4);
if (VAR4) {
FUN9("", VAR4);
FUN10(VAR4);
}
}



static gboolean VAR20 = VAR21;
static gboolean VAR22 = VAR23;  
static gboolean VAR24 = VAR21;
static gboolean VAR25 = VAR23;          


static enum lte_security_ciphering_algorithm_e VAR26 = VAR27;
static enum lte_security_integrity_algorithm_e VAR28 = VAR29;


static const value_string VAR30[] =
{
{ VAR31,      ""},
{ VAR32,    ""},
{ 0, NULL }
};