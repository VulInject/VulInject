static VAR1 *
FUN1(int VAR2, double VAR3)
{
Size		VAR4;
VAR1 *VAR5;

int			VAR6;			
int			VAR7;			

double		VAR8;				

FUN2(VAR2 > 0);
FUN2((VAR3 >= VAR9) &&
(VAR3 < VAR10));


VAR6 = FUN3(-(VAR2 * FUN4(VAR3)) / FUN5(FUN4(2.0), 2));


VAR7 = ((VAR6 + 7) / 8);
VAR6 = VAR7 * 8;


if (VAR7 > VAR11)
FUN6(VAR12, "", VAR7,
VAR11);


VAR8 = FUN4(2.0) * VAR6 / VAR2;
VAR8 = (VAR8 - FUN7(VAR8) >= 0.5) ? FUN3(VAR8) : FUN7(VAR8);


VAR4 = FUN8(VAR1, VAR13) + VAR7;

VAR5 = (VAR1 *) FUN9(VAR4);

VAR5->VAR14 = 0;
VAR5->VAR15 = (int) VAR8;
VAR5->VAR6 = VAR6;

FUN10(VAR5, VAR4);

return VAR5;
}