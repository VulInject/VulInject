struct VAR1 *
FUN1(char * VAR2, char * VAR3)
{
struct VAR1 * VAR4;

VAR4 = malloc(sizeof(* VAR4));
if (VAR4 == NULL)
return NULL;

VAR4->VAR2 = VAR2;
VAR4->VAR3 = VAR3;

return VAR4;
}