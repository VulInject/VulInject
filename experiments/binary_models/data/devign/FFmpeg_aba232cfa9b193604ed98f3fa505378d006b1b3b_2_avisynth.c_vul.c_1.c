static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    HRESULT VAR6;
    AVIFILEINFO VAR7;
    DWORD VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    wchar_t VAR13[1024] = {0};
    char VAR14[1024] = {0};
    FUN2();
    FUN3(VAR15, 0, VAR2->VAR16, -1, VAR13, 1024);
    FUN4(VAR17, 0, VAR13, -1, VAR14, 1024, NULL, NULL);
    VAR6 = FUN5(&VAR4->VAR18, VAR14, VAR19 | VAR20, NULL);
    if (VAR6 != VAR21)
    {
        FUN6(VAR2, VAR22, "", VAR6);
        FUN7();
        return -1;
    }
    VAR6 = FUN8(VAR4->VAR18, &VAR7, sizeof(VAR7));
    if (VAR6 != VAR21)
    {
        FUN6(VAR2, VAR22, "", VAR6);
        FUN7();
        return -1;
    }
    VAR4->VAR23 = FUN9(VAR7.VAR24 * sizeof(VAR11));
    for (VAR8 = 0; VAR8 < VAR7.VAR24; VAR8++)
    {
        VAR12 = &VAR4->VAR23[VAR8];
        VAR12->read = 0;
        if (FUN10(VAR4->VAR18, &VAR12->VAR25, 0, VAR8) == VAR21)
        {
            if (FUN11(VAR12->VAR25, &VAR12->VAR7, sizeof(VAR12->VAR7)) == VAR21)
            {
                if (VAR12->VAR7.VAR26 == VAR27)
                {
                    WAVEFORMATEX VAR28;
                    LONG VAR29 = sizeof(VAR30);
                    if (FUN12(VAR12->VAR25, 0, &VAR28, &VAR29) != VAR21)
                        continue;
                    VAR10 = FUN13(VAR2, NULL);
                    VAR10->VAR8 = VAR8;
                    VAR10->VAR31->VAR32 = VAR33;
                    VAR10->VAR31->VAR34 = VAR28.VAR35;
                    VAR10->VAR31->VAR36 = VAR28.VAR37;
                    VAR10->VAR31->VAR38 = VAR28.VAR39;
                    VAR10->VAR31->VAR40 = VAR28.VAR41 * 8;
                    VAR10->VAR31->VAR42 = VAR28.VAR43;
                    VAR12->VAR44 = VAR28.VAR39 * (VAR45)VAR7.VAR46 / (VAR45)VAR7.VAR47;
                    VAR12->VAR48 = VAR12->VAR44 * VAR28.VAR37 * VAR28.VAR43 / 8;
                    VAR10->VAR31->VAR49 = VAR28.VAR50;
                    VAR10->VAR31->VAR51 = FUN14(VAR28.VAR50, VAR10->VAR31->VAR42);
                }
                else if (VAR12->VAR7.VAR26 == VAR52)
                {
                    BITMAPINFO VAR53;
                    LONG VAR29 = sizeof(VAR54);
                    VAR12->VAR48 = VAR12->VAR7.VAR55;
                    VAR12->VAR44 = 1;
                    if (FUN12(VAR12->VAR25, 0, &VAR53, &VAR29) != VAR21)
                        continue;
                    VAR10 = FUN13(VAR2, NULL);
                    VAR10->VAR8 = VAR8;
                    VAR10->VAR31->VAR32 = VAR56;
                    VAR10->VAR57.VAR58 = VAR12->VAR7.VAR47;
                    VAR10->VAR57.VAR59 = VAR12->VAR7.VAR46;
                    VAR10->VAR31->VAR60 = VAR53.VAR61.VAR62;
                    VAR10->VAR31->VAR63 = VAR53.VAR61.VAR64;
                    VAR10->VAR31->VAR42 = VAR53.VAR61.VAR65;
                    VAR10->VAR31->VAR40 = (VAR45)VAR12->VAR7.VAR55 * (VAR45)VAR12->VAR7.VAR47 * 8 / (VAR45)VAR12->VAR7.VAR46;
                    VAR10->VAR31->VAR49 = VAR53.VAR61.VAR66;
                    VAR10->VAR31->VAR51 = FUN15(VAR67, VAR53.VAR61.VAR66);
                    VAR10->VAR68 = VAR12->VAR7.VAR69;
                }
                else
                {
                    FUN16(VAR12->VAR25);
                    continue;
                }
                VAR4->VAR70++;
                VAR10->VAR31->VAR71 = VAR12->VAR7.VAR72;
                FUN17(VAR10, 64, VAR7.VAR46, VAR7.VAR47);
                VAR10->VAR73 = VAR12->VAR7.VAR74;
            }
        }
    }
    return 0;
}