void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const char *VAR5, const char *VAR6, prompt_input_cb VAR7,
prompt_free_cb VAR8, void *VAR9, int VAR10, enum prompt_type VAR11)
{
struct VAR12	*VAR13;
char			*VAR14;

if (VAR4 != NULL)
VAR13 = FUN2(NULL, VAR2, VAR4);
else
VAR13 = FUN3(NULL, VAR2, NULL, NULL, NULL);

if (VAR6 == NULL)
VAR6 = "";
if (VAR10 & VAR15)
VAR14 = xstrdup(VAR6);
else
VAR14 = FUN4(VAR13, VAR6);

FUN5(VAR2);
FUN6(VAR2);
FUN7(VAR2);

VAR2->VAR16 = FUN4(VAR13, VAR5);

if (VAR10 & VAR17) {
VAR2->VAR18 = xstrdup(VAR14);
VAR2->VAR19 = FUN8("");
} else {
VAR2->VAR18 = NULL;
VAR2->VAR19 = FUN8(VAR14);
}
VAR2->VAR20 = FUN9(VAR2->VAR19);

VAR2->VAR21 = VAR7;
VAR2->VAR22 = VAR8;
VAR2->VAR23 = VAR9;

memset(VAR2->VAR24, 0, sizeof VAR2->VAR24);

VAR2->VAR25 = VAR10;
VAR2->VAR11 = VAR11;
VAR2->VAR26 = VAR27;

if (~VAR10 & VAR17)
VAR2->VAR28.VAR10 |= (VAR29|VAR30);
VAR2->VAR10 |= VAR31;

if (VAR10 & VAR17)
VAR2->FUN10(VAR2, VAR2->VAR23, "", 0);

free(VAR14);
FUN11(VAR13);
}