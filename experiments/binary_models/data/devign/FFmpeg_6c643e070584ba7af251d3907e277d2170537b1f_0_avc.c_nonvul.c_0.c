int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    if (VAR5 > 6)
    {
        if (FUN2(VAR4) == 0x00000001 || FUN3(VAR4) == 0x000001)
        {
            VAR3 *VAR6 = NULL, *VAR7, *VAR8;
            uint32_t VAR9 = 0, VAR10 = 0;
            VAR3 *VAR11 = 0, *VAR12 = 0;
            int VAR13 = FUN4(VAR4, &VAR6, &VAR5);
            if (VAR13 < 0)
                return VAR13;
            VAR8 = VAR6;
            VAR7 = VAR6 + VAR5;
            while (VAR7 - VAR6 > 4)
            {
                uint32_t VAR14;
                uint8_t VAR15;
                VAR14 = FUN5(FUN2(VAR6), VAR7 - VAR6 - 4);
                VAR6 += 4;
                VAR15 = VAR6[0] & 0x1f;
                if (VAR15 == 7)
                {
                    VAR11 = VAR6;
                    VAR9 = VAR14;
                }
                else if (VAR15 == 8)
                {
                    VAR12 = VAR6;
                    VAR10 = VAR14;
                }
                VAR6 += VAR14;
            }
            if (!VAR11 || !VAR12 || VAR9 < 4 || VAR9 > VAR16 || VAR10 > VAR16)
                return VAR17;
            FUN6(VAR2, 1);
            FUN6(VAR2, VAR11[1]);
            FUN6(VAR2, VAR11[2]);
            FUN6(VAR2, VAR11[3]);
            FUN6(VAR2, 0xff);
            FUN6(VAR2, 0xe1);
            FUN7(VAR2, VAR9);
            FUN8(VAR2, VAR11, VAR9);
            FUN6(VAR2, 1);
            FUN7(VAR2, VAR10);
            FUN8(VAR2, VAR12, VAR10);
            FUN9(VAR8);
        }
        else
        {
            FUN8(VAR2, VAR4, VAR5);
        }
    }
    return 0;
}