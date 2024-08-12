static VAR1 *
FUN1(VAR2 * VAR3, const char * VAR4, int VAR5)
{
register VAR1 *VAR6;
size_t VAR7;


VAR7 = sizeof(*VAR6) + VAR5;
if (!FUN2(VAR8))
VAR7 += sizeof(*VAR6->VAR9) + VAR10;
if ((VAR6 = malloc(VAR7)) == NULL)
return (NULL);


memmove(VAR6->VAR11, VAR4, VAR5);
VAR6->VAR11[VAR5] = '';

if (!FUN2(VAR8))
VAR6->VAR9 = (struct VAR12 *)FUN3(VAR6->VAR11 + VAR5 + 2);
VAR6->VAR13 = VAR5;
VAR6->VAR14 = VAR3->VAR14;
VAR6->VAR15 = 0;
VAR6->VAR16 = 0;
VAR6->VAR17 = VAR18;
VAR6->VAR19 = 0;
VAR6->VAR20 = NULL;
return (VAR6);
}