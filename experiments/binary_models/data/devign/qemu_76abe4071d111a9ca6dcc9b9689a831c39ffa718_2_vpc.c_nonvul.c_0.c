static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    uint8_t VAR16[VAR17];
    uint32_t VAR18;
    int VAR19 = VAR20;
    int VAR21;
    VAR21 = FUN2(VAR2->VAR22, 0, VAR9->VAR23, VAR17);
    if (VAR21 < 0)
    {
        goto VAR24;
    }
    VAR13 = (VAR12 *)VAR9->VAR23;
    if (FUN3(VAR13->VAR25, "", 8))
    {
        int64_t VAR26 = FUN4(VAR2->VAR22);
        if (VAR26 < 0)
        {
            VAR21 = VAR26;
            goto VAR24;
        }
        else if (VAR26 < VAR17)
        {
            VAR21 = -VAR27;
            goto VAR24;
        }
        VAR21 = FUN2(VAR2->VAR22, VAR26 - VAR17, VAR9->VAR23, VAR17);
        if (VAR21 < 0)
        {
            goto VAR24;
        }
        if (FUN3(VAR13->VAR25, "", 8))
        {
            FUN5(VAR7, "");
            VAR21 = -VAR27;
            goto VAR24;
        }
        VAR19 = VAR28;
    }
    VAR18 = FUN6(VAR13->VAR18);
    VAR13->VAR18 = 0;
    if (FUN7(VAR9->VAR23, VAR17) != VAR18)
        fprintf(VAR29, ""
                        "",
                VAR2->VAR30);
    VAR13->VAR18 = FUN6(VAR18);
    VAR2->VAR31 = (VAR32)FUN8(VAR13->VAR33) * VAR13->VAR34 * VAR13->VAR35;
    if (!FUN3(VAR13->VAR36, "", 4))
    {
        VAR2->VAR31 = FUN9(VAR13->VAR37) / VAR38;
    }
    if (VAR2->VAR31 >= 65535LL * 255 * 255)
    {
        VAR21 = -VAR39;
        goto VAR24;
    }
    if (VAR19 == VAR20)
    {
        VAR21 = FUN2(VAR2->VAR22, FUN9(VAR13->VAR40), VAR16, VAR17);
        if (VAR21 < 0)
        {
            goto VAR24;
        }
        VAR15 = (VAR14 *)VAR16;
        if (FUN3(VAR15->VAR41, "", 8))
        {
            VAR21 = -VAR27;
            goto VAR24;
        }
        VAR9->VAR42 = FUN6(VAR15->VAR42);
        VAR9->VAR43 = ((VAR9->VAR42 / (8 * 512)) + 511) & ~511;
        VAR9->VAR44 = FUN6(VAR15->VAR44);
        VAR9->VAR45 = FUN10(VAR9->VAR44 * 4);
        VAR9->VAR46 = FUN9(VAR15->VAR47);
        VAR21 = FUN2(VAR2->VAR22, VAR9->VAR46, VAR9->VAR45, VAR9->VAR44 * 4);
        if (VAR21 < 0)
        {
            goto VAR24;
        }
        VAR9->VAR48 = (VAR9->VAR46 + (VAR9->VAR44 * 4) + 511) & ~511;
        for (VAR11 = 0; VAR11 < VAR9->VAR44; VAR11++)
        {
            FUN11(&VAR9->VAR45[VAR11]);
            if (VAR9->VAR45[VAR11] != 0xFFFFFFFF)
            {
                int64_t VAR49 = (512 * (VAR32)VAR9->VAR45[VAR11]) + VAR9->VAR43 + VAR9->VAR42;
                if (VAR49 > VAR9->VAR48)
                {
                    VAR9->VAR48 = VAR49;
                }
            }
        }
        if (VAR9->VAR48 > FUN4(VAR2->VAR22))
        {
            FUN5(VAR7, ""
                             "");
            VAR21 = -VAR27;
            goto VAR24;
        }
        VAR9->VAR50 = (VAR32)-1;
        VAR9->VAR51 = FUN10(512);
        VAR9->VAR52 = VAR9->VAR51;
        VAR9->VAR53 = VAR9->VAR51;
        VAR9->VAR54 = -1;
    }
    FUN12(&VAR9->VAR55);
    FUN13(&VAR9->VAR56, VAR57, "", VAR2->VAR58, "");
    FUN14(VAR9->VAR56);
    return 0;
VAR24:
    FUN15(VAR9->VAR45);
    FUN15(VAR9->VAR51);
    return VAR21;
}