int
FUN1(struct VAR1 *VAR2, bus_space_tag_t VAR3,
bus_space_handle_t VAR4)
{
struct VAR5 *VAR6;
u_int8_t VAR7;
int VAR8;

if ((VAR8 = FUN2(VAR2, VAR3, VAR4, VAR9)) == -1)
return (-1);

VAR6 = VAR2->VAR10;

VAR6->VAR11 = FUN3(VAR3, VAR4, VAR12);

if (VAR8 == VAR13) {
if ((VAR2->VAR14 & VAR15) == 0)
FUN4(VAR3, VAR4, VAR12,
VAR16);
else
FUN4(VAR3, VAR4, VAR12,
VAR17);

return (FUN2(VAR2, VAR3, VAR4, VAR18));

} else if (VAR8 == VAR19) {
VAR7 = FUN3(VAR3, VAR4, VAR12);

if ((VAR2->VAR14 & VAR15) != 0)
switch (FUN2(VAR2, VAR3, VAR4, VAR20)) {
case -1:
return (-1);
case VAR13:
FUN4(VAR3, VAR4, VAR12,
VAR17);
return (FUN2(VAR2, VAR3, VAR4, VAR18));
default:
FUN5(VAR2);
return (-1);
}

if (VAR7 == VAR21) {
if ((VAR6->VAR11
& (VAR22 | VAR23)) == VAR22) {
FUN5(VAR2);
return (-1);
}
VAR2->VAR24 |= VAR25;
FUN4(VAR3, VAR4, VAR26, VAR27);
return (FUN2(VAR2, VAR3, VAR4, VAR20));
}

if ((VAR7 == VAR28)
|| (VAR7 == VAR29)) {
if ((VAR6->VAR11
& (VAR22 | VAR23)) == VAR22)
return (FUN2(VAR2, VAR3, VAR4, VAR20));
}
}

FUN5(VAR2);
return (-1);
}