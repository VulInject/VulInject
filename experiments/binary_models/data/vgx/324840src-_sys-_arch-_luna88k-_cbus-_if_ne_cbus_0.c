int
FUN1(struct VAR1 *VAR2, void *VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR3;
struct VAR7 *VAR8 = &VAR6->VAR9;
struct VAR10 *VAR11 = &VAR8->VAR12;
struct VAR13 *VAR14 = VAR4;
bus_space_tag_t VAR15 = &VAR16;
bus_space_handle_t VAR17;
bus_space_tag_t VAR18;
bus_space_handle_t VAR19;
struct VAR20 *VAR21 = VAR3;

if (strcmp(VAR14->VAR22, VAR21->VAR23->VAR24) != 0)
return (0);

FUN2(VAR15);

VAR14->VAR25 = VAR21->VAR26;
VAR14->VAR27    = VAR21->VAR28;


if (VAR14->VAR27 ==  -1)
return (0);
if (VAR14->VAR25 == -1)
return (0);


if ((VAR14->VAR25 & 0x1f) != 0)
return (0);

if (FUN3(VAR15, VAR14->VAR25, VAR29, 0, &VAR17))
return (0);

VAR18 = VAR15;
if (FUN4(VAR15, VAR17, VAR30,
VAR31, &VAR19))
goto VAR32;

VAR11->VAR33 = VAR15;
VAR11->VAR34 = VAR17;

VAR8->VAR35 = VAR18;
VAR8->VAR36 = VAR19;


VAR8->VAR37 = FUN5(VAR8);

if (VAR8->VAR37)
VAR14->VAR38 = VAR29;

VAR32:
FUN6(VAR15, VAR17, VAR29);
return (VAR8->VAR37);
}