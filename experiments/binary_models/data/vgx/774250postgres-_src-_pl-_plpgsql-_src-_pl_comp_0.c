VAR1 *
FUN1(VAR2 *VAR3, const char *VAR4)
{
VAR1 *VAR5;
int			VAR6;


VAR6 = VAR3->VAR7;
while (VAR6 >= 0)
{
VAR1 *VAR8 = (VAR1 *) VAR9[VAR6];

FUN2(VAR8->VAR10 == VAR11 &&
VAR8->VAR12 == VAR3->VAR13);
if (strcmp(VAR8->VAR14, VAR4) == 0)
return VAR8;
VAR6 = VAR8->VAR15;
}


VAR5 = FUN3(sizeof(VAR1));
VAR5->VAR10 = VAR11;
VAR5->VAR14 = FUN4(VAR4);
VAR5->VAR12 = VAR3->VAR13;
VAR5->VAR16 = VAR17;

FUN5((VAR18 *) VAR5);


VAR5->VAR15 = VAR3->VAR7;
VAR3->VAR7 = VAR5->VAR13;

return VAR5;
}