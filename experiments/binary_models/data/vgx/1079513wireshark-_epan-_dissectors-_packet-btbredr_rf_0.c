static VAR1
FUN1(guint8 VAR2, guint32 VAR3)
{
guint8   VAR4;
guint16  VAR5;
guint8   VAR6;
gint8    VAR7;

VAR4 = VAR3 & 0xFF;
VAR5 = (VAR3 >> 8) & 0x3F;

VAR6 = VAR2;

for (VAR7 = 9; VAR7 >= 0; VAR7 -= 1) {
if (VAR6 & 0x80)
VAR6 ^= 0x65;

VAR6 = (VAR6 << 1) | (((VAR6 >> 7) ^ (VAR5 >> VAR7)) & 0x01);
}

VAR6 = FUN2(VAR6);

return VAR6 == VAR4;
}