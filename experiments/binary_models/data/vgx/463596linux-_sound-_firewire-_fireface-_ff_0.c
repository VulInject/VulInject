FUN1("");
FUN2("");
FUN3("");

static void FUN4(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN5(VAR2->VAR5);
const char *const VAR6[] = {
[VAR7]	= "",
[VAR8]	= "",
[VAR9]	= "",
[VAR10]	= "",
[VAR11]	= "",
};
const char *VAR12;

VAR12 = VAR6[VAR2->VAR13];

strcpy(VAR2->VAR14->VAR15, "");
strcpy(VAR2->VAR14->VAR16, VAR12);
strcpy(VAR2->VAR14->VAR17, VAR12);
snprintf(VAR2->VAR14->VAR18, sizeof(VAR2->VAR14->VAR18),
"", VAR12,
VAR4->VAR19[3], VAR4->VAR19[4],
FUN6(&VAR2->VAR5->VAR20), 100 << VAR4->VAR21);
}