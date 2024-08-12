FUN1 (const void *VAR1, const void *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *) VAR1;
struct VAR3 *VAR5 = (struct VAR3 *) VAR2;
int VAR6;
int VAR7;
char *VAR8, *VAR9;


if (VAR10->VAR11)
{
if (VAR4->VAR12 - VAR13 > VAR5->VAR12 - VAR13)
VAR7 = 1;
else
VAR7 = -1;
}
else if (VAR10->VAR14)
VAR7 = VAR4->VAR15.VAR16 - VAR5->VAR15.VAR16;
else
VAR7 = FUN2 (VAR10, VAR4->VAR15.VAR12, VAR4->VAR17, 0,
VAR5->VAR15.VAR12, VAR5->VAR17, 0);
if (VAR7)
{
if (VAR10->VAR18)
return -VAR7;
return VAR7;
}

VAR8 = VAR4->VAR12;
VAR9 = VAR5->VAR12;



for (VAR6 = 1; VAR6 < VAR19; VAR6++)
{
long VAR20, VAR21;
char *VAR22 = FUN3 (&VAR10[VAR6], VAR8, &VAR20);
char *VAR23 = FUN3 (&VAR10[VAR6], VAR9, &VAR21);
int VAR7 = FUN2 (&VAR10[VAR6], VAR22, VAR20,
VAR8 - VAR13,
VAR23, VAR21, VAR9 - VAR13);
if (VAR7)
{
if (VAR10[VAR6].VAR18)
return -VAR7;
return VAR7;
}
}

return 0;                     
}