int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    NVENCSTATUS VAR8;
    CUresult VAR9;
    CUcontext VAR10;
    VAR11 *VAR12, *VAR13;
    int VAR14;
    VAR15 *VAR16 = VAR2->VAR17;
    VAR18 *VAR19 = &VAR16->VAR20;
    VAR21 *VAR22 = &VAR19->VAR23;
    NV_ENC_PIC_PARAMS VAR24 = {0};
    VAR24.VAR25 = VAR26;
    if (VAR6)
    {
        VAR13 = FUN2(VAR16);
        if (!VAR13)
        {
            FUN3(VAR2, VAR27, "");
            return VAR28;
        }
        VAR9 = VAR19->VAR29->FUN4(VAR16->VAR30);
        if (VAR9 != VAR31)
        {
            FUN3(VAR2, VAR27, "");
            return VAR32;
        }
        VAR14 = FUN5(VAR2, VAR6, VAR13);
        VAR9 = VAR19->VAR29->FUN6(&VAR10);
        if (VAR9 != VAR31)
        {
            FUN3(VAR2, VAR27, "");
            return VAR32;
        }
        if (VAR14)
        {
            return VAR14;
        }
        VAR24.VAR33 = VAR13->VAR34;
        VAR24.VAR35 = VAR13->VAR36;
        VAR24.VAR37 = VAR2->VAR38;
        VAR24.VAR39 = VAR2->VAR40;
        VAR24.VAR41 = VAR13->VAR42;
        VAR24.VAR43 = VAR13->VAR44;
        if (VAR2->VAR45 & VAR46)
        {
            if (VAR6->VAR47)
                VAR24.VAR48 = VAR49;
            else
                VAR24.VAR48 = VAR50;
        }
        else
        {
            VAR24.VAR48 = VAR51;
        }
        if (VAR16->VAR52 >= 0 && VAR6->VAR53 == VAR54)
        {
            VAR24.VAR55 = VAR16->VAR52 ? VAR56 : VAR57;
        }
        else
        {
            VAR24.VAR55 = 0;
        }
        VAR24.VAR58 = VAR6->VAR59;
        FUN7(VAR2, &VAR24);
    }
    else
    {
        VAR24.VAR55 = VAR60;
    }
    VAR9 = VAR19->VAR29->FUN4(VAR16->VAR30);
    if (VAR9 != VAR31)
    {
        FUN3(VAR2, VAR27, "");
        return VAR32;
    }
    VAR8 = VAR22->FUN8(VAR16->VAR61, &VAR24);
    VAR9 = VAR19->VAR29->FUN6(&VAR10);
    if (VAR9 != VAR31)
    {
        FUN3(VAR2, VAR27, "");
        return VAR32;
    }
    if (VAR8 != VAR62 && VAR8 != VAR63)
        return FUN9(VAR2, VAR8, "");
    if (VAR6)
    {
        FUN10(VAR16->VAR64, &VAR13, sizeof(VAR13), NULL);
        FUN11(VAR16->VAR65, VAR6->VAR59);
        if (VAR16->VAR66[0] == VAR67)
            VAR16->VAR66[0] = VAR6->VAR59;
        else if (VAR16->VAR66[1] == VAR67)
            VAR16->VAR66[1] = VAR6->VAR59;
    }
    if (VAR8 == VAR62)
    {
        while (FUN12(VAR16->VAR64) > 0)
        {
            FUN13(VAR16->VAR64, &VAR12, sizeof(VAR12), NULL);
            FUN10(VAR16->VAR68, &VAR12, sizeof(VAR12), NULL);
        }
    }
    if (FUN14(VAR2, !VAR6))
    {
        FUN13(VAR16->VAR68, &VAR12, sizeof(VAR12), NULL);
        VAR14 = FUN15(VAR2, VAR4, VAR12);
        if (VAR14)
            return VAR14;
        FUN10(VAR16->VAR69, &VAR12, sizeof(VAR12), NULL);
        *VAR7 = 1;
    }
    else
    {
        *VAR7 = 0;
    }
    return 0;
}