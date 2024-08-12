static int
FUN1(VAR1 *VAR2, uint16_t VAR3, VAR4 *VAR5,
uint16_t VAR6, uint8_t VAR7)
{
VAR8 *VAR9;
usb_ctrl_setup_t VAR10;

usb_cb_flags_t	VAR11;
usb_cr_t	VAR12;
uint8_t		VAR13 = 0;


if ((VAR9 = FUN2(VAR6, VAR14)) == NULL) {

return (VAR15);
}

bcopy(VAR5, VAR9->VAR16, VAR6);

VAR10.VAR17 = VAR18;


VAR10.VAR7 = VAR7;
VAR10.VAR19 = VAR3;
VAR10.VAR20 = 0;
VAR10.VAR21 = VAR6;
VAR10.VAR22 = 0;

while (FUN3(VAR2->VAR23, &VAR10, &VAR9,
&VAR12, &VAR11, 0) != VAR24) {


if (++VAR13 > 3) {
if (VAR9) {
FUN4(VAR9);
}

return (VAR15);
}
}

if (VAR9) {
FUN4(VAR9);
}

return (VAR24);
}