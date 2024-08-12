struct VAR1 *
FUN1(
struct VAR2 *VAR3, void *VAR4, void *VAR5,
const char *VAR6,
void (*VAR7)(struct VAR8*, void *),
void (*VAR9)(void *),
int (*VAR10)(void *, struct VAR8 *),
void (*VAR11)(struct VAR12 *, void *, void *, void *),
void *VAR13)
{
struct VAR1 *VAR14 = (struct VAR1 *)
FUN2(sizeof(struct VAR1));
if (VAR14 == NULL)
return (NULL);

VAR14->VAR3 = VAR3;
VAR14->VAR15 = NULL;
VAR14->VAR16 = NULL;
VAR14->VAR17 = FUN3(VAR6);
if (VAR14->VAR17 == NULL) {
FUN4(VAR14);
return (NULL);
}
VAR14->VAR11 = VAR11;
VAR14->VAR18 = VAR13;
VAR14->VAR4 = VAR4;
VAR14->VAR5 = VAR5;
VAR14->VAR19 = VAR7;
VAR14->VAR20 = VAR9;
VAR14->VAR21 = VAR10;

return (VAR14);
}