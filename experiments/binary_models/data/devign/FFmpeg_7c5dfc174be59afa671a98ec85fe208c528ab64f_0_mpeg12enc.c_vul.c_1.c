static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < 128; VAR5++)
    {
        int VAR6 = VAR5 - 64;
        int VAR7;
        for (VAR7 = 0; VAR7 < 64; VAR7++)
        {
            int VAR8, VAR9, VAR10;
            int VAR11 = FUN2(VAR6);
            int VAR12 = (VAR6 >> 31) & 1;
            if (VAR11 > VAR2->VAR13[0][VAR7])
                VAR10 = 111;
            else
                VAR10 = VAR2->VAR14[0][VAR7] + VAR11 - 1;
            if (VAR10 < 111)
            {
                VAR8 = VAR2->VAR15[VAR10][1] + 1;
                VAR9 = (VAR2->VAR15[VAR10][0] << 1) + VAR12;
            }
            else
            {
                VAR8 = VAR2->VAR15[111][1] + 6;
                VAR9 = VAR2->VAR15[111][0] << 6;
                VAR9 |= VAR7;
                if (VAR11 < 128)
                {
                    VAR9 <<= 8;
                    VAR8 += 8;
                    VAR9 |= VAR6 & 0xff;
                }
                else
                {
                    VAR9 <<= 16;
                    VAR8 += 16;
                    VAR9 |= VAR6 & 0xff;
                    if (VAR6 < 0)
                    {
                        VAR9 |= 0x8001 + VAR6 + 255;
                    }
                    else
                    {
                        VAR9 |= VAR6 & 0xffff;
                    }
                }
            }
            VAR4[FUN3(VAR7, VAR5)] = VAR8;
        }
    }