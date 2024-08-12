void *
FUN1(VAR1 *VAR2, int VAR3, void *VAR4)
{
if (!VAR2 || (VAR3 < 0) || (VAR3 >= VAR2->VAR5))
return NULL;
VAR2->VAR6 = 0;
return (VAR2->VAR7[VAR3] = VAR4);
}