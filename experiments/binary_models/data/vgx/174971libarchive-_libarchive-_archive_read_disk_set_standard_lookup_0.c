static const char *
FUN1(struct VAR1 *VAR2,
const char * (*VAR3)(struct VAR1 *, VAR4), id_t VAR5)
{
const char *VAR6;
int VAR7;


VAR2->VAR8++;

VAR7 = VAR5 % VAR2->VAR9;
if (VAR2->VAR2[VAR7].VAR6 != NULL) {
if (VAR2->VAR2[VAR7].VAR5 == VAR5) {
VAR2->VAR10++;
if (VAR2->VAR2[VAR7].VAR6 == VAR11)
return (NULL);
return (VAR2->VAR2[VAR7].VAR6);
}
if (VAR2->VAR2[VAR7].VAR6 != VAR11)
free((void *)(VAR12)VAR2->VAR2[VAR7].VAR6);
VAR2->VAR2[VAR7].VAR6 = NULL;
}

VAR6 = (VAR3)(VAR2, VAR5);
if (VAR6 == NULL) {

VAR2->VAR2[VAR7].VAR6 = VAR11;
VAR2->VAR2[VAR7].VAR5 = VAR5;
return (NULL);
}

VAR2->VAR2[VAR7].VAR6 = VAR6;
VAR2->VAR2[VAR7].VAR5 = VAR5;
return (VAR2->VAR2[VAR7].VAR6);
}