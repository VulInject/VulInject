int
FUN1(VAR1 *VAR2, tavor_ahhdl_t VAR3,
VAR4 *VAR5)
{
tavor_hw_udav_t		VAR6;
VAR7		*VAR8;
uint64_t		VAR9, VAR10;
uint32_t		VAR11, VAR12, VAR13;
int			VAR14, VAR15;


if (!FUN2(VAR2, VAR5->VAR16)) {
return (VAR17);
}

FUN3(&VAR3->VAR18);


VAR8 = VAR3->VAR19;


FUN4(&VAR6, sizeof (VAR20));
VAR15 = FUN5(VAR2, VAR5,
(VAR21 *)&VAR6, VAR22, NULL);
if (VAR15 != VAR23) {
FUN6(&VAR3->VAR18);
return (VAR15);
}
VAR3->VAR24 = VAR5->VAR25.VAR26;
VAR3->VAR27 = VAR5->VAR28;


VAR11 = FUN7(VAR8->VAR29, (VAR30 *)VAR8->VAR31);
VAR11 = VAR11 & 0xFFFFFF;
FUN8(VAR8->VAR29, (VAR30 *)VAR8->VAR31, 0);


FUN9(VAR3, VAR8->VAR31, VAR32);


VAR12 = sizeof (VAR20) >> 3;
for (VAR14 = 0; VAR14 < VAR12; VAR14++) {
VAR9 = ((VAR33 *)&VAR6)[VAR14];
VAR10 = FUN10(VAR8->VAR29,
((VAR33 *)VAR8->VAR31 + VAR14));


if (VAR14 == 0) {
VAR10 = VAR10 & VAR34;
VAR13 = VAR9 >> 56;
} else if (VAR14 == 1) {
VAR10 = VAR10 & VAR35;
} else {
VAR10 = 0;
}


VAR9 = VAR10 | VAR9;
FUN11(VAR8->VAR29, ((VAR33 *)VAR8->VAR31 + VAR14),
VAR9);
}


FUN9(VAR3, VAR8->VAR31, VAR32);


VAR11 = ((VAR13 << 24) | VAR11);
FUN8(VAR8->VAR29, (VAR30 *)VAR8->VAR31, VAR11);


FUN9(VAR3, VAR8->VAR31, VAR32);

FUN6(&VAR3->VAR18);
return (VAR23);
}