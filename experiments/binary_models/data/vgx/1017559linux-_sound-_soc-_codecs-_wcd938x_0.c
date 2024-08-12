static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
u8 VAR5 = (VAR4 ? 0xF0 : 0x0F);
u8 VAR6 = 0;

switch (VAR3) {
case VAR7:
VAR6 = (VAR4 ? 0x60 : 0x06);
break;
case VAR8:
VAR6 = (VAR4 ? 0x50 : 0x05);
break;
case VAR9:
VAR6 = (VAR4 ? 0x30 : 0x03);
break;
case VAR10:
VAR6 = (VAR4 ? 0x10 : 0x01);
break;
case VAR11:
default:
VAR6 = 0x00;
break;
}
FUN2(VAR2, VAR12,
VAR5, VAR6);

return 0;
}