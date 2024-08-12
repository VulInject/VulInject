static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19, VAR20;
    int VAR21[6];
    int VAR22[7] = {0, 0, 0, 0, 0, 0};
    int VAR23 = 2 << (VAR8 + 2 >> 1);
    int VAR24 = 2 << (VAR8 + 1 >> 1);
    int VAR25 = VAR23 * VAR24;
    FUN2(*VAR26)[256] = VAR2->VAR27[VAR8];
    const VAR28 *VAR29, *VAR30;
    const FUN3(*VAR31)[2];
    const FUN4(*VAR32)[2];
    VAR19 = 0;
    if (VAR11)
    {
        VAR29 = VAR33[VAR8];
        VAR30 = VAR34[VAR8];
        VAR31 = VAR35;
        VAR32 = VAR36[VAR8];
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
        {
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
            {
                int VAR37 = VAR4[VAR14 + VAR13 * VAR7];
                VAR26[0][VAR14 + VAR23 * VAR13] = VAR37;
                VAR19 += VAR37 * VAR37;
                VAR22[0] += VAR37;
            }
        }
    }
    else
    {
        VAR29 = VAR38[VAR8];
        VAR30 = VAR39[VAR8];
        VAR31 = VAR40 + 256;
        VAR32 = VAR41[VAR8];
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
        {
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
            {
                int VAR37 = VAR4[VAR14 + VAR13 * VAR7] - VAR5[VAR14 + VAR13 * VAR7];
                VAR26[0][VAR14 + VAR23 * VAR13] = VAR37;
                VAR19 += VAR37 * VAR37;
                VAR22[0] += VAR37;
            }
        }
    }
    VAR20 = 0;
    VAR19 -= (int)((unsigned)VAR22[0] * VAR22[0] >> (VAR8 + 3));
    VAR18 = VAR22[0] + (VAR25 >> 1) >> (VAR8 + 3);
    if (VAR8 < 4)
    {
        for (VAR12 = 1; VAR12 < 7; VAR12++)
        {
            int VAR42 = VAR43;
            int VAR44 = -999, VAR45 = -999;
            const int VAR46 = VAR12 - 1;
            const VAR28 *VAR47;
            for (VAR15 = 0; VAR15 < 16; VAR15++)
            {
                int VAR48 = VAR29[VAR46 * 16 + VAR15];
                int VAR49, VAR50, VAR51;
                VAR47 = VAR30 + VAR46 * VAR25 * 16 + VAR15 * VAR25;
                VAR49 = VAR2->FUN5(VAR47, VAR26[VAR46], VAR25);
                VAR50 = VAR22[VAR46] - VAR48;
                VAR51 = VAR49 - (VAR50 * (VAR52)VAR50 >> (VAR8 + 3));
                if (VAR51 < VAR42)
                {
                    int VAR53 = VAR50 + (VAR25 >> 1) >> (VAR8 + 3);
                    FUN6(VAR53 > -300 && VAR53 < 300);
                    VAR53 = FUN7(VAR53, VAR11 ? 0 : -256, 255);
                    VAR42 = VAR51;
                    VAR21[VAR46] = VAR15;
                    VAR44 = VAR48;
                    VAR45 = VAR53;
                }
            }
            FUN8(VAR45 != -999);
            VAR47 = VAR30 + VAR46 * VAR25 * 16 + VAR21[VAR46] * VAR25;
            for (VAR16 = 0; VAR16 < VAR25; VAR16++)
                VAR26[VAR46 + 1][VAR16] = VAR26[VAR46][VAR16] - VAR47[VAR16];
            VAR22[VAR46 + 1] = VAR22[VAR46] - VAR44;
            VAR42 += VAR10 * (+1 + 4 * VAR12 + VAR32[1 + VAR12][1] + VAR31[VAR45][1]);
            if (VAR42 < VAR19)
            {
                VAR19 = VAR42;
                VAR20 = VAR12;
                VAR18 = VAR45;
            }
        }
    }
    VAR17 = 0;
    if (VAR19 > VAR9 && VAR8)
    {
        int VAR51 = 0;
        int VAR54 = VAR8 & 1 ? VAR7 * VAR24 / 2 : VAR23 / 2;
        PutBitContext VAR55[6];
        for (VAR15 = VAR8 - 1; VAR15 >= 0; VAR15--)
            VAR55[VAR15] = VAR2->VAR56[VAR15];
        VAR51 += FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8 - 1, VAR9 >> 1, VAR10, VAR11);
        VAR51 += FUN1(VAR2, VAR4 + VAR54, VAR5 + VAR54, VAR6 + VAR54, VAR7, VAR8 - 1, VAR9 >> 1, VAR10, VAR11);
        VAR51 += VAR10;
        if (VAR51 < VAR19)
        {
            VAR19 = VAR51;
            VAR17 = 1;
        }
        else
        {
            for (VAR15 = VAR8 - 1; VAR15 >= 0; VAR15--)
                VAR2->VAR56[VAR15] = VAR55[VAR15];
        }
    }
    if (VAR8 > 0)
        FUN9(&VAR2->VAR56[VAR8], 1, VAR17);
    if (!VAR17)
    {
        FUN10(VAR18 >= 0 && VAR18 < 256 || !VAR11);
        FUN10(VAR18 >= -256 && VAR18 < 256);
        FUN10(VAR20 >= 0 && VAR20 < 7);
        FUN10(VAR8 < 4 || VAR20 == 0);
        FUN9(&VAR2->VAR56[VAR8], VAR32[1 + VAR20][1], VAR32[1 + VAR20][0]);
        FUN9(&VAR2->VAR56[VAR8], VAR31[VAR18][1], VAR31[VAR18][0]);
        for (VAR15 = 0; VAR15 < VAR20; VAR15++)
        {
            FUN6(VAR21[VAR15] >= 0 && VAR21[VAR15] < 16);
            FUN9(&VAR2->VAR56[VAR8], 4, VAR21[VAR15]);
        }
        for (VAR13 = 0; VAR13 < VAR24; VAR13++)
            for (VAR14 = 0; VAR14 < VAR23; VAR14++)
                VAR6[VAR14 + VAR13 * VAR7] = VAR4[VAR14 + VAR13 * VAR7] - VAR26[VAR20][VAR14 + VAR23 * VAR13] + VAR18;
    }
    return VAR19;
}