int
FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3 & ~(VAR4 | VAR5 | VAR6 | VAR7 |
VAR8)) {
return -1;
}

if (FUN2(VAR2->VAR3, VAR4)) {
struct VAR9 *VAR10 = VAR2->VAR11[VAR12];
if (VAR10 == NULL)
return -1;
switch (VAR10->VAR13) {
case VAR14:
if (VAR10->VAR15 != sizeof(struct VAR16))
return -1;
break;
case VAR17:
if (VAR10->VAR15 != sizeof(struct VAR18))
return -1;
break;
default:
return -1;
}
}

if (FUN2(VAR2->VAR3, VAR5)) {
struct VAR9 *VAR10 = VAR2->VAR11[VAR19];
if (VAR10 == NULL)
return -1;
switch (VAR10->VAR13) {
case VAR14:
if (VAR10->VAR15 != sizeof(struct VAR16))
return -1;
break;
case VAR17:
if (VAR10->VAR15 != sizeof(struct VAR18))
return -1;
break;
default:
return -1;
}
}

if (FUN2(VAR2->VAR3, VAR6)) {
struct VAR20 *VAR21 =
(struct VAR20 *)VAR2->VAR11[VAR22];
if (VAR21 == NULL)
return -1;
if (VAR21->VAR23 > sizeof(*VAR21))
return -1;
if (VAR21->VAR23 < FUN3(struct VAR20, VAR24))
return -1;
switch (VAR21->VAR25) {
case VAR14:
if ((VAR21->VAR23 - FUN3(struct VAR20,
VAR24)) % sizeof(struct VAR26) != 0)
return -1;
break;
case VAR17:
if ((VAR21->VAR23 - FUN3(struct VAR20,
VAR24)) % sizeof(struct VAR27) != 0)
return -1;
break;
default:
return -1;
}
}

if (FUN2(VAR2->VAR3, VAR7)) {
struct VAR28 *VAR29 =
(struct VAR28 *)VAR2->VAR11[VAR30];
if (VAR29 == NULL)
return -1;
if (VAR29->VAR23 > sizeof(*VAR29))
return -1;
if (VAR29->VAR23 <=
FUN3(struct VAR28, VAR31))
return -1;
}

if (FUN2(VAR2->VAR3, VAR8)) {
struct VAR32 *VAR33 =
(struct VAR32 *)VAR2->VAR11[VAR34];
if (VAR33 == NULL)
return -1;
if (VAR33->VAR23 > sizeof(*VAR33))
return -1;
if (VAR33->VAR23 <=
FUN3(struct VAR32, VAR35))
return -1;
}

return 0;
}