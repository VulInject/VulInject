void
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR3;
struct VAR7	*VAR8 = VAR4;
char *VAR9;
int VAR10, VAR11;

FUN2("");

for (VAR11 = FUN3(VAR8->VAR12); VAR11; VAR11 = FUN4(VAR11)) {
VAR10 = FUN5(VAR11, "");
if (VAR10 <= 0)
continue;

VAR9 = malloc(VAR10, VAR13, VAR14);
FUN6(VAR11, "", VAR9, VAR10);
if (strcmp(VAR9, "") != 0) {
free(VAR9, VAR13, VAR10);
continue;
}
free(VAR9, VAR13, VAR10);

VAR10 = FUN5(VAR11, "");
if (VAR10 <= 0)
continue;

VAR6->VAR15 = malloc(VAR10, VAR16, VAR14);
FUN7(VAR11, "", VAR6->VAR15, VAR10);
VAR6->VAR17 = VAR10;

VAR6->VAR18 =
FUN8(VAR11, "", 0);
VAR19 = VAR20;
VAR21 = VAR22;
}
}