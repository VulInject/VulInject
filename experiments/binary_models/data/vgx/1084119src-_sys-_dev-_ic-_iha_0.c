void
FUN1(struct VAR1 *VAR2, bus_space_tag_t VAR3, bus_space_handle_t VAR4,
struct VAR5 *VAR6, u_int8_t VAR7)
{
int VAR8;

switch (VAR7) {
case VAR9:
FUN2(VAR3, VAR4, VAR10, VAR6->VAR11);
FUN3(VAR3, VAR4, VAR10,
VAR6->VAR12, VAR6->VAR13);

VAR6->VAR14 = 2;
break;

case VAR15:
VAR6->VAR14 = 1;
break;

case VAR16:
FUN2(VAR3, VAR4, VAR10, VAR6->VAR11);
FUN2(VAR3, VAR4, VAR10, VAR6->VAR17);
FUN2(VAR3, VAR4, VAR10, VAR6->VAR18);

FUN3(VAR3, VAR4, VAR10, VAR6->VAR12,
VAR6->VAR13);

VAR6->VAR14 = 2;
break;

default:
FUN4(VAR6->VAR19->VAR20);
FUN5("",
VAR7);
return;
}

VAR8 = FUN6();
FUN7(&VAR2->VAR21, VAR6, VAR22);
FUN8(VAR8);

VAR6->VAR23 = VAR24;

VAR2->VAR25 = VAR6;

FUN2(VAR3, VAR4, VAR26, VAR7);
}