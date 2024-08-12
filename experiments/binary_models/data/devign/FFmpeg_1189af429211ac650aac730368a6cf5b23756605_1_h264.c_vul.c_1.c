static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16 = 0;
    VAR17 *VAR18;
    int VAR19, VAR20;
    int VAR21;
    VAR12->VAR22 = VAR2->VAR22;
    FUN2(VAR12, &VAR12->VAR23);
    if (VAR9 == 0)
    {
    VAR18:
        VAR12->VAR24 = NULL;
        VAR12->VAR25 = 0;
        VAR18 = VAR12->VAR26[0];
        VAR20 = 0;
        for (VAR19 = 1; VAR12->VAR26[VAR19] && !VAR12->VAR26[VAR19]->VAR27->VAR28 && !VAR12->VAR26[VAR19]->VAR29; VAR19++)
            if (VAR12->VAR26[VAR19]->VAR30 < VAR18->VAR30)
            {
                VAR18 = VAR12->VAR26[VAR19];
                VAR20 = VAR19;
                for (VAR19 = VAR20; VAR12->VAR26[VAR19]; VAR19++)
                    VAR12->VAR26[VAR19] = VAR12->VAR26[VAR19 + 1];
                if (VAR18)
                {
                    VAR18->VAR31 &= ~VAR32;
                    VAR21 = FUN3(VAR12, VAR15, VAR18);
                    if (VAR21 < 0)
                        return VAR21;
                    *VAR4 = 1;
                    return VAR16;
                    if (VAR12->VAR33 && FUN4(VAR6, VAR34, NULL))
                    {
                        int VAR35;
                        VAR7 *VAR36 = FUN4(VAR6, VAR34, &VAR35);
                        if (FUN5(VAR36, VAR35))
                            FUN6(VAR12, VAR36, VAR35);
                        if (VAR12->VAR33 && VAR9 >= 9 && VAR8[0] == 1 && VAR8[2] == 0 && (VAR8[4] & 0xFC) == 0xFC && (VAR8[5] & 0x1F) && VAR8[8] == 0x67)
                        {
                            if (FUN5(VAR8, VAR9))
                                return FUN6(VAR12, VAR8, VAR9);
                            VAR16 = FUN7(VAR12, VAR8, VAR9, 0);
                            if (VAR16 < 0)
                                return VAR37;
                            if (!VAR12->VAR24 && VAR12->VAR38 == VAR39)
                            {
                                FUN8(VAR16 <= VAR9);
                                goto VAR18;
                                if (!(VAR2->VAR40 & VAR41) && !VAR12->VAR24)
                                {
                                    if (VAR2->VAR42 >= VAR43 || VAR9 >= 4 && !memcmp("", VAR8, 4))
                                        return VAR9;
                                    FUN9(VAR2, VAR44, "");
                                    return VAR37;
                                    if (!(VAR2->VAR40 & VAR41) || (VAR12->VAR45 >= VAR12->VAR46 && VAR12->VAR46))
                                    {
                                        if (VAR2->VAR40 & VAR41)
                                            FUN10(VAR12, 1);
                                        FUN11(VAR12, &VAR12->VAR47[0], 0);
                                        *VAR4 = 0;
                                        if (VAR12->VAR48 && (VAR12->VAR48->VAR49))
                                        {
                                            if (!VAR12->VAR48->VAR49)
                                                VAR12->VAR48->VAR27->VAR22 |= VAR50;
                                            if (!VAR12->VAR2->VAR51 && (VAR12->VAR48->VAR52[0] == VAR53 || VAR12->VAR48->VAR52[1] == VAR53))
                                            {
                                                int VAR54;
                                                VAR14 *VAR27 = VAR12->VAR48->VAR27;
                                                int VAR55 = VAR12->VAR48->VAR52[0] == VAR53;
                                                VAR7 *VAR56[4];
                                                int VAR57[4];
                                                const VAR7 *VAR58[4];
                                                FUN9(VAR12->VAR2, VAR59, "", VAR55);
                                                for (VAR54 = 0; VAR54 < 4; VAR54++)
                                                {
                                                    VAR56[VAR54] = VAR27->VAR3[VAR54] + (VAR55 ^ 1) * VAR27->VAR60[VAR54];
                                                    VAR58[VAR54] = VAR27->VAR3[VAR54] + VAR55 * VAR27->VAR60[VAR54];
                                                    VAR57[VAR54] = 2 * VAR27->VAR60[VAR54];
                                                    FUN12(VAR56, VAR57, VAR58, VAR57, VAR27->VAR61, VAR27->VAR62, VAR27->VAR63 >> 1);
                                                    VAR21 = FUN3(VAR12, VAR15, VAR12->VAR48);
                                                    if (VAR21 < 0)
                                                        return VAR21;
                                                    *VAR4 = 1;
                                                    if (VAR64)
                                                    {
                                                        FUN13(VAR12->VAR2, VAR15, NULL, VAR12->VAR48->VAR65, VAR12->VAR48->VAR66, VAR12->VAR48->VAR67, &VAR12->VAR68, VAR12->VAR69, VAR12->VAR46, VAR12->VAR70, 1);
                                                        FUN8(VAR15->VAR8[0] || !*VAR4);
                                                        FUN2(VAR12, &VAR12->VAR23);
                                                        return FUN14(VAR16, VAR9)