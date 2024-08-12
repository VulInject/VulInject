static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9 = NULL, *VAR10;
    unsigned int VAR11;
    unsigned char *VAR12;
    int VAR13;
    int64_t VAR14;
    int VAR15, VAR16;
    unsigned int VAR17;
    int64_t VAR18 = 0;
    unsigned char VAR19[VAR20];
    int VAR21, VAR22;
    int VAR23;
    FUN2(VAR7, 0, VAR24);
    if (FUN3(VAR7, VAR4->VAR25, VAR26) != VAR26)
        return FUN4(VAR27);
    if (VAR4->VAR25[24] == '' && VAR4->VAR25[25] == '' && VAR4->VAR25[26] == '')
        VAR4->VAR28 = 1;
    else
        VAR4->VAR28 = 0;
    VAR10 = FUN5(VAR2, NULL);
    if (!VAR10)
        return FUN4(VAR29);
    FUN6(VAR10, 33, 1, 10);
    VAR4->VAR30 = VAR10->VAR31;
    VAR10->VAR32->VAR33 = VAR34;
    VAR10->VAR32->VAR35 = VAR4->VAR28 ? VAR36 : VAR37;
    VAR10->VAR32->VAR38 = 0;
    VAR10->VAR32->VAR39 = FUN7(&VAR4->VAR25[12]);
    VAR10->VAR32->VAR40 = FUN7(&VAR4->VAR25[14]);
    if (VAR4->VAR28 && VAR10->VAR32->VAR39 > 320)
    {
        VAR10->VAR32->VAR39 >>= 1;
        VAR10->VAR32->VAR40 >>= 1;
    }
    VAR10->VAR32->VAR41 = VAR26;
    VAR10->VAR32->VAR42 = FUN8(VAR26 + VAR43);
    memcpy(VAR10->VAR32->VAR42, VAR4->VAR25, VAR26);
    VAR4->VAR44 = FUN7(&VAR4->VAR25[804]);
    if (VAR4->VAR44)
    {
        VAR9 = FUN5(VAR2, NULL);
        if (!VAR9)
            return FUN4(VAR29);
        VAR4->VAR45 = VAR9->VAR31;
        VAR9->VAR32->VAR33 = VAR46;
        VAR9->VAR32->VAR35 = VAR47;
        VAR9->VAR32->VAR38 = 0;
        if (VAR4->VAR25[811] & 0x80)
        {
            VAR9->VAR32->VAR48 = 2;
            VAR9->VAR32->VAR49 = VAR50;
        }
        else
        {
            VAR9->VAR32->VAR48 = 1;
            VAR9->VAR32->VAR49 = VAR51;
        }
        VAR9->VAR32->VAR44 = VAR4->VAR44;
        VAR9->VAR32->VAR52 = FUN7(&VAR4->VAR25[806]);
        if (VAR9->VAR32->VAR52 & 0x8000)
        {
            VAR9->VAR32->VAR53 = 16;
            VAR9->VAR32->VAR52 = -(VAR9->VAR32->VAR52 - 0x10000);
        }
        else
        {
            VAR9->VAR32->VAR53 = 8;
        }
        VAR9->VAR32->VAR54 = VAR9->VAR32->VAR44 * VAR9->VAR32->VAR53 * VAR9->VAR32->VAR48;
        VAR21 = VAR9->VAR32->VAR52;
        VAR22 = VAR9->VAR32->VAR44 * VAR9->VAR32->VAR48;
        FUN9(&VAR22, &VAR21, VAR22, VAR21, (1UL << 31) - 1);
        FUN6(VAR10, 33, VAR21, VAR22);
        FUN6(VAR9, 33, VAR21, VAR22);
    }
    VAR11 = FUN10(&VAR4->VAR25[812]);
    VAR4->VAR55 = FUN7(&VAR4->VAR25[6]);
    VAR4->VAR56 = FUN7(&VAR4->VAR25[18]);
    FUN2(VAR7, VAR11, VAR24);
    VAR12 = NULL;
    VAR4->VAR57 = NULL;
    VAR23 = FUN7(&VAR4->VAR25[808]);
    VAR13 = VAR4->VAR55 * 6;
    if (VAR4->VAR55 * VAR4->VAR56 >= VAR58 / sizeof(VAR59) - VAR23)
    {
        FUN11(VAR2, VAR60, "");
        return -1;
    }
    VAR12 = FUN12(VAR13);
    VAR4->VAR57 = FUN12((VAR4->VAR55 * VAR4->VAR56 + VAR23) * sizeof(VAR59));
    if (!VAR12 || !VAR4->VAR57)
    {
        FUN13(VAR12);
        FUN13(VAR4->VAR57);
        return FUN4(VAR29);
    }
    if (FUN3(VAR7, VAR12, VAR13) != VAR13)
    {
        FUN13(VAR12);
        FUN13(VAR4->VAR57);
        return FUN4(VAR27);
    }
    VAR17 = 0;
    for (VAR15 = 0; VAR15 < VAR4->VAR55; VAR15++)
    {
        VAR14 = FUN10(&VAR12[6 * VAR15 + 2]);
        for (VAR16 = 0; VAR16 < VAR4->VAR56; VAR16++)
        {
            int VAR61;
            uint32_t VAR62;
            FUN3(VAR7, VAR19, VAR20);
            VAR61 = VAR19[0];
            VAR62 = FUN10(&VAR19[2]);
            if (!VAR62 && VAR61 != 1)
                continue;
            switch (VAR61)
            {
            case 1:
                if (!VAR9)
                    break;
                VAR4->VAR57[VAR17].VAR63 = VAR14;
                VAR4->VAR57[VAR17].VAR64 = VAR4->VAR45;
                VAR4->VAR57[VAR17].VAR65 = VAR62;
                memcpy(VAR4->VAR57[VAR17].VAR66, VAR19, VAR20);
                VAR4->VAR57[VAR17].VAR67 = VAR18;
                VAR17++;
                if (!VAR18)
                    VAR18 += VAR23 - 1;
                else
                    VAR18++;
                break;
            case 2:
                VAR4->VAR57[VAR17].VAR63 = VAR14;
                VAR4->VAR57[VAR17].VAR64 = VAR4->VAR30;
                VAR4->VAR57[VAR17].VAR65 = VAR62;
                memcpy(VAR4->VAR57[VAR17].VAR66, VAR19, VAR20);
                VAR4->VAR57[VAR17].VAR67 = VAR15;
                VAR17++;
                break;
            }
            VAR14 += VAR62;
        }
    }
    FUN13(VAR12);
    VAR4->VAR68 = 0;
    VAR4->VAR55 = VAR17;
    return 0;
}