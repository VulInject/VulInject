static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    struct VAR8 *VAR9;
    struct VAR10 *VAR11;
    uint8_t VAR12[VAR13];
    uint32_t VAR14;
    int VAR15 = -1;
    int VAR16 = VAR17;
    if (FUN2(VAR2->VAR18, 0, VAR5->VAR19, VAR13) != VAR13)
        goto VAR20;
    VAR9 = (struct VAR8 *)VAR5->VAR19;
    if (FUN3(VAR9->VAR21, "", 8))
    {
        int64_t VAR22 = FUN4(VAR2->VAR18);
        if (VAR22 < VAR13)
        {
            goto VAR20;
        }
        if (FUN2(VAR2->VAR18, VAR22 - VAR13, VAR5->VAR19, VAR13) != VAR13)
        {
            goto VAR20;
        }
        if (FUN3(VAR9->VAR21, "", 8))
        {
            goto VAR20;
        }
        VAR16 = VAR23;
    }
    VAR14 = FUN5(VAR9->VAR14);
    VAR9->VAR14 = 0;
    if (FUN6(VAR5->VAR19, VAR13) != VAR14)
        fprintf(VAR24, ""
                        "",
                VAR2->VAR25);
    VAR9->VAR14 = FUN5(VAR14);
    VAR2->VAR26 = (VAR27)FUN7(VAR9->VAR28) * VAR9->VAR29 * VAR9->VAR30;
    if (VAR2->VAR26 >= 65535LL * 255 * 255)
    {
        VAR15 = -VAR31;
        goto VAR20;
    }
    if (VAR16 == VAR17)
    {
        if (FUN2(VAR2->VAR18, FUN8(VAR9->VAR32), VAR12, VAR13) != VAR13)
        {
            goto VAR20;
        }
        VAR11 = (struct VAR10 *)VAR12;
        if (FUN3(VAR11->VAR33, "", 8))
        {
            goto VAR20;
        }
        VAR5->VAR34 = FUN5(VAR11->VAR34);
        VAR5->VAR35 = ((VAR5->VAR34 / (8 * 512)) + 511) & ~511;
        VAR5->VAR36 = FUN5(VAR11->VAR36);
        VAR5->VAR37 = FUN9(VAR5->VAR36 * 4);
        VAR5->VAR38 = FUN8(VAR11->VAR39);
        if (FUN2(VAR2->VAR18, VAR5->VAR38, VAR5->VAR37, VAR5->VAR36 * 4) != VAR5->VAR36 * 4)
        {
            goto VAR20;
        }
        VAR5->VAR40 = (VAR5->VAR38 + (VAR5->VAR36 * 4) + 511) & ~511;
        for (VAR7 = 0; VAR7 < VAR5->VAR36; VAR7++)
        {
            FUN10(&VAR5->VAR37[VAR7]);
            if (VAR5->VAR37[VAR7] != 0xFFFFFFFF)
            {
                int64_t VAR41 = (512 * (VAR27)VAR5->VAR37[VAR7]) + VAR5->VAR35 + VAR5->VAR34;
                if (VAR41 > VAR5->VAR40)
                {
                    VAR5->VAR40 = VAR41;
                }
            }
        }
        VAR5->VAR42 = (VAR27)-1;
        VAR5->VAR43 = FUN9(512);
        VAR5->VAR44 = VAR5->VAR43;
        VAR5->VAR45 = VAR5->VAR43;
        VAR5->VAR46 = -1;
    }
    FUN11(&VAR5->VAR47);
    FUN12(&VAR5->VAR48, VAR49, "", VAR2->VAR50, "");
    FUN13(VAR5->VAR48);
    return 0;
VAR20:
    return VAR15;
}