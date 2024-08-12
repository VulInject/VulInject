static int	FUN1(VAR1 *, int, int *,
VAR2, VAR3 *);




switch ((VAR4)) {		\
case VAR5:		\
case VAR6:		\
(VAR7) = VAR8;	\
break;			\
case VAR9:		\
case VAR10:		\
case VAR11:		\
case VAR12:		\
(VAR7) = VAR13;	\
break;			\
case VAR14:		\
case VAR15:		\
case VAR16:		\
(VAR7) = 0;		\
break;			\
default:			\
(VAR7) = VAR17;		\
}				\
}


(((VAR18)->VAR19.VAR20 == VAR21) ?		\
((FUN2((VAR18)) == VAR22 ||		\
FUN2((VAR18)) == (VAR23)->VAR24) &&	\
(FUN3((VAR18)) == VAR22 ||		\
FUN3((VAR18)) == (VAR23)->VAR25) &&	\
(FUN4((VAR18)) == 0 ||				\
FUN4((VAR18)) == (VAR23)->VAR26) &&	\
(FUN5((VAR18)) == 0 ||				\
FUN5((VAR18)) == (VAR23)->VAR27) &&	\
(VAR18)->VAR28 <= (VAR29)->VAR30 &&			\
(VAR18)->VAR31 >= (VAR29)->VAR30) :			\
((FUN6(&FUN7((VAR18))) ||	\
FUN8(&FUN7((VAR18)),		\
&(VAR23)->VAR32)) &&				\
(FUN6(&FUN9((VAR18))) ||	\
FUN8(&FUN9((VAR18)),		\
&(VAR23)->VAR33)) &&				\
(FUN10((VAR18)) == 0 ||				\
FUN10((VAR18)) == (VAR23)->VAR26) &&	\
(FUN11((VAR18)) == 0 ||				\
FUN11((VAR18)) == (VAR23)->VAR27) &&	\
(VAR18)->VAR28 <= (VAR29)->VAR30 &&			\
(VAR18)->VAR31 >= (VAR29)->VAR30))

(((VAR18)->VAR34 == VAR35 ||			\
(VAR18)->VAR34 == (VAR23)->VAR36) ?		\
FUN12(VAR18, VAR23, VAR29) : 0)


static VAR37 *
FUN13(VAR1 *VAR18, VAR38 *VAR39)
{
VAR37 *VAR40;
VAR1 *VAR41;

VAR40 = FUN14(sizeof (VAR42) + sizeof (*VAR18), VAR43);
if (VAR40 == NULL)
return (NULL);

*((VAR42 *)VAR40->VAR44) = VAR45;
VAR41 = (VAR1 *)((VAR46 *)VAR40->VAR44 +
sizeof (VAR42));

VAR41->VAR28 = VAR18->VAR28;
VAR41->VAR31 = VAR18->VAR31;
VAR41->VAR34 = VAR18->VAR34;

if (VAR18->VAR19.VAR20 == VAR21) {
VAR41->VAR19.VAR20 = VAR21;
VAR41->VAR47.VAR20 = VAR21;
FUN2(VAR41) = VAR39->VAR48->VAR24;
FUN3(VAR41) = VAR39->VAR48->VAR25;
FUN4(VAR41) = VAR39->VAR48->VAR26;
FUN5(VAR41) = VAR39->VAR48->VAR27;
} else {
VAR41->VAR19.VAR20 = VAR49;
VAR41->VAR47.VAR20 = VAR49;
FUN7(VAR41) = VAR39->VAR48->VAR32;
FUN9(VAR41) = VAR39->VAR48->VAR33;
FUN10(VAR41) = VAR39->VAR48->VAR26;
FUN11(VAR41) = VAR39->VAR48->VAR27;
}
VAR40->VAR50 = (VAR46 *)VAR40->VAR44 + sizeof (VAR42) + sizeof (*VAR18);
return (VAR40);
}