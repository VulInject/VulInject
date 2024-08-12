static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21[6];
    int VAR22[7] = {0, 0, 0, 0, 0, 0};
    int VAR23 = 2 << ((VAR8 + 2) >> 1);
    int VAR24 = 2 << ((VAR8 + 1) >> 1);
    int VAR25 = VAR23 * VAR24;
    int16_t VAR26[7][256];
    const VAR27 *VAR28, *VAR29;
    const FUN2(*VAR30)[2];
    const FUN3(*VAR31)[2];
    VAR19 = 0;
    if (VAR11)
    {
        VAR28 = VAR32[VAR8];
        VAR29 = VAR33[VAR8];
        VAR30 = VAR34;
        VAR31 = VAR35[VAR8];
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
        {
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
            {
                int VAR36 = VAR4[VAR14 + VAR13 * VAR7];
                VAR26[0][VAR14 + VAR23 * VAR13] = VAR36;
                VAR19 += VAR36 * VAR36;
                VAR22[0] += VAR36;
            }
        }
    }
    else
    {
        VAR28 = VAR37[VAR8];
        VAR29 = VAR38[VAR8];
        VAR30 = VAR39 + 256;
        VAR31 = VAR40[VAR8];
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
        {
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
            {
                int VAR36 = VAR4[VAR14 + VAR13 * VAR7] - VAR5[VAR14 + VAR13 * VAR7];
                VAR26[0][VAR14 + VAR23 * VAR13] = VAR36;
                VAR19 += VAR36 * VAR36;
                VAR22[0] += VAR36;
            }
        }
    }
    VAR20 = 0;
    VAR19 -= ((VAR22[0] * VAR22[0]) >> (VAR8 + 3));
    VAR18 = (VAR22[0] + (VAR25 >> 1)) >> (VAR8 + 3);
    if (VAR8 < 4)
    {
        for (VAR12 = 1; VAR12 < 7; VAR12++)
        {
            int VAR41 = VAR42;
            int VAR43 = -999, VAR44 = -999;
            const int VAR45 = VAR12 - 1;
            const VAR27 *VAR46;
            for (VAR15 = 0; VAR15 < 16; VAR15++)
            {
                int VAR47 = VAR28[VAR45 * 16 + VAR15];
                int VAR48, VAR49, VAR50;
                VAR46 = VAR29 + VAR45 * VAR25 * 16 + VAR15 * VAR25;
                VAR48 = VAR2->VAR51.FUN4(VAR46, VAR26[VAR45], VAR25);
                VAR49 = VAR22[VAR45] - VAR47;
                VAR50 = VAR48 - ((VAR49 * (VAR52)VAR49) >> (VAR8 + 3));
                if (VAR50 < VAR41)
                {
                    int VAR53 = (VAR49 + (VAR25 >> 1)) >> (VAR8 + 3);
                    assert(VAR53 > -300 && VAR53 < 300);
                    VAR53 = FUN5(VAR53, VAR11 ? 0 : -256, 255);
                    VAR41 = VAR50;
                    VAR21[VAR45] = VAR15;
                    VAR43 = VAR47;
                    VAR44 = VAR53;
                }
            }
            assert(VAR44 != -999);
            VAR46 = VAR29 + VAR45 * VAR25 * 16 + VAR21[VAR45] * VAR25;
            for (VAR16 = 0; VAR16 < VAR25; VAR16++)
            {
                VAR26[VAR45 + 1][VAR16] = VAR26[VAR45][VAR16] - VAR46[VAR16];
            }
            VAR22[VAR45 + 1] = VAR22[VAR45] - VAR43;
            VAR41 += VAR10 * (+1 + 4 * VAR12 + VAR31[1 + VAR12][1] + VAR30[VAR44][1]);
            if (VAR41 < VAR19)
            {
                VAR19 = VAR41;
                VAR20 = VAR12;
                VAR18 = VAR44;
            }
        }
    }
    VAR17 = 0;
    if (VAR19 > VAR9 && VAR8)
    {
        int VAR50 = 0;
        int VAR54 = (VAR8 & 1) ? VAR7 * VAR24 / 2 : VAR23 / 2;
        PutBitContext VAR55[6];
        for (VAR15 = VAR8 - 1; VAR15 >= 0; VAR15--)
        {
            VAR55[VAR15] = VAR2->VAR56[VAR15];
        }
        VAR50 += FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8 - 1, VAR9 >> 1, VAR10, VAR11);
        VAR50 += FUN1(VAR2, VAR4 + VAR54, VAR5 + VAR54, VAR6 + VAR54, VAR7, VAR8 - 1, VAR9 >> 1, VAR10, VAR11);
        VAR50 += VAR10;
        if (VAR50 < VAR19)
        {
            VAR19 = VAR50;
            VAR17 = 1;
        }
        else
        {
            for (VAR15 = VAR8 - 1; VAR15 >= 0; VAR15--)
            {
                VAR2->VAR56[VAR15] = VAR55[VAR15];
            }
        }
    }
    if (VAR8 > 0)
        FUN6(&VAR2->VAR56[VAR8], 1, VAR17);
    if (!VAR17)
    {
        assert((VAR18 >= 0 && VAR18 < 256) || !VAR11);
        assert(VAR18 >= -256 && VAR18 < 256);
        assert(VAR20 >= 0 && VAR20 < 7);
        assert(VAR8 < 4 || VAR20 == 0);
        FUN6(&VAR2->VAR56[VAR8], VAR31[1 + VAR20][1], VAR31[1 + VAR20][0]);
        FUN6(&VAR2->VAR56[VAR8], VAR30[VAR18][1], VAR30[VAR18][0]);
        for (VAR15 = 0; VAR15 < VAR20; VAR15++)
        {
            assert(VAR21[VAR15] >= 0 && VAR21[VAR15] < 16);
            FUN6(&VAR2->VAR56[VAR8], 4, VAR21[VAR15]);
        }
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
        {
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
            {
                VAR6[VAR14 + VAR13 * VAR7] = VAR4[VAR14 + VAR13 * VAR7] - VAR26[VAR20][VAR14 + VAR23 * VAR13] + VAR18;
            }
        }
    }
    return VAR19;
}