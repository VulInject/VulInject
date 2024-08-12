static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR3 *VAR11, *VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16 = VAR7->VAR17, VAR18;
    unsigned VAR19[33] = {0};
    int VAR20[256];
    int VAR21[4];
    int VAR22[4];
    AVSubtitleRect VAR23;
    VAR3 *VAR24 = NULL;
    int VAR25, VAR26;
    if (VAR16 == 0 || VAR7->VAR16 == NULL)
        VAR23 = *VAR7->VAR16[0];
    if (VAR16 > 1)
    {
        int VAR27 = VAR7->VAR16[0]->VAR28, VAR29 = VAR27 + VAR7->VAR16[0]->VAR30;
        int VAR31 = VAR7->VAR16[0]->VAR32, VAR33 = VAR31 + VAR7->VAR16[0]->VAR7;
        for (VAR15 = 1; VAR15 < VAR16; VAR15++)
        {
            VAR27 = FUN2(VAR27, VAR7->VAR16[VAR15]->VAR28);
            VAR31 = FUN2(VAR31, VAR7->VAR16[VAR15]->VAR32);
            VAR29 = FUN3(VAR29, VAR7->VAR16[VAR15]->VAR28 + VAR7->VAR16[VAR15]->VAR30);
            VAR33 = FUN3(VAR33, VAR7->VAR16[VAR15]->VAR32 + VAR7->VAR16[VAR15]->VAR7);
            VAR23.VAR28 = VAR27;
            VAR23.VAR32 = VAR31;
            VAR23.VAR30 = VAR29 - VAR27;
            VAR23.VAR7 = VAR33 - VAR31;
            if ((VAR18 = FUN4(VAR23.VAR30, VAR23.VAR7, 0, VAR2)) < 0)
                return VAR18;
            VAR19[0] = VAR23.VAR30 * VAR23.VAR7;
            VAR19[0] -= VAR7->VAR16[VAR15]->VAR30 * VAR7->VAR16[VAR15]->VAR7;
            FUN5(VAR2, VAR19, VAR7->VAR16[VAR15]);
            FUN6(VAR2, VAR21, VAR22, VAR19);
            if (VAR16 > 1)
            {
                if (!(VAR24 = FUN7(VAR23.VAR30, VAR23.VAR7)))
                    return FUN8(VAR34);
                VAR23.VAR35.VAR36[0] = VAR24;
                VAR23.VAR35.VAR37[0] = VAR23.VAR30;
                for (VAR15 = 0; VAR15 < VAR16; VAR15++)
                {
                    FUN9(VAR2, VAR20, (VAR38 *)VAR7->VAR16[VAR15]->VAR35.VAR36[1], VAR21, VAR22);
                    FUN10(&VAR23, VAR7->VAR16[VAR15], VAR20);
                    for (VAR15 = 0; VAR15 < 4; VAR15++)
                        VAR20[VAR15] = VAR15;
                }
                else
                {
                    FUN9(VAR2, VAR20, (VAR38 *)VAR7->VAR16[0]->VAR35.VAR36[1], VAR21, VAR22);
                    FUN11(VAR2, VAR39, "");
                    for (VAR15 = 0; VAR15 < 4; VAR15++)
                        FUN11(VAR2, VAR39, "", VAR9->VAR40[VAR21[VAR15]], VAR22[VAR15], VAR21[VAR15], VAR22[VAR15] >> 4);
                    FUN11(VAR2, VAR39, "");
                    VAR11 = VAR4 + 4;
                    VAR13 = VAR11 - VAR4;
                    if ((VAR11 - VAR4) + VAR23.VAR30 * VAR23.VAR7 / 2 + 17 + 21 > VAR5)
                    {
                        FUN11(NULL, VAR41, "");
                        VAR18 = VAR42;
                        goto VAR43;
                        FUN12(&VAR11, VAR23.VAR35.VAR36[0], VAR23.VAR30 * 2, VAR23.VAR30, (VAR23.VAR7 + 1) >> 1, VAR20);
                        VAR14 = VAR11 - VAR4;
                        FUN12(&VAR11, VAR23.VAR35.VAR36[0] + VAR23.VAR30, VAR23.VAR30 * 2, VAR23.VAR30, VAR23.VAR7 >> 1, VAR20);
                        VAR12 = VAR4 + 2;
                        FUN13(&VAR12, VAR11 - VAR4);
                        FUN13(&VAR11, (VAR7->VAR44 * 90) >> 10);
                        FUN13(&VAR11, (VAR11 - VAR4) + 8 + 12 + 2);
                        *VAR11++ = 0x03;
                        *VAR11++ = (VAR21[3] << 4) | VAR21[2];
                        *VAR11++ = (VAR21[1] << 4) | VAR21[0];
                        *VAR11++ = 0x04;
                        *VAR11++ = (VAR22[3] & 0xF0) | (VAR22[2] >> 4);
                        *VAR11++ = (VAR22[1] & 0xF0) | (VAR22[0] >> 4);
                        VAR25 = VAR23.VAR28 + VAR23.VAR30 - 1;
                        VAR26 = VAR23.VAR32 + VAR23.VAR7 - 1;
                        *VAR11++ = 0x05;
                        *VAR11++ = VAR23.VAR28 >> 4;
                        *VAR11++ = (VAR23.VAR28 << 4) | ((VAR25 >> 8) & 0xf);
                        *VAR11++ = VAR25;
                        *VAR11++ = VAR23.VAR32 >> 4;
                        *VAR11++ = (VAR23.VAR32 << 4) | ((VAR26 >> 8) & 0xf);
                        *VAR11++ = VAR26;
                        *VAR11++ = 0x06;
                        FUN13(&VAR11, VAR13);
                        FUN13(&VAR11, VAR14);
                        *VAR11++ = 0x01;
                        *VAR11++ = 0xff;
                        FUN13(&VAR11, (VAR7->VAR45 * 90) >> 10);
                        FUN13(&VAR11, (VAR11 - VAR4) - 2);
                        *VAR11++ = 0x02;
                        *VAR11++ = 0xff;
                        VAR12 = VAR4;
                        FUN13(&VAR12, VAR11 - VAR4);
                        FUN11(NULL, VAR39, "", VAR11 - VAR4);
                        VAR18 = VAR11 - VAR4;
                    VAR43:
                        FUN14(VAR24);
                        return VAR18;