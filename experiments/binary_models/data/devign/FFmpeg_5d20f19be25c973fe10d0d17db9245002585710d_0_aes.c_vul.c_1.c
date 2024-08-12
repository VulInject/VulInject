int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10 = 0;
    uint8_t VAR11[8][4];
    int VAR12 = VAR5 >> 5;
    int VAR13 = VAR12 + 6;
    uint8_t VAR14[256];
    uint8_t VAR15[512];
    if (!VAR16[FUN2(VAR16) - 1][FUN2(VAR16[0]) - 1])
    {
        VAR8 = 1;
        for (VAR7 = 0; VAR7 < 255; VAR7++)
        {
            VAR15[VAR7] = VAR15[VAR7 + 255] = VAR8;
            VAR14[VAR8] = VAR7;
            VAR8 ^= VAR8 + VAR8;
            if (VAR8 > 255)
                VAR8 ^= 0x11B;
        }
        for (VAR7 = 0; VAR7 < 256; VAR7++)
        {
            VAR8 = VAR7 ? VAR15[255 - VAR14[VAR7]] : 0;
            VAR8 ^= (VAR8 << 1) ^ (VAR8 << 2) ^ (VAR8 << 3) ^ (VAR8 << 4);
            VAR8 = (VAR8 ^ (VAR8 >> 8) ^ 99) & 255;
            VAR17[VAR8] = VAR7;
            VAR18[VAR7] = VAR8;
        }
        FUN3(VAR19[0], (const int[4]){0xe, 0x9, 0xd, 0xb}, VAR14, VAR15, VAR17);
        FUN3(VAR16[0], (const int[4]){0x2, 0x1, 0x1, 0x3}, VAR14, VAR15, VAR18);
    }
    if (VAR5 != 128 && VAR5 != 192 && VAR5 != 256)
        return -1;
    VAR2->VAR13 = VAR13;
    memcpy(VAR11, VAR4, VAR12 * 4);
    for (VAR9 = 0; VAR9 < (VAR13 + 1) * 16;)
    {
        memcpy(VAR2->VAR20[0].VAR21 + VAR9, VAR11, VAR12 * 4);
        VAR9 += VAR12 * 4;
        for (VAR7 = 0; VAR7 < 4; VAR7++)
            VAR11[0][VAR7] ^= VAR18[VAR11[VAR12 - 1][(VAR7 + 1) & 3]];
        VAR11[0][0] ^= VAR22[VAR10++];
        for (VAR8 = 1; VAR8 < VAR12; VAR8++)
        {
            if (VAR12 != 8 || VAR8 != VAR12 >> 1)
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                    VAR11[VAR8][VAR7] ^= VAR11[VAR8 - 1][VAR7];
            else
                for (VAR7 = 0; VAR7 < 4; VAR7++)
                    VAR11[VAR8][VAR7] ^= VAR18[VAR11[VAR8 - 1][VAR7]];
        }
    }
    if (VAR6)
    {
        for (VAR7 = 1; VAR7 < VAR13; VAR7++)
        {
            av_aes_block VAR23[3];
            VAR23[2] = VAR2->VAR20[VAR7];
            FUN4(&VAR23[1], 0, VAR18);
            FUN5(VAR23, VAR19, 1, 3);
            VAR2->VAR20[VAR7] = VAR23[0];
        }
    }
    else
    {
        for (VAR7 = 0; VAR7 < (VAR13 + 1) >> 1; VAR7++)
        {
            FUN6(VAR24, VAR2->VAR20[VAR7], VAR2->VAR20[VAR13 - VAR7]);
        }
    }
    return 0;
}