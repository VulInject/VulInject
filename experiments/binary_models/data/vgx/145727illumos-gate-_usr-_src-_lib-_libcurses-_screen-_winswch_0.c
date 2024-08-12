int
FUN1(VAR1 *VAR2, chtype VAR3)
{
int	VAR4, VAR5;
char	VAR6[VAR7];
chtype	VAR8;
wchar_t	VAR9;
VAR8 = VAR3 & VAR10;
VAR9 = VAR3 & VAR11;


if ((VAR5 = FUN2(VAR6, VAR9 & VAR12)) < 0)
return (VAR13);


for (VAR4 = 0; VAR4 < VAR5; ++VAR4)
if (FUN3(VAR2, VAR8|(unsigned char)VAR6[VAR4]) == VAR13)
return (VAR13);
return (VAR14);
}