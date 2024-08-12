void FUN1(VAR1 *VAR2)
{
    static int VAR3 = 0;
    FUN2(VAR2);
    if (!VAR3)
    {
        int VAR4;
        int VAR5;
        int VAR6;
        VAR3 = 1;
        FUN3(&VAR7);
        for (VAR6 = 0; VAR6 < 64; VAR6++)
        {
            VAR8[0][VAR6] = VAR7.VAR9[0][VAR6];
            VAR10[0][VAR6] = VAR7.VAR11[0][VAR6];
        }
        FUN4(&VAR7, VAR12, VAR13);
        for (VAR6 = -255; VAR6 < 256; VAR6++)
        {
            int VAR14, VAR15;
            int VAR16, VAR17;
            int VAR18 = VAR6;
            VAR14 = FUN5(VAR18);
            if (VAR18 < 0)
                VAR18--;
            VAR15 = FUN6(2 * VAR14);
            VAR16 = VAR19[VAR15] + VAR15;
            VAR17 = (VAR20[VAR15] << VAR15) + (VAR18 & ((1 << VAR15) - 1));
            VAR21[VAR6 + 255] = VAR16 + (VAR17 << 8);
            VAR16 = VAR22[VAR15] + VAR15;
            VAR17 = (VAR23[VAR15] << VAR15) + (VAR18 & ((1 << VAR15) - 1));
            VAR24[VAR6 + 255] = VAR16 + (VAR17 << 8);
        }
        VAR25 = FUN7(sizeof(VAR26) * (VAR27 + 1) * (2 * VAR28 + 1));
        for (VAR4 = 1; VAR4 <= VAR27; VAR4++)
        {
            for (VAR5 = -VAR28; VAR5 <= VAR28; VAR5++)
            {
                int VAR29;
                if (VAR5 == 0)
                    VAR29 = VAR30[0][1];
                else
                {
                    int VAR31, VAR32, VAR33, VAR17;
                    VAR32 = VAR4 - 1;
                    VAR33 = 1 << VAR32;
                    VAR31 = VAR5;
                    if (VAR31 < 0)
                        VAR31 = -VAR31;
                    VAR31--;
                    VAR17 = (VAR31 >> VAR32) + 1;
                    if (VAR17 < 17)
                    {
                        VAR29 = VAR30[VAR17][1] + 1 + VAR32;
                    }
                    else
                    {
                        VAR29 = VAR30[16][1] + 2 + VAR32;
                    }
                }
                VAR25[VAR4][VAR5 + VAR28] = VAR29;
            }
        }
        for (VAR4 = VAR27; VAR4 > 0; VAR4--)
        {
            for (VAR5 = -(8 << VAR4); VAR5 < (8 << VAR4); VAR5++)
            {
                VAR34[VAR5 + VAR28] = VAR4;
            }
        }
    }
    VAR2->VAR35.VAR25 = VAR25;
    VAR2->VAR34 = VAR34;
    if (VAR2->VAR36 == VAR37)
    {
        VAR2->VAR38 = -255;
        VAR2->VAR39 = 255;
    }
    else
    {
        VAR2->VAR38 = -2047;
        VAR2->VAR39 = 2047;
    }
    VAR2->VAR40 = VAR2->VAR41 = VAR2->VAR42 = VAR2->VAR43 = VAR13;
}