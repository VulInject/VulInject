static struct VAR1 *FUN1(VAR2 *VAR3,
size_t VAR4) {
int VAR5, VAR6 = 0;
struct VAR1 *VAR7 = NULL;
size_t VAR8;
unsigned int VAR9 = 0;


VAR9 = (VAR4 - sizeof(struct VAR1)) /
(sizeof(struct VAR10));
VAR8 = sizeof(struct VAR1) +
(VAR9 * sizeof(struct VAR10));

VAR7 = FUN2(VAR3, &VAR8, VAR11, &VAR5);
if (VAR7 == NULL) {
VAR6 = VAR12;

if (VAR12 == VAR13) {
FUN3(NULL);
}

VAR12 = VAR6;
return NULL;
}

VAR14 = VAR8;
VAR15 = VAR5;
FUN4(VAR16, 9,
"", VAR15,
VAR3->VAR17, VAR9);

VAR7->VAR18 = (struct VAR10 *) (VAR7 + 1);
VAR7->VAR19 = VAR9;

return VAR7;
}