unsigned short FUN1(struct VAR1 * VAR2, unsigned int VAR3)
{
VAR3 >>= 3;
if (VAR3 < 50)
VAR3 = 50;
if (VAR3 & 0xf8000000) {
VAR3 = ~0xf8000000;
FUN2(VAR4 "", VAR3);
}
return ((VAR3 << 9) + (VAR2->VAR5.VAR6 >> 1)) / VAR2->VAR5.VAR6;
}