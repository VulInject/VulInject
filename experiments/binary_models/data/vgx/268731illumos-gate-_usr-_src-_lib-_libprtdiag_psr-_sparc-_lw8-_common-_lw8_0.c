static int
FUN1(picl_nodehdl_t VAR1, VAR2 *VAR3)
{
picl_nodehdl_t	VAR4;
int		VAR5;


VAR5 = FUN2(VAR1, VAR6,
&VAR4, sizeof (VAR4));

if (VAR5 != VAR7)
VAR5 = FUN2(VAR1, VAR8,
&VAR4, sizeof (VAR4));

while (VAR5 == VAR9) {
VAR5 = FUN2(VAR1, VAR10,
&VAR1, sizeof (VAR1));
if (VAR5 != VAR7)
return (VAR5);

VAR5 = FUN2(VAR1, VAR6,
&VAR4, sizeof (VAR4));
if (VAR5 != VAR7)
VAR5 = FUN2(VAR1,
VAR8, &VAR4, sizeof (VAR4));
}

if (VAR5 == VAR7)
*VAR3 = VAR4;

return (VAR5);
}