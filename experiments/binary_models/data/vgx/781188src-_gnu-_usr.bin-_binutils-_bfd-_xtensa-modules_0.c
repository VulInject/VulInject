FUN1 (xtensa_insnbuf VAR1, uint32 VAR2)
{
VAR1[0] = (VAR1[0] & 0xfffc0000) | (VAR2 & 0x3ffff);
}