static int
FUN1(dev_t VAR1, int VAR2, intptr_t VAR3, int VAR4, VAR5 *VAR6,
int *VAR7)
{
int VAR8 = FUN2(VAR1);
struct VAR9 *VAR10 = FUN3(VAR8);
gpio_87317_op_t VAR11;
uint8_t VAR12;

FUN4(VAR10->VAR13, "", VAR8, 0, 0, 0, 0);

if (VAR10 == NULL)
return (VAR14);


if (FUN5((VAR15)VAR3, (VAR15)&VAR11, sizeof (VAR16),
VAR4) != 0)
return (VAR17);


if ((VAR11.VAR18 != 0) ||
(VAR11.VAR19 != VAR20)) {
return (VAR21);
}


FUN6(&VAR10->VAR22);


VAR12 = FUN7(VAR10->VAR23, &VAR10->VAR24[VAR11.VAR19]);

switch (VAR2) {
case VAR25:
FUN4(VAR10->VAR13, "", VAR12, 0, 0,
0, 0);
VAR12 |= VAR11.VAR26;
FUN8(VAR10->VAR23, &VAR10->VAR24[VAR11.VAR19],
VAR12);
VAR12 = FUN7(VAR10->VAR23,
&VAR10->VAR24[VAR11.VAR19]);
FUN4(VAR10->VAR13, "", VAR12, 0, 0,
0, 0);
break;

case VAR27:
FUN4(VAR10->VAR13, "", VAR12, 0, 0,
0, 0);
VAR12 &= ~VAR11.VAR26;
FUN8(VAR10->VAR23, &VAR10->VAR24[VAR11.VAR19],
VAR12);
VAR12 = FUN7(VAR10->VAR23,
&VAR10->VAR24[VAR11.VAR19]);
FUN4(VAR10->VAR13, "", VAR12, 0, 0,
0, 0);
break;

case VAR28:
FUN4(VAR10->VAR13, "", 0, 0, 0, 0, 0);
VAR11.VAR26 = VAR12;
if (FUN9((VAR15)&VAR11, (VAR15)VAR3,
sizeof (VAR16), VAR4) != 0) {
FUN10(&VAR10->VAR22);
return (VAR17);
}
break;

case VAR29:
FUN4(VAR10->VAR13, "", 0, 0, 0, 0, 0);
FUN8(VAR10->VAR23, &VAR10->VAR24[VAR11.VAR19],
VAR11.VAR26);
break;

default:
FUN10(&VAR10->VAR22);
return (VAR21);
}

FUN10(&VAR10->VAR22);
return (0);
}