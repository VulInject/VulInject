static void
FUN1(void *VAR1, VAR2 *VAR3, void *VAR4, VAR5 *VAR6)
{
VAR7			*VAR8 = (VAR7 *)VAR1;
VAR9			*VAR10 = VAR8->VAR11;
VAR12			*VAR13 = VAR8->VAR14;
VAR15		*VAR16 = VAR10->VAR17;
struct VAR18	*VAR19;
struct sock_proto_props VAR20;


FUN2(!FUN3(VAR8));


FUN2(VAR3->VAR21 == NULL);


FUN4(VAR10->VAR22->VAR23);

VAR10->VAR24 = VAR25;

if (VAR10->VAR26 <= VAR27 || VAR10->VAR28) {

FUN2(VAR10->VAR29 == NULL);
if (VAR10->VAR30 || VAR10->VAR31) {
struct	VAR32	*VAR33;

(void) FUN5(VAR13, VAR34, VAR35);

FUN2(FUN6(VAR3) == 1);
FUN2(FUN7(VAR3) >=
sizeof (struct VAR32));

FUN8(VAR3) = VAR36;
((union VAR37 *)VAR3->VAR38)->VAR39 =
VAR40;
VAR33 = (struct VAR32 *)VAR3->VAR38;
if (VAR10->VAR30) {
VAR33->VAR41 = VAR42;
VAR33->VAR43 = 0;
} else {
VAR33->VAR41 = VAR44;
VAR33->VAR43 =
VAR10->VAR45;
}
VAR3->VAR46 = VAR3->VAR38 +
sizeof (struct VAR32);
FUN9(VAR13, VAR3);
}
VAR10->VAR47 = VAR25;
return;
}


FUN10(VAR10, &VAR20);

FUN2(FUN6(VAR3) == 1);
FUN2(FUN7(VAR3) >= sizeof (struct VAR18));

FUN8(VAR3) = VAR48;
VAR19 = (struct VAR18 *)VAR3->VAR38;
VAR3->VAR46 = VAR3->VAR38 + sizeof (struct VAR18);
VAR19 = (struct VAR18 *)VAR3->VAR38;
FUN2(VAR20.VAR49 & (VAR50|VAR51|VAR52));
VAR19->VAR53 = VAR50 | VAR51 | VAR52;
VAR19->VAR54 = VAR20.VAR55;
VAR19->VAR56 = VAR20.VAR57;
VAR19->VAR58 = VAR20.VAR59;


FUN9(VAR13, VAR3);


if (VAR10->VAR60 != NULL) {


if (!VAR10->VAR61 && FUN11(VAR13)) {
VAR10->VAR62 = VAR8->VAR63;
if (VAR10->VAR26 >= VAR64 &&
FUN12(VAR10) == VAR65) {
FUN13(NULL,
VAR10, (VAR10->VAR66 == 0) ?
VAR10->VAR67 : VAR10->VAR68,
VAR10->VAR69, VAR70);
}
}

(void) FUN14(VAR10);


if (VAR10->VAR61) {
VAR9 *VAR71 = VAR10->VAR72;

FUN2(VAR71 != NULL);
FUN2(VAR71->VAR61);

FUN15(&VAR71->VAR73);
if (VAR71->VAR74) {
FUN16(VAR71);
FUN17(VAR16, VAR75);
}
FUN18(&VAR71->VAR73);
}
}
FUN2(VAR10->VAR60 == NULL || VAR10->VAR76);
if (VAR10->VAR77 && !VAR10->VAR78) {
VAR10->VAR78 = VAR79;
VAR3 = VAR10->VAR80;
VAR10->VAR80 = NULL;
FUN9(VAR13, VAR3);
}
VAR10->VAR47 = VAR25;

if (VAR8->VAR81) {
VAR10->VAR82 = 0;
VAR10->VAR83 = FUN19(VAR10, VAR84,
VAR10->VAR85);
}


FUN2((VAR8->VAR86 != NULL && VAR8->VAR87 >= 4) ||
(VAR8->VAR86 == NULL && VAR8->VAR87 >= 3));
}