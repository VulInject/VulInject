static VAR1
FUN1(struct VAR2 *VAR3, uint8_t VAR4, VAR5 *VAR6)
{
int VAR7;
int16_t VAR8;
uint8_t VAR9 = 12, VAR10 = 6;
uint16_t VAR11, VAR12, VAR13, VAR14;
uint32_t VAR15 = ((VAR5)(VAR4 & 0x1f)) << 27;
uint32_t VAR16 = 0x80000000, VAR17 = 0;
usbd_status VAR18;

if (VAR18 = FUN2(VAR3, VAR19, &VAR11, 0))
goto VAR20;
if (VAR18 = FUN2(VAR3, VAR21, &VAR12, 0))
goto VAR20;
if (VAR18 = FUN2(VAR3, VAR22, &VAR13, 0))
goto VAR20;
if (VAR18 = FUN3(VAR3, VAR21, VAR12 | 0xf, 0))
goto VAR20;
if (VAR18 = FUN3(VAR3, VAR22, VAR13 | 0xf, 0))
goto VAR20;
VAR11 &= ~0xf;
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR23, 0))
goto VAR20;
FUN4(5);
if (VAR18 = FUN3(VAR3, VAR19, VAR11, 0))
goto VAR20;
FUN4(5);

for (VAR7 = 0; VAR7 < (VAR10 / 2); VAR7++, VAR16 = VAR16 >> 1) {
VAR8 = ((VAR15 & VAR16) != 0) ? 1 : 0;

if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR24, 0))
goto VAR20;
FUN4(2);
VAR16 = VAR16 >> 1;
if (VAR7 == 2)
break;
VAR8 = ((VAR15 & VAR16) != 0) ? 1 : 0;
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11, 0))
goto VAR20;
FUN4(1);
}
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR25 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR8 | VAR11 | VAR25, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25, 0))
goto VAR20;
FUN4(2);

VAR16 = 0x800;
for (VAR7 = 0; VAR7 < VAR9; VAR7++, VAR16 = VAR16 >> 1) {
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25 | VAR24, 0))
goto VAR20;
FUN4(2);
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25 | VAR24, 0))
goto VAR20;
FUN4(2);

if (VAR18 = FUN2(VAR3, VAR26, &VAR14, 0))
goto VAR20;
VAR17 |= ((VAR14 & VAR24) ? VAR16 : 0);
if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR25, 0))
goto VAR20;
FUN4(2);
}

if (VAR18 = FUN3(VAR3, VAR19,
VAR11 | VAR23 |
VAR25, 0))
goto VAR20;
FUN4(2);

if (VAR18 = FUN3(VAR3, VAR21, VAR12, 0))
goto VAR20;
if (VAR18 = FUN3(VAR3, VAR22, VAR13, 0))
goto VAR20;
VAR18 = FUN3(VAR3, VAR19, 0x3a0, 0);

if (VAR6 != NULL)
*VAR6 = VAR17;
VAR20:
return (VAR18);
}