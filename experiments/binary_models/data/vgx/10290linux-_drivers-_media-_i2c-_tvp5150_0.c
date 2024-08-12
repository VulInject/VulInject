static VAR1 FUN1(struct VAR2 *VAR3)
{
int VAR4 = FUN2(VAR3, VAR5);

switch (VAR4 & 0x0F) {
case 0x01:
return VAR6;
case 0x03:
return VAR7;
case 0x05:
return VAR8;
case 0x07:
return VAR9 | VAR10;
case 0x09:
return VAR11;
case 0xb:
return VAR12;
default:
return VAR13;
}
}