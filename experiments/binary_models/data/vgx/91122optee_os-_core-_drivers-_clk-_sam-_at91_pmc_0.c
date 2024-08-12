struct VAR1 *FUN1(unsigned int VAR2, unsigned int VAR3,
unsigned int VAR4, unsigned int VAR5,
unsigned int VAR6)
{
unsigned int VAR7 = VAR2 + VAR3 + VAR4 + VAR5 + VAR6;
unsigned int VAR8 = sizeof(struct VAR1) +
VAR7 * sizeof(struct VAR9);
struct VAR1 *VAR1 = NULL;

VAR1 = calloc(1, VAR8);
if (!VAR1)
return NULL;

VAR1->VAR2 = VAR2;
VAR1->VAR10 = VAR1->VAR11;

VAR1->VAR3 = VAR3;
VAR1->VAR12 = VAR1->VAR10 + VAR2;

VAR1->VAR4 = VAR4;
VAR1->VAR13 = VAR1->VAR12 + VAR3;

VAR1->VAR5 = VAR5;
VAR1->VAR14 = VAR1->VAR13 + VAR4;

VAR1->VAR6 = VAR6;
VAR1->VAR15 = VAR1->VAR14 + VAR5;

return VAR1;
}