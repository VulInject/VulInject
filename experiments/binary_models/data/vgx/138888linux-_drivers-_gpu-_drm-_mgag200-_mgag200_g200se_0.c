struct VAR1 *FUN1(struct VAR2 *VAR3, const struct VAR4 *VAR5,
enum mga_type VAR6)
{
struct VAR7 *VAR8;
const struct VAR9 *VAR10;
const struct VAR11 *VAR12;
struct VAR1 *VAR13;
struct VAR14 *VAR15;
resource_size_t VAR16;
int VAR17;

VAR8 = FUN2(&VAR3->VAR15, VAR5, struct VAR7, VAR18.VAR18);
if (FUN3(VAR8))
return FUN4(VAR8);
VAR13 = &VAR8->VAR18;
VAR15 = &VAR13->VAR18;

FUN5(VAR3, VAR15);

VAR17 = FUN6(VAR3);
if (VAR17)
return FUN7(VAR17);

VAR17 = FUN8(VAR13);
if (VAR17)
return FUN7(VAR17);

VAR17 = FUN9(VAR8);
if (VAR17)
return FUN7(VAR17);

switch (VAR6) {
case VAR19:
if (VAR8->VAR20 >= 0x03)
VAR10 = &VAR21;
else if (VAR8->VAR20 >= 0x02)
VAR10 = &VAR22;
else
VAR10 = &VAR23;
break;
case VAR24:
if (VAR8->VAR20 >= 0x03)
VAR10 = &VAR25;
else if (VAR8->VAR20 >= 0x02)
VAR10 = &VAR26;
else
VAR10 = &VAR27;
break;
default:
return FUN7(-VAR28);
}

if (VAR8->VAR20 >= 0x04)
VAR12 = &VAR29;
else
VAR12 = &VAR30;

VAR17 = FUN10(VAR13, VAR10, VAR12);
if (VAR17)
return FUN7(VAR17);

FUN11(VAR8);

VAR16 = FUN12(VAR13);

VAR17 = FUN13(VAR13, VAR16);
if (VAR17)
return FUN7(VAR17);

VAR17 = FUN14(VAR13);
if (VAR17)
return FUN7(VAR17);

FUN15(VAR15);

return VAR13;
}