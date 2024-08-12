static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *const VAR12 = VAR3;
    int VAR13, VAR14, VAR15, VAR16, VAR17;
    unsigned int VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25, VAR26;
    VAR7 *VAR27;
    const VAR7 *VAR28 = VAR8 + VAR9;
    const VAR7 *VAR29 = VAR8;
    VAR7 *VAR30;
    int VAR31 = -1;
    if (VAR8[0] != 0x0a || VAR8[1] > 5)
    {
        FUN2(VAR2, VAR32, "");
        VAR13 = VAR8[2];
        VAR14 = FUN3(VAR8 + 4);
        VAR15 = FUN3(VAR8 + 6);
        VAR16 = FUN3(VAR8 + 8);
        VAR17 = FUN3(VAR8 + 10);
        if (VAR16 < VAR14 || VAR17 < VAR15)
        {
            FUN2(VAR2, VAR32, "");
            VAR18 = VAR16 - VAR14 + 1;
            VAR19 = VAR17 - VAR15 + 1;
            VAR20 = VAR8[3];
            VAR21 = FUN3(VAR8 + 66);
            VAR22 = VAR8[65];
            VAR26 = VAR22 * VAR21;
            if (VAR26 < (VAR18 * VAR20 * VAR22 + 7) / 8 || (!VAR13 && VAR26 > VAR9 / VAR19))
            {
                FUN2(VAR2, VAR32, "");
                switch ((VAR22 << 8) + VAR20)
                {
                case 0x0308:
                    VAR2->VAR33 = VAR34;
                    break;
                case 0x0108:
                case 0x0104:
                case 0x0102:
                case 0x0101:
                case 0x0401:
                case 0x0301:
                case 0x0201:
                    VAR2->VAR33 = VAR35;
                    break;
                default:
                    FUN2(VAR2, VAR32, "");
                    VAR8 += 128;
                    if ((VAR31 = FUN4(VAR2, VAR18, VAR19)) < 0)
                        return VAR31;
                    if ((VAR31 = FUN5(VAR2, VAR12, 0)) < 0)
                    {
                        FUN2(VAR2, VAR32, "");
                        return VAR31;
                        VAR12->VAR36 = VAR37;
                        VAR27 = VAR12->VAR3[0];
                        VAR23 = VAR12->VAR38[0];
                        VAR30 = FUN6(VAR26 + VAR39);
                        if (!VAR30)
                            return FUN7(VAR40);
                        if (VAR22 == 3 && VAR20 == 8)
                        {
                            for (VAR24 = 0; VAR24 < VAR19; VAR24++)
                            {
                                VAR8 = FUN8(VAR8, VAR28, VAR30, VAR26, VAR13);
                                for (VAR25 = 0; VAR25 < VAR18; VAR25++)
                                {
                                    VAR27[3 * VAR25] = VAR30[VAR25];
                                    VAR27[3 * VAR25 + 1] = VAR30[VAR25 + VAR21];
                                    VAR27[3 * VAR25 + 2] = VAR30[VAR25 + (VAR21 << 1)];
                                    VAR27 += VAR23;
                                }
                                else if (VAR22 == 1 && VAR20 == 8)
                                {
                                    const VAR7 *VAR41 = VAR29 + VAR9 - 769;
                                    if (VAR9 < 769)
                                    {
                                        FUN2(VAR2, VAR32, "");
                                        VAR31 = VAR2->VAR42 & VAR43 ? VAR44 : VAR9;
                                        goto VAR45;
                                        for (VAR24 = 0; VAR24 < VAR19; VAR24++, VAR27 += VAR23)
                                        {
                                            VAR8 = FUN8(VAR8, VAR28, VAR30, VAR26, VAR13);
                                            memcpy(VAR27, VAR30, VAR18);
                                            if (VAR8 != VAR41)
                                            {
                                                FUN2(VAR2, VAR46, "");
                                                VAR8 = VAR41;
                                                if (*VAR8++ != 12)
                                                {
                                                    FUN2(VAR2, VAR32, "");
                                                    VAR31 = VAR2->VAR42 & VAR43 ? VAR44 : VAR9;
                                                    goto VAR45;
                                                }
                                                else if (VAR22 == 1)
                                                {
                                                    GetBitContext VAR47;
                                                    for (VAR24 = 0; VAR24 < VAR19; VAR24++)
                                                    {
                                                        FUN9(&VAR47, VAR30, VAR26 << 3);
                                                        VAR8 = FUN8(VAR8, VAR28, VAR30, VAR26, VAR13);
                                                        for (VAR25 = 0; VAR25 < VAR18; VAR25++)
                                                            VAR27[VAR25] = FUN10(&VAR47, VAR20);
                                                        VAR27 += VAR23;
                                                    }
                                                    else
                                                    {
                                                        int VAR48;
                                                        for (VAR24 = 0; VAR24 < VAR19; VAR24++)
                                                        {
                                                            VAR8 = FUN8(VAR8, VAR28, VAR30, VAR26, VAR13);
                                                            for (VAR25 = 0; VAR25 < VAR18; VAR25++)
                                                            {
                                                                int VAR49 = 0x80 >> (VAR25 & 7), VAR50 = 0;
                                                                for (VAR48 = VAR22 - 1; VAR48 >= 0; VAR48--)
                                                                {
                                                                    VAR50 <<= 1;
                                                                    VAR50 += !!(VAR30[VAR48 * VAR21 + (VAR25 >> 3)] & VAR49);
                                                                    VAR27[VAR25] = VAR50;
                                                                    VAR27 += VAR23;
                                                                    if (VAR22 == 1 && VAR20 == 8)
                                                                    {
                                                                        FUN11(&VAR8, (VAR51 *)VAR12->VAR3[1], 256);
                                                                    }
                                                                    else if (VAR20 < 8)
                                                                    {
                                                                        const VAR7 *VAR52 = VAR29 + 16;
                                                                        FUN11(&VAR52, (VAR51 *)VAR12->VAR3[1], 16);
                                                                        *VAR4 = 1;
                                                                        VAR31 = VAR8 - VAR29;
                                                                    VAR45:
                                                                        FUN12(VAR30);
                                                                        return VAR31