static void FUN1(void *VAR1, unsigned long VAR2, unsigned long VAR3, int VAR4)
{
    unsigned int VAR5, VAR6;
    VAR7 *VAR8;
    VAR5 = (VAR2 << 16) | (VAR3 & 0xffff);
    VAR6 = ((VAR2 >> 16) & 0xff) | (VAR2 & 0xff000000) | (VAR3 & 0x000f0000);
    VAR6 |= VAR4;
    VAR8 = VAR1;
    VAR8[0] = FUN2(VAR5);
    VAR8[1] = FUN2(VAR6);
}