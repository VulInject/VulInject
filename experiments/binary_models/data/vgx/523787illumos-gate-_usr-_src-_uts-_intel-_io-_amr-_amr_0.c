static int
FUN1(VAR1  *VAR2, struct VAR3 *VAR4)
{
VAR4->VAR5 = FUN2(VAR2, VAR6);


VAR4->VAR5->VAR7	= VAR4;
VAR4->VAR5->VAR8		= VAR9;
VAR4->VAR5->VAR10		= VAR11;
VAR4->VAR5->VAR12		= VAR13;
VAR4->VAR5->VAR14		= VAR15;
VAR4->VAR5->VAR16		= VAR17;
VAR4->VAR5->VAR18		= VAR19;
VAR4->VAR5->VAR20		= VAR21;
VAR4->VAR5->VAR22	= VAR23;
VAR4->VAR5->VAR24		= VAR25;
VAR4->VAR5->VAR26		= VAR27;
VAR4->VAR5->VAR28		= NULL;
VAR4->VAR5->VAR29		= NULL;
VAR4->VAR5->VAR30		= NULL;
VAR4->VAR5->VAR31		= NULL;
VAR4->VAR5->VAR32		= NULL;

if (FUN3(VAR2, &VAR33, VAR4->VAR5,
VAR34) != VAR35) {
FUN4(VAR4->VAR5);
VAR4->VAR5 = NULL;
return (VAR36);
} else {
return (VAR35);
}
}