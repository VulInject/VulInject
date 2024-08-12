static int FUN1(const VAR1 *VAR2, const VAR1 *VAR3, unsigned char *VAR4, int VAR5, int VAR6)
{
    unsigned char *VAR7 = VAR4 + VAR5 * VAR6;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    unsigned char *VAR13 = VAR4;
    if (VAR2[0] & 0x01)
        VAR2 += 5;
    else
        VAR2 += 2;
    if (VAR2 + 3 > VAR3)
        return -1;
    VAR8 = FUN2(VAR2);
    VAR2 += 3;
    while (VAR8 > 0 && VAR2 < VAR3)
    {
        VAR9 = (VAR2[0] & 3);
        if (VAR2[0] & 0x80)
        {
            if (VAR2[0] & 0x40)
            {
                if (VAR2[0] & 0x20)
                {
                    if (VAR2[0] < 0xFC)
                        VAR9 = (((VAR2[0] & 31) + 1) << 2);
                    VAR2++;
                    VAR10 = 0;
                }
                else
                {
                    VAR11 = ((VAR2[0] & 0x10) << 12) + FUN3(&VAR2[1]) + 1;
                    VAR10 = ((VAR2[0] & 0xC) << 6) + VAR2[3] + 5;
                    VAR2 += 4;
                }
            }
            else
            {
                VAR9 = ((VAR2[1] & 0xC0) >> 6);
                VAR11 = (FUN3(&VAR2[1]) & 0x3FFF) + 1;
                VAR10 = (VAR2[0] & 0x3F) + 4;
                VAR2 += 3;
            }
        }
        else
        {
            VAR11 = ((VAR2[0] & 0x60) << 3) + VAR2[1] + 1;
            VAR10 = ((VAR2[0] & 0x1C) >> 2) + 3;
            VAR2 += 2;
        }
        if (VAR9 > VAR3 - VAR2)
            break;
        if (VAR9 > 0)
        {
            VAR8 -= VAR9;
            VAR12 = FUN4(VAR9, VAR7 - VAR4);
            memcpy(VAR4, VAR2, VAR12);
            VAR4 += VAR12;
            VAR2 += VAR12;
        }
        if (VAR10 > 0)
        {
            if (VAR4 - VAR13 < VAR11)
                return 0;
            VAR8 -= VAR10;
            VAR12 = FUN4(VAR10, VAR7 - VAR4);
            FUN5(VAR4, VAR11, VAR12);
            VAR4 += VAR12;
        }
    }
    return 0;
}