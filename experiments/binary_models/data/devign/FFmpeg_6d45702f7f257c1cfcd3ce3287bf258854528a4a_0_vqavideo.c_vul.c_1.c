static void FUN1(const unsigned char *VAR1, int VAR2, unsigned char *VAR3, int VAR4, int VAR5)
{
    int VAR6 = 0;
    int VAR7 = 0;
    int VAR8;
    int VAR9;
    unsigned char VAR10;
    int VAR11;
    while (VAR6 < VAR2)
    {
        FUN2(NULL, "", VAR1[VAR6]);
        if (VAR1[VAR6] == 0x80)
            if (VAR7 >= VAR4)
            {
                FUN3(NULL, VAR12, "", VAR7, VAR4);
            }
        if (VAR1[VAR6] == 0xFF)
        {
            VAR6++;
            VAR8 = FUN4(&VAR1[VAR6]);
            VAR6 += 2;
            VAR9 = FUN4(&VAR1[VAR6]);
            VAR6 += 2;
            FUN2(NULL, "", VAR8, VAR9);
            FUN5();
            if (VAR9 + VAR8 > VAR4)
                for (VAR11 = 0; VAR11 < VAR8; VAR11++)
                    VAR3[VAR7 + VAR11] = VAR3[VAR9 + VAR11];
            VAR7 += VAR8;
        }
        else if (VAR1[VAR6] == 0xFE)
        {
            VAR6++;
            VAR8 = FUN4(&VAR1[VAR6]);
            VAR6 += 2;
            VAR10 = VAR1[VAR6++];
            FUN2(NULL, "", VAR8, VAR10);
            FUN5();
            memset(&VAR3[VAR7], VAR10, VAR8);
            VAR7 += VAR8;
        }
        else if ((VAR1[VAR6] & 0xC0) == 0xC0)
        {
            VAR8 = (VAR1[VAR6++] & 0x3F) + 3;
            VAR9 = FUN4(&VAR1[VAR6]);
            VAR6 += 2;
            FUN2(NULL, "", VAR8, VAR9);
            FUN5();
            if (VAR9 + VAR8 > VAR4)
                for (VAR11 = 0; VAR11 < VAR8; VAR11++)
                    VAR3[VAR7 + VAR11] = VAR3[VAR9 + VAR11];
            VAR7 += VAR8;
        }
        else if (VAR1[VAR6] > 0x80)
        {
            VAR8 = VAR1[VAR6++] & 0x3F;
            FUN2(NULL, "", VAR8);
            FUN5();
            memcpy(&VAR3[VAR7], &VAR1[VAR6], VAR8);
            VAR6 += VAR8;
            VAR7 += VAR8;
        }
        else
        {
            VAR8 = ((VAR1[VAR6] & 0x70) >> 4) + 3;
            VAR9 = FUN6(&VAR1[VAR6]) & 0x0FFF;
            VAR6 += 2;
            FUN2(NULL, "", VAR8, VAR9);
            FUN5();
            for (VAR11 = 0; VAR11 < VAR8; VAR11++)
                VAR3[VAR7 + VAR11] = VAR3[VAR7 - VAR9 + VAR11];
            VAR7 += VAR8;
        }
    }
    if (VAR5)
        if (VAR7 < VAR4)
            FUN3(NULL, VAR12, "", VAR7, VAR4);