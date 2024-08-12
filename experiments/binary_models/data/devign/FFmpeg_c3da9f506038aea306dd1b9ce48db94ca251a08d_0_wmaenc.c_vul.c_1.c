static int FUN1(VAR1 *VAR2, float (*VAR3)[VAR4], int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    float VAR11;
    int VAR12[VAR13];
    static const int VAR14[25] = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    if (VAR2->VAR15)
    {
        assert(0);
    }
    else
    {
        VAR2->VAR16 = VAR2->VAR17;
        VAR2->VAR18 = VAR2->VAR17;
        VAR2->VAR19 = VAR2->VAR17;
    }
    VAR2->VAR20 = 1 << VAR2->VAR19;
    VAR7 = VAR2->VAR17 - VAR2->VAR19;
    VAR6 = VAR2->VAR21[VAR7] - VAR2->VAR22;
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
        VAR12[VAR8] = VAR6;
    {
        int VAR24 = VAR2->VAR20 / 2;
        VAR11 = 1.0 / (float)VAR24;
        if (VAR2->VAR25 == 1)
        {
            VAR11 *= FUN2(VAR24);
        }
    }
    if (VAR2->VAR23 == 2)
    {
        FUN3(&VAR2->VAR26, 1, !!VAR2->VAR27);
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        VAR2->VAR28[VAR8] = 1;
        if (VAR2->VAR28[VAR8])
        {
            FUN4(VAR2, VAR8, VAR14);
        }
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        if (VAR2->VAR28[VAR8])
        {
            VAR29 *VAR30;
            float *VAR31, *VAR32, VAR33;
            int VAR34, VAR35;
            VAR30 = VAR2->VAR30[VAR8];
            VAR32 = VAR2->VAR32[VAR8];
            VAR33 = FUN5(10, VAR5 * 0.05) / VAR2->VAR36[VAR8];
            VAR33 *= VAR11;
            VAR31 = VAR3[VAR8];
            if (VAR2->VAR37 && 0)
            {
                assert(0);
            }
            else
            {
                VAR31 += VAR2->VAR22;
                VAR35 = VAR12[VAR8];
                for (VAR34 = 0; VAR34 < VAR35; VAR34++)
                {
                    double VAR38 = *VAR31++ / (VAR32[VAR34] * VAR33);
                    if (VAR38 < -32768 || VAR38 > 32767)
                        return -1;
                    VAR30[VAR34] = FUN6(VAR38);
                }
            }
        }
    }
    VAR6 = 0;
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        int VAR39 = VAR2->VAR28[VAR8];
        FUN3(&VAR2->VAR26, 1, VAR39);
        VAR6 |= VAR39;
    }
    if (!VAR6)
        return 1;
    for (VAR6 = VAR5 - 1; VAR6 >= 127; VAR6 -= 127)
        FUN3(&VAR2->VAR26, 7, 127);
    FUN3(&VAR2->VAR26, 7, VAR6);
    VAR9 = FUN7(VAR5);
    if (VAR2->VAR37)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
        {
            if (VAR2->VAR28[VAR8])
            {
                int VAR34, VAR35;
                VAR35 = VAR2->VAR40[VAR7];
                for (VAR34 = 0; VAR34 < VAR35; VAR34++)
                {
                    FUN3(&VAR2->VAR26, 1, VAR2->VAR41[VAR8][VAR34] = 0);
                    if (0)
                        VAR12[VAR8] -= VAR2->VAR42[VAR7][VAR34];
                }
            }
        }
    }
    VAR10 = 1;
    if (VAR2->VAR19 != VAR2->VAR17)
    {
        FUN3(&VAR2->VAR26, 1, VAR10);
    }
    if (VAR10)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
        {
            if (VAR2->VAR28[VAR8])
            {
                if (VAR2->VAR43)
                {
                    FUN8(VAR2, VAR8, VAR14);
                }
                else
                {
                    assert(0);
                }
            }
        }
    }
    else
    {
        assert(0);
    }
    for (VAR8 = 0; VAR8 < VAR2->VAR23; VAR8++)
    {
        if (VAR2->VAR28[VAR8])
        {
            int VAR44, VAR45;
            VAR29 *VAR46, *VAR47;
            VAR45 = (VAR8 == 1 && VAR2->VAR27);
            VAR46 = &VAR2->VAR30[VAR8][0];
            VAR47 = VAR46 + VAR12[VAR8];
            VAR44 = 0;
            for (; VAR46 < VAR47; VAR46++)
            {
                if (*VAR46)
                {
                    int VAR48 = *VAR46;
                    int VAR49 = FUN9(VAR48);
                    int VAR50 = 0;
                    if (VAR49 <= VAR2->VAR51[VAR45]->VAR52)
                    {
                        if (VAR44 < VAR2->VAR51[VAR45]->VAR53[VAR49 - 1])
                            VAR50 = VAR44 + VAR2->VAR54[VAR45][VAR49 - 1];
                    }
                    assert(VAR50 < VAR2->VAR51[VAR45]->VAR35);
                    FUN3(&VAR2->VAR26, VAR2->VAR51[VAR45]->VAR55[VAR50], VAR2->VAR51[VAR45]->VAR56[VAR50]);
                    if (VAR50 == 0)
                    {
                        if (1 << VAR9 <= VAR49)
                            return -1;
                        if (VAR49 == 0x71B && (VAR2->VAR57->VAR58 & VAR59))
                            VAR49 = 0x71A;
                        FUN3(&VAR2->VAR26, VAR9, VAR49);
                        FUN3(&VAR2->VAR26, VAR2->VAR17, VAR44);
                    }
                    FUN3(&VAR2->VAR26, 1, VAR48 < 0);
                    VAR44 = 0;
                }
                else
                {
                    VAR44++;
                }
            }
            if (VAR44)
                FUN3(&VAR2->VAR26, VAR2->VAR51[VAR45]->VAR55[1], VAR2->VAR51[VAR45]->VAR56[1]);
        }
        if (VAR2->VAR25 == 1 && VAR2->VAR23 >= 2)
        {
            FUN10(&VAR2->VAR26);
        }
    }
    return 0;
}