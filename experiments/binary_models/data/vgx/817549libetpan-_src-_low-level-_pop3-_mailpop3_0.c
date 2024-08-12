static struct VAR1 *
FUN1(unsigned int VAR2, uint32_t VAR3, char * VAR4)
{
struct VAR1 * VAR5;

VAR5 = malloc(sizeof(* VAR5));
if (VAR5 == NULL)
return NULL;
VAR5->VAR6 = VAR2;
VAR5->VAR7 = VAR3;
VAR5->VAR8 = VAR9;
VAR5->VAR10 = VAR4;

return VAR5;
}