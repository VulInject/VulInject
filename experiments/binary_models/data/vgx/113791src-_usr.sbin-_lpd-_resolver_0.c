void
FUN1(const char *VAR1, const char *VAR2,
const struct VAR3 *VAR4, void (*VAR5)(void *, int, struct VAR3 *),
void *VAR6)
{
struct VAR7 *VAR8;

FUN2();

VAR8 = calloc(1, sizeof(*VAR8));
if (VAR8 == NULL) {
FUN3(VAR6, VAR9, NULL);
return;
}

while (VAR8->VAR10 == 0 || FUN4(VAR11, &VAR12, VAR8))
VAR8->VAR10 = FUN5();
VAR8->VAR13 = VAR5;
VAR8->VAR6 = VAR6;

FUN6(VAR11, &VAR12, VAR8);

FUN7(VAR14, VAR15, VAR8->VAR10, 0, -1);
FUN8(VAR14, VAR4 ? VAR4->VAR16 : 0);
FUN8(VAR14, VAR4 ? VAR4->VAR17 : 0);
FUN8(VAR14, VAR4 ? VAR4->VAR18 : 0);
FUN8(VAR14, VAR4 ? VAR4->VAR19 : 0);
FUN9(VAR14, VAR1);
FUN9(VAR14, VAR2);
FUN10(VAR14);
}