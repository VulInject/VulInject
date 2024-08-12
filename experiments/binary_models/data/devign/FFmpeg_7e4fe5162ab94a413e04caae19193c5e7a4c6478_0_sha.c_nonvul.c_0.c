static void FUN1(uint32_t VAR1[5], const uint8_t VAR2[64])
{
    uint32_t VAR3[80];
    unsigned int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR5 = VAR1[0];
    VAR6 = VAR1[1];
    VAR7 = VAR1[2];
    VAR8 = VAR1[3];
    VAR9 = VAR1[4];
    for (VAR4 = 0; VAR4 < 80; VAR4++)
    {
        int VAR10;
        if (VAR4 < 16)
            VAR10 = FUN2(VAR2 + 4 * VAR4);
        else
            VAR10 = FUN3(VAR3[VAR4 - 3] ^ VAR3[VAR4 - 8] ^ VAR3[VAR4 - 14] ^ VAR3[VAR4 - 16], 1);
        VAR3[VAR4] = VAR10;
        VAR10 += VAR9 + FUN3(VAR5, 5);
        if (VAR4 < 40)
        {
            if (VAR4 < 20)
                VAR10 += ((VAR6 & (VAR7 ^ VAR8)) ^ VAR8) + 0x5A827999;
            else
                VAR10 += (VAR6 ^ VAR7 ^ VAR8) + 0x6ED9EBA1;
        }
        else
        {
            if (VAR4 < 60)
                VAR10 += (((VAR6 | VAR7) & VAR8) | (VAR6 & VAR7)) + 0x8F1BBCDC;
            else
                VAR10 += (VAR6 ^ VAR7 ^ VAR8) + 0xCA62C1D6;
        }
        VAR9 = VAR8;
        VAR8 = VAR7;
        VAR7 = FUN3(VAR6, 30);
        VAR6 = VAR5;
        VAR5 = VAR10;
    }
    FUN4(VAR5, VAR6, VAR7, VAR8, VAR9, 0 + VAR4);
    FUN4(VAR9, VAR5, VAR6, VAR7, VAR8, 1 + VAR4);
    FUN4(VAR8, VAR9, VAR5, VAR6, VAR7, 2 + VAR4);
    FUN4(VAR7, VAR8, VAR9, VAR5, VAR6, 3 + VAR4);
    FUN4(VAR6, VAR7, VAR8, VAR9, VAR5, 4 + VAR4);
    VAR4 += 5 VAR4 = 0;
    VAR11;
    VAR11;
    VAR11;
    FUN4(VAR5, VAR6, VAR7, VAR8, VAR9, 15);
    FUN5(VAR9, VAR5, VAR6, VAR7, VAR8, 16);
    FUN5(VAR8, VAR9, VAR5, VAR6, VAR7, 17);
    FUN5(VAR7, VAR8, VAR9, VAR5, VAR6, 18);
    FUN5(VAR6, VAR7, VAR8, VAR9, VAR5, 19);
    FUN6(VAR5, VAR6, VAR7, VAR8, VAR9, 0 + VAR4);
    FUN6(VAR9, VAR5, VAR6, VAR7, VAR8, 1 + VAR4);
    FUN6(VAR8, VAR9, VAR5, VAR6, VAR7, 2 + VAR4);
    FUN6(VAR7, VAR8, VAR9, VAR5, VAR6, 3 + VAR4);
    FUN6(VAR6, VAR7, VAR8, VAR9, VAR5, 4 + VAR4);
    VAR4 += 5 VAR4 = 20;
    VAR12;
    VAR12;
    VAR12;
    VAR12;
    FUN7(VAR5, VAR6, VAR7, VAR8, VAR9, 0 + VAR4);
    FUN7(VAR9, VAR5, VAR6, VAR7, VAR8, 1 + VAR4);
    FUN7(VAR8, VAR9, VAR5, VAR6, VAR7, 2 + VAR4);
    FUN7(VAR7, VAR8, VAR9, VAR5, VAR6, 3 + VAR4);
    FUN7(VAR6, VAR7, VAR8, VAR9, VAR5, 4 + VAR4);
    VAR4 += 5 VAR13;
    VAR13;
    VAR13;
    VAR13;
    FUN8(VAR5, VAR6, VAR7, VAR8, VAR9, 0 + VAR4);
    FUN8(VAR9, VAR5, VAR6, VAR7, VAR8, 1 + VAR4);
    FUN8(VAR8, VAR9, VAR5, VAR6, VAR7, 2 + VAR4);
    FUN8(VAR7, VAR8, VAR9, VAR5, VAR6, 3 + VAR4);
    FUN8(VAR6, VAR7, VAR8, VAR9, VAR5, 4 + VAR4);
    VAR4 += 5 VAR14;
    VAR14;
    VAR14;
    VAR14;
    VAR1[0] += VAR5;
    VAR1[1] += VAR6;
    VAR1[2] += VAR7;
    VAR1[3] += VAR8;
    VAR1[4] += VAR9;
}