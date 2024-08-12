int
FUN1(struct VAR1 *VAR2, void *VAR3, void *VAR4)
{
bus_space_tag_t VAR5;
bus_addr_t VAR6;
bus_space_handle_t VAR7;
struct VAR8 *VAR9 = VAR4;
int VAR10, VAR11, VAR12, VAR13;

VAR5 = VAR9->VAR14;
VAR6 = VAR9->VAR15[0].VAR16;

if (FUN2(VAR5, VAR6, 8, 0, &VAR7)) {
FUN3(("", VAR17));
return (0);
}


FUN4(VAR5, VAR7, VAR18, VAR19);
VAR10 = FUN5(VAR5, VAR7, VAR20);
FUN4(VAR5, VAR7, VAR18, VAR21);
VAR11 = FUN5(VAR5, VAR7, VAR20);
if (((VAR10 & 0x80) && VAR11 == (VAR22 >> 8)) ||
(!(VAR10 & 0x80) && VAR11 == (VAR22 & 0xff)))
goto VAR23;


FUN4(VAR5, VAR7, VAR18, 0x58);
if ((VAR11 = FUN5(VAR5, VAR7, VAR20)) == 0x90)
goto VAR24;


FUN4(VAR5, VAR7, VAR18, VAR25);
VAR13 = FUN5(VAR5, VAR7, VAR20);
if ((VAR13 & 0xfc) == 0x2c) {
FUN4(VAR5, VAR7, VAR18, VAR26);
VAR12 = FUN5(VAR5, VAR7, VAR20);

switch (VAR12 & VAR27) {
case VAR28:
case VAR29:
case VAR30:
case VAR31:
goto VAR23;
}
}

VAR24:
FUN6(VAR5, VAR7, 8);

return (0);

VAR23:
FUN6(VAR5, VAR7, 8);

VAR9->VAR32 = 1;
VAR9->VAR15[0].VAR33 = 8;

VAR9->VAR34 = 0;
VAR9->VAR35 = 0;
VAR9->VAR36 = 0;

return (1);
}