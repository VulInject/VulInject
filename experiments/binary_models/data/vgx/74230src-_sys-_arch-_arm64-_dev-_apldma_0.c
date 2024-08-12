struct VAR1 *
FUN1(unsigned int VAR2)
{
struct VAR3 *VAR4 = VAR5;
struct VAR1 *VAR6;

if (VAR4 == NULL || VAR2 >= VAR4->VAR7)
return NULL;


if ((VAR2 % 2) != 0)
return NULL;

VAR6 = malloc(sizeof(*VAR6), VAR8, VAR9);
VAR6->VAR10 = VAR4;
VAR6->VAR11 = VAR2;
VAR4->VAR12[VAR2] = VAR6;
return VAR6;
}