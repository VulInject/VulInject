struct VAR1 *
FUN1(struct VAR2 *VAR3, const char *VAR4)
{
struct VAR1 *VAR5;

if (VAR3->VAR6 == VAR7)
FUN2(VAR3, "", VAR8);

if ((VAR5 = calloc(1, sizeof(*VAR5))) == NULL)
return NULL;

VAR5->VAR9 = VAR3;
VAR5->VAR10 = (VAR4 == NULL);
if (VAR4 != NULL) {
VAR5->VAR11.VAR12 = (unsigned char *)strdup(VAR4);
if (VAR5->VAR11.VAR12 == NULL) {
free(VAR5);
return NULL;
}
VAR5->VAR11.VAR13 = strlen(VAR4);
}
VAR5->VAR14 = VAR3->VAR15 == VAR16 ?
VAR16 : VAR17;
VAR5->VAR18 = VAR19;
FUN3(&(VAR5->VAR20));
FUN3(&(VAR5->VAR21));

FUN4(&(VAR3->VAR22), VAR5, VAR23);

return VAR5;
}