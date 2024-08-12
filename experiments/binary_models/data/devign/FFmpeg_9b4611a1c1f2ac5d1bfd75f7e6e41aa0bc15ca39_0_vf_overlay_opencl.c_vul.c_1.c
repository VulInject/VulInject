static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8[0];
    VAR9 *VAR10 = VAR4->VAR11;
    VAR12 *VAR13, *VAR14;
    VAR12 *VAR15;
    cl_mem VAR16;
    cl_int VAR17, VAR18, VAR19;
    size_t VAR20[2];
    int VAR21 = 0;
    int VAR22, VAR23;
    VAR22 = FUN2(VAR2, 0, &VAR13, 0);
    if (VAR22 < 0)
        return VAR22;
    VAR22 = FUN2(VAR2, 1, &VAR14, 0);
    if (VAR22 < 0)
        return VAR22;
    if (!VAR10->VAR24)
    {
        VAR25 *VAR26 = (VAR25 *)VAR13->VAR27->VAR28;
        VAR25 *VAR29 = (VAR25 *)VAR14->VAR27->VAR28;
        VAR22 = FUN3(VAR4, VAR26->VAR30, VAR29->VAR30);
        if (VAR22 < 0)
            return VAR22;
    }
    VAR15 = FUN4(VAR7, VAR7->VAR31, VAR7->VAR32);
    if (!VAR15)
    {
        VAR22 = FUN5(VAR33);
        goto VAR34;
    }
    for (VAR23 = 0; VAR23 < VAR10->VAR35; VAR23++)
    {
        VAR21 = 0;
        VAR16 = (VAR36)VAR15->VAR28[VAR23];
        VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR36), &VAR16);
        if (VAR17 != VAR38)
            goto VAR39;
        VAR16 = (VAR36)VAR13->VAR28[VAR23];
        VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR36), &VAR16);
        if (VAR17 != VAR38)
            goto VAR39;
        VAR16 = (VAR36)VAR14->VAR28[VAR23];
        VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR36), &VAR16);
        if (VAR17 != VAR38)
            goto VAR39;
        if (VAR10->VAR40)
        {
            VAR16 = (VAR36)VAR14->VAR28[VAR10->VAR35];
            VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR36), &VAR16);
            if (VAR17 != VAR38)
                goto VAR39;
        }
        VAR18 = VAR10->VAR41 / (VAR23 == 0 ? 1 : VAR10->VAR42);
        VAR19 = VAR10->VAR43 / (VAR23 == 0 ? 1 : VAR10->VAR44);
        VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR45), &VAR18);
        if (VAR17 != VAR38)
            goto VAR39;
        VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR45), &VAR19);
        if (VAR17 != VAR38)
            goto VAR39;
        if (VAR10->VAR40)
        {
            cl_int VAR46 = VAR23 == 0 ? 1 : VAR10->VAR42;
            cl_int VAR47 = VAR23 == 0 ? 1 : VAR10->VAR44;
            VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR45), &VAR46);
            if (VAR17 != VAR38)
                goto VAR39;
            VAR17 = FUN6(VAR10->VAR37, VAR21++, sizeof(VAR45), &VAR47);
            if (VAR17 != VAR38)
                goto VAR39;
        }
        VAR20[0] = VAR15->VAR48;
        VAR20[1] = VAR15->VAR49;
        VAR17 = FUN7(VAR10->VAR50, VAR10->VAR37, 2, NULL, VAR20, NULL, 0, NULL, NULL);
        if (VAR17 != VAR38)
        {
            FUN8(VAR4, VAR51, ""
                                        "",
                   VAR17, VAR23);
            VAR22 = FUN5(VAR52);
            goto VAR34;
        }
    }
    VAR17 = FUN9(VAR10->VAR50);
    if (VAR17 != VAR38)
    {
        FUN8(VAR4, VAR51, ""
                                    "",
               VAR17);
        VAR22 = FUN5(VAR52);
        goto VAR34;
    }
    VAR22 = FUN10(VAR15, VAR13);
    FUN8(VAR4, VAR53, "" VAR54 "", FUN11(VAR15->VAR55), VAR15->VAR48, VAR15->VAR49, VAR15->VAR56);
    return FUN12(VAR7, VAR15);
VAR39:
    FUN8(VAR4, VAR51, "", VAR21, VAR17);
    VAR22 = FUN5(VAR52);
VAR34:
    return VAR22;