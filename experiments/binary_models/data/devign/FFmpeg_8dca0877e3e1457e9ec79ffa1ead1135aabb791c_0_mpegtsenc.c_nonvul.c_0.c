static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, VAR8 *VAR9, int VAR10)
{
    uint8_t VAR11[1024], *VAR12;
    unsigned int VAR13;
    unsigned int VAR14 = VAR3 == VAR15 ? 0xf000 : 0xb000;
    VAR13 = 3 + 5 + VAR10 + 4;
    if (VAR13 > 1024)
        return VAR16;
    VAR12 = VAR11;
    *VAR12++ = VAR3;
    FUN2(&VAR12, VAR14 | (VAR10 + 5 + 4));
    FUN2(&VAR12, VAR4);
    *VAR12++ = 0xc1 | (VAR5 << 1);
    *VAR12++ = VAR6;
    *VAR12++ = VAR7;
    memcpy(VAR12, VAR9, VAR10);
    FUN3(VAR2, VAR11, VAR13);
    return 0;
}