int FUN1(const unsigned char *VAR1, const int VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = 0;
    u32 VAR8;
    if (!VAR1 || !VAR4)
        return -1;
    if (VAR2 != 128 && VAR2 != 192 && VAR2 != 256)
        return -2;
    VAR6 = VAR4->VAR9;
    if (VAR2 == 128)
        VAR4->VAR10 = 10;
    else if (VAR2 == 192)
        VAR4->VAR10 = 12;
    else
        VAR4->VAR10 = 14;
    VAR6[0] = FUN2(VAR1);
    VAR6[1] = FUN2(VAR1 + 4);
    VAR6[2] = FUN2(VAR1 + 8);
    VAR6[3] = FUN2(VAR1 + 12);
    if (VAR2 == 128)
    {
        while (1)
        {
            VAR8 = VAR6[3];
            VAR6[4] = VAR6[0] ^ (VAR11[(VAR8 >> 16) & 0xff] & 0xff000000) ^ (VAR11[(VAR8 >> 8) & 0xff] & 0x00ff0000) ^ (VAR11[(VAR8)&0xff] & 0x0000ff00) ^ (VAR11[(VAR8 >> 24)] & 0x000000ff) ^ VAR12[VAR7];
            VAR6[5] = VAR6[1] ^ VAR6[4];
            VAR6[6] = VAR6[2] ^ VAR6[5];
            VAR6[7] = VAR6[3] ^ VAR6[6];
            if (++VAR7 == 10)
            {
                return 0;
            }
            VAR6 += 4;
        }
    }
    VAR6[4] = FUN2(VAR1 + 16);
    VAR6[5] = FUN2(VAR1 + 20);
    if (VAR2 == 192)
    {
        while (1)
        {
            VAR8 = VAR6[5];
            VAR6[6] = VAR6[0] ^ (VAR11[(VAR8 >> 16) & 0xff] & 0xff000000) ^ (VAR11[(VAR8 >> 8) & 0xff] & 0x00ff0000) ^ (VAR11[(VAR8)&0xff] & 0x0000ff00) ^ (VAR11[(VAR8 >> 24)] & 0x000000ff) ^ VAR12[VAR7];
            VAR6[7] = VAR6[1] ^ VAR6[6];
            VAR6[8] = VAR6[2] ^ VAR6[7];
            VAR6[9] = VAR6[3] ^ VAR6[8];
            if (++VAR7 == 8)
            {
                return 0;
            }
            VAR6[10] = VAR6[4] ^ VAR6[9];
            VAR6[11] = VAR6[5] ^ VAR6[10];
            VAR6 += 6;
        }
    }
    VAR6[6] = FUN2(VAR1 + 24);
    VAR6[7] = FUN2(VAR1 + 28);
    if (VAR2 == 256)
    {
        while (1)
        {
            VAR8 = VAR6[7];
            VAR6[8] = VAR6[0] ^ (VAR11[(VAR8 >> 16) & 0xff] & 0xff000000) ^ (VAR11[(VAR8 >> 8) & 0xff] & 0x00ff0000) ^ (VAR11[(VAR8)&0xff] & 0x0000ff00) ^ (VAR11[(VAR8 >> 24)] & 0x000000ff) ^ VAR12[VAR7];
            VAR6[9] = VAR6[1] ^ VAR6[8];
            VAR6[10] = VAR6[2] ^ VAR6[9];
            VAR6[11] = VAR6[3] ^ VAR6[10];
            if (++VAR7 == 7)
            {
                return 0;
            }
            VAR8 = VAR6[11];
            VAR6[12] = VAR6[4] ^ (VAR11[(VAR8 >> 24)] & 0xff000000) ^ (VAR11[(VAR8 >> 16) & 0xff] & 0x00ff0000) ^ (VAR11[(VAR8 >> 8) & 0xff] & 0x0000ff00) ^ (VAR11[(VAR8)&0xff] & 0x000000ff);
            VAR6[13] = VAR6[5] ^ VAR6[12];
            VAR6[14] = VAR6[6] ^ VAR6[13];
            VAR6[15] = VAR6[7] ^ VAR6[14];
            VAR6 += 8;
        }
    }
    FUN3();
}