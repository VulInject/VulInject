static int
FUN1(struct VAR1 *VAR2, short VAR3, unsigned short *VAR4,
unsigned short *VAR5)
{
union cmdret VAR6 = VAR7;

if (FUN2(VAR2, VAR3, VAR3, &VAR6) && FUN2(VAR2, VAR3, VAR3, &VAR6))
return -VAR8;
*VAR4 = VAR6.VAR9[0];
*VAR5 = VAR6.VAR9[1];
FUN3("", VAR3, *VAR4, *VAR5);
return 0;
}