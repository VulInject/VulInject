VAR1
FUN1(struct VAR2 *VAR3, char **VAR4, VAR1 *VAR5,
char **VAR6, VAR1 *VAR7)
{
int				VAR8, VAR9;
unsigned char	*VAR10, VAR11;
char			*VAR12;
size_t			VAR13, VAR14;
size_t			VAR15;

VAR8 = VAR3->VAR16;
VAR9 = VAR3->VAR17;

if ((VAR4 == 0) || (*VAR4 == 0)) {
VAR8 = VAR18;
VAR9 = VAR19;
VAR10 = (unsigned char *)*VAR6;
VAR14 = *VAR7;
VAR15 = 0;
goto VAR20;
}

VAR12 = *VAR4;
VAR10 = (unsigned char *)*VAR6;
VAR13 = *VAR5;
VAR14 = *VAR7;



while (VAR13 > 0)
{
FUN2(VAR11);

VAR11=VAR21[VAR11];


FUN3(VAR11);

if ((VAR14 < 1)	 && (VAR13 > 0))
{
VAR22 = VAR23;
VAR15 = VAR24;
goto VAR25;
}


}

VAR15 = VAR13;



VAR25:
VAR3->VAR16 = VAR8;
VAR3->VAR17 = VAR9;
*VAR4 = VAR12;
*VAR5 = VAR13;
VAR20:
*VAR6 = (char *)VAR10;
*VAR7 = VAR14;

return (VAR15);
}