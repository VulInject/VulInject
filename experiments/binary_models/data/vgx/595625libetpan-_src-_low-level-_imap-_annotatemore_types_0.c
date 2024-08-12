struct VAR1 *
FUN1(char * VAR2, struct
VAR3 * VAR4)
{
struct VAR1 * VAR5;

VAR5 = malloc(sizeof(* VAR5));
if (VAR5 == NULL)
return NULL;

VAR5->VAR6 = VAR2;
VAR5->VAR7 = VAR4;

return VAR5;
}