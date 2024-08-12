FUN1 (struct VAR1 *VAR2)
{
unsigned int VAR3;

if (VAR2->VAR4)
{
for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
free ((void *) VAR2->VAR4[VAR3]);
free (VAR2->VAR4);
}

if (VAR2->VAR6)
{
for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
free ((void *) VAR2->VAR6[VAR3]);
free (VAR2->VAR6);
}

if (VAR2->VAR8)
{
for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
free ((void *) VAR2->VAR8[VAR3]);
free (VAR2->VAR8);
free (VAR2->VAR10);
}

free (VAR2);
}