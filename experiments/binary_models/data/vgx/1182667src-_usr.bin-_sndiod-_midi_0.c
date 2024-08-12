struct VAR1 *
FUN1(char *VAR2, unsigned int VAR3, int VAR4)
{
struct VAR1 *VAR5;

VAR5 = xmalloc(sizeof(struct VAR1));
VAR5->VAR2 = VAR2;
VAR5->VAR6 = VAR7;
VAR5->VAR4 = VAR4;
VAR5->VAR8 = FUN2(&VAR9, VAR5, VAR3);
VAR5->VAR10 = VAR11++;
VAR5->VAR12 = VAR5;
VAR5->VAR13 = VAR14;
VAR14 = VAR5;
return VAR5;
}