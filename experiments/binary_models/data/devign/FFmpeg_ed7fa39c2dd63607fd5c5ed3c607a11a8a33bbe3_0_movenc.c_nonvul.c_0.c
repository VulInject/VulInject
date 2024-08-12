static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    offset_t VAR5 = FUN2(VAR2);
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    if (VAR4->VAR6 > 6)
    {
        if (FUN5(VAR4->VAR7) == 0x00000001)
        {
            VAR8 *VAR9, *VAR10;
            uint32_t VAR11 = 0, VAR12 = 0;
            VAR8 *VAR13 = 0, *VAR14 = 0;
            int VAR15 = FUN6(&VAR4->VAR7, &VAR4->VAR6);
            if (VAR15 < 0)
                return VAR15;
            VAR9 = VAR4->VAR7;
            VAR10 = VAR4->VAR7 + VAR4->VAR6;
            while (VAR9 < VAR10)
            {
                unsigned int VAR16;
                uint8_t VAR17;
                VAR16 = FUN5(VAR9);
                VAR17 = VAR9[4] & 0x1f;
                if (VAR17 == 7)
                {
                    VAR13 = VAR9 + 4;
                    VAR11 = VAR16;
                }
                else if (VAR17 == 8)
                {
                    VAR14 = VAR9 + 4;
                    VAR12 = VAR16;
                }
                VAR9 += VAR16 + 4;
            }
            assert(VAR13);
            assert(VAR14);
            FUN7(VAR2, 1);
            FUN7(VAR2, VAR13[1]);
            FUN7(VAR2, VAR13[2]);
            FUN7(VAR2, VAR13[3]);
            FUN7(VAR2, 0xff);
            FUN7(VAR2, 0xe1);
            FUN8(VAR2, VAR11);
            FUN9(VAR2, VAR13, VAR11);
            FUN7(VAR2, 1);
            FUN8(VAR2, VAR12);
            FUN9(VAR2, VAR14, VAR12);
        }
        else
        {
            FUN9(VAR2, VAR4->VAR7, VAR4->VAR6);
        }
    }
    return FUN10(VAR2, VAR5);
}