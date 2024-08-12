int FUN1(struct VAR1 *VAR2, int VAR3,
u8 VAR4, int VAR5,
enum VAR6 *VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR2);
struct VAR10 *VAR11 = NULL;
unsigned long VAR12;
int VAR13 = -1;
struct mlx4_active_ports VAR14 = FUN3(VAR2, VAR3);
enum slave_port_state VAR15 =
FUN4(VAR2, VAR3, VAR4);

*VAR7 = VAR16;

if (VAR3 >= VAR2->VAR17 || VAR4 > VAR2->VAR18.VAR19 ||
VAR4 <= 0 || !FUN5(VAR4 - 1, VAR14.VAR20)) {
FUN6("",
VAR21, VAR3, VAR4);
return VAR13;
}

VAR11 = &VAR9->VAR22.VAR23.VAR24[VAR3];
FUN7(&VAR11->VAR25, VAR12);

switch (VAR15) {
case VAR26:
if (VAR27 == VAR5)
FUN8(VAR2, VAR3, VAR4,
VAR28);
break;
case VAR28:
if (VAR29 == VAR5)
FUN8(VAR2, VAR3, VAR4,
VAR26);
else if (VAR30 == VAR5) {
FUN8(VAR2, VAR3, VAR4,
VAR31);
*VAR7 = VAR32;
}
break;
case VAR31:
if (VAR29 == VAR5) {
FUN8(VAR2, VAR3, VAR4,
VAR26);
*VAR7 = VAR33;
} else if (VAR34 ==
VAR5) {
FUN8(VAR2, VAR3, VAR4,
VAR28);
*VAR7 = VAR33;
}
break;
default:
FUN6("",
VAR21, VAR3, VAR4);
goto VAR35;
}
VAR13 = FUN4(VAR2, VAR3, VAR4);

VAR35:
FUN9(&VAR11->VAR25, VAR12);
return VAR13;
}