void
FUN1(struct VAR1 *VAR2)
{
struct VAR3	*VAR4;
struct VAR5		*VAR6 = NULL;
struct VAR7	*VAR8;
int			VAR9;

VAR4 = VAR2->VAR10;

if (!VAR4->VAR11)
return;

if (FUN2(&VAR2->VAR12))
return;

VAR9 = VAR4->VAR13.VAR14;

while(VAR4->VAR13.VAR15[VAR9].VAR16 == NULL) {

if (FUN3(VAR9, VAR17) ==
VAR4->VAR13.VAR18) {
FUN4(&VAR2->VAR12);
break;
}

VAR6 = FUN5(&VAR2->VAR12);
if (VAR6 == NULL)
break;

VAR8 = &VAR4->VAR13.VAR15[VAR9];

if (FUN6(VAR4, VAR8, VAR6) != 0)
break;

VAR8->VAR19->VAR20 = 0;

if (VAR4->VAR21 == NULL) {
VAR8->VAR19->VAR22 = VAR23 | 1;

FUN7(VAR4, VAR24, VAR25);
FUN8(VAR4);

FUN9(VAR4, VAR26,
FUN10((VAR27)&VAR4->VAR28->VAR29[0]));


FUN11(VAR4, VAR30, 64);

FUN7(VAR4, VAR24, VAR31);
FUN8(VAR4);
}else{
VAR8->VAR19->VAR22 = VAR23 | 1;
VAR4->VAR21->VAR19->VAR20
= VAR8->VAR32;
}

VAR4->VAR21 = VAR8;


if (VAR2->VAR33)
FUN12(VAR2->VAR33, VAR8->VAR16,
VAR34);

FUN13(VAR9, VAR17);
VAR2->VAR35 = 5;
}
VAR4->VAR13.VAR14 = VAR9;
}