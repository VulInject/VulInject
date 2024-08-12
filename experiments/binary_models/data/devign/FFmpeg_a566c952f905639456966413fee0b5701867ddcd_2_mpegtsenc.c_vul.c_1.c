static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    unsigned int VAR6;
    unsigned char VAR7[VAR8];
    const unsigned char *VAR9;
    unsigned char *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR6 = FUN2(FUN3(FUN4(VAR15), -1, VAR4, VAR5 - 4));
    VAR4[VAR5 - 4] = (VAR6 >> 24) & 0xff;
    VAR4[VAR5 - 3] = (VAR6 >> 16) & 0xff;
    VAR4[VAR5 - 2] = (VAR6 >> 8) & 0xff;
    VAR4[VAR5 - 1] = VAR6 & 0xff;
    VAR9 = VAR4;
    while (VAR5 > 0)
    {
        VAR11 = VAR4 == VAR9;
        VAR10 = VAR7;
        *VAR10++ = 0x47;
        VAR12 = VAR2->VAR16 >> 8;
        if (VAR11)
            VAR12 |= 0x40;
        *VAR10++ = VAR12;
        *VAR10++ = VAR2->VAR16;
        VAR2->VAR17 = VAR2->VAR17 + 1 & 0xf;
        *VAR10++ = 0x10 | VAR2->VAR17;
        if (VAR11)
            *VAR10++ = 0;
        VAR13 = VAR8 - (VAR10 - VAR7);
        if (VAR13 > VAR5)
            VAR13 = VAR5;
        memcpy(VAR10, VAR9, VAR13);
        VAR10 += VAR13;
        VAR14 = VAR8 - (VAR10 - VAR7);
        if (VAR14 > 0)
            memset(VAR10, 0xff, VAR14);
        VAR2->FUN5(VAR2, VAR7);
        VAR9 += VAR13;
        VAR5 -= VAR13;