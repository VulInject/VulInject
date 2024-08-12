FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5;
int VAR6;
unsigned char *VAR7 = (unsigned char*)FUN2 (VAR2);
int VAR8 = strlen (VAR7);


if (VAR8 >= VAR4->VAR9)
{
VAR8 = VAR6 = 0;
while (1)
{
VAR5 = VAR10 [*VAR7];
VAR8 += VAR5;
VAR7 += VAR5;

if (VAR8 >= VAR4->VAR9)
{
FUN3 (FUN4 (VAR2), VAR6, -1);
break;
}
VAR6++;
}
}
else
{
FUN5 (&VAR11, VAR4, FUN2 (VAR2));
}
}