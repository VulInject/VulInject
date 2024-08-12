static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    NVENCSTATUS VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12 = 0;
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = &VAR14->VAR18;
    VAR19 *VAR20 = &VAR17->VAR21;
    NV_ENC_PIC_PARAMS VAR22 = {0};
    VAR22.VAR23 = VAR24;
    if (VAR6)
    {
        NV_ENC_LOCK_INPUT_BUFFER VAR25 = {0};
        VAR26 *VAR27 = NULL;
        for (VAR12 = 0; VAR12 < VAR14->VAR28; ++VAR12)
        {
            if (!VAR14->VAR29[VAR12].VAR30)
            {
                VAR27 = &VAR14->VAR29[VAR12];
                break;
            }
        }
        FUN2(VAR27);
        VAR27->VAR30 = 1;
        VAR25.VAR23 = VAR31;
        VAR25.VAR32 = VAR27->VAR33;
        VAR8 = VAR20->FUN3(VAR14->VAR34, &VAR25);
        if (VAR8 != VAR35)
        {
            FUN4(VAR2, VAR36, "");
            return 0;
        }
        if (VAR2->VAR37 == VAR38)
        {
            VAR39 *VAR40 = VAR25.VAR41;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[0], VAR6->VAR44[0], VAR2->VAR45, VAR2->VAR46);
            VAR40 += VAR27->VAR46 * VAR25.VAR42;
            FUN5(VAR40, VAR25.VAR42 >> 1, VAR6->VAR43[2], VAR6->VAR44[2], VAR2->VAR45 >> 1, VAR2->VAR46 >> 1);
            VAR40 += (VAR27->VAR46 * VAR25.VAR42) >> 2;
            FUN5(VAR40, VAR25.VAR42 >> 1, VAR6->VAR43[1], VAR6->VAR44[1], VAR2->VAR45 >> 1, VAR2->VAR46 >> 1);
        }
        else if (VAR2->VAR37 == VAR47)
        {
            VAR39 *VAR40 = VAR25.VAR41;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[0], VAR6->VAR44[0], VAR2->VAR45, VAR2->VAR46);
            VAR40 += VAR27->VAR46 * VAR25.VAR42;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[1], VAR6->VAR44[1], VAR2->VAR45, VAR2->VAR46 >> 1);
        }
        else if (VAR2->VAR37 == VAR48)
        {
            VAR39 *VAR40 = VAR25.VAR41;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[0], VAR6->VAR44[0], VAR2->VAR45, VAR2->VAR46);
            VAR40 += VAR27->VAR46 * VAR25.VAR42;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[1], VAR6->VAR44[1], VAR2->VAR45, VAR2->VAR46);
            VAR40 += VAR27->VAR46 * VAR25.VAR42;
            FUN5(VAR40, VAR25.VAR42, VAR6->VAR43[2], VAR6->VAR44[2], VAR2->VAR45, VAR2->VAR46);
        }
        else
        {
            FUN4(VAR2, VAR49, "");
            return FUN6(VAR50);
        }
        VAR8 = VAR20->FUN7(VAR14->VAR34, VAR27->VAR33);
        if (VAR8 != VAR35)
        {
            FUN4(VAR2, VAR49, "");
            return VAR51;
        }
        for (VAR12 = 0; VAR12 < VAR14->VAR28; ++VAR12)
            if (!VAR14->VAR52[VAR12].VAR53)
                break;
        if (VAR12 == VAR14->VAR28)
        {
            VAR27->VAR30 = 0;
            FUN4(VAR2, VAR49, "");
            return VAR51;
        }
        VAR14->VAR52[VAR12].VAR33 = VAR27;
        VAR22.VAR32 = VAR27->VAR33;
        VAR22.VAR54 = VAR27->VAR55;
        VAR22.VAR56 = VAR2->VAR45;
        VAR22.VAR57 = VAR2->VAR46;
        VAR22.VAR58 = VAR14->VAR52[VAR12].VAR59;
        VAR22.VAR60 = 0;
        if (VAR2->VAR61 & VAR62)
        {
            if (VAR6->VAR63)
            {
                VAR22.VAR64 = VAR65;
            }
            else
            {
                VAR22.VAR64 = VAR66;
            }
        }
        else
        {
            VAR22.VAR64 = VAR67;
        }
        VAR22.VAR68 = 0;
        VAR22.VAR69 = VAR6->VAR70;
        VAR22.VAR71 = 0;
        switch (VAR2->VAR72->VAR73)
        {
        case VAR74:
            VAR22.VAR75.VAR76.VAR77 = VAR14->VAR78.VAR79.VAR80.VAR77;
            VAR22.VAR75.VAR76.VAR81 = VAR14->VAR78.VAR79.VAR80.VAR81;
            break;
        case VAR82:
            VAR22.VAR75.VAR83.VAR77 = VAR14->VAR78.VAR79.VAR84.VAR77;
            VAR22.VAR75.VAR83.VAR81 = VAR14->VAR78.VAR79.VAR84.VAR81;
            break;
        default:
            FUN4(VAR2, VAR36, "");
            return FUN6(VAR50);
        }
        VAR11 = FUN8(&VAR14->VAR85, VAR6->VAR70);
        if (VAR11)
            return VAR11;
    }
    else
    {
        VAR22.VAR68 = VAR86;
    }
    VAR8 = VAR20->FUN9(VAR14->VAR34, &VAR22);
    if (VAR6 && VAR8 == VAR87)
    {
        VAR11 = FUN10(&VAR14->VAR88, &VAR14->VAR52[VAR12]);
        if (VAR11)
            return VAR11;
        VAR14->VAR52[VAR12].VAR53 = 1;
    }
    if (VAR8 != VAR35 && VAR8 != VAR87)
    {
        FUN4(VAR2, VAR36, "");
        return VAR51;
    }
    if (VAR8 != VAR87)
    {
        while (VAR14->VAR88.VAR89)
        {
            VAR10 = FUN11(&VAR14->VAR88);
            VAR11 = FUN10(&VAR14->VAR90, VAR10);
            if (VAR11)
                return VAR11;
        }
        if (VAR6)
        {
            VAR11 = FUN10(&VAR14->VAR90, &VAR14->VAR52[VAR12]);
            if (VAR11)
                return VAR11;
            VAR14->VAR52[VAR12].VAR53 = 1;
        }
    }
    if (VAR14->VAR90.VAR89 && (!VAR6 || VAR14->VAR90.VAR89 + VAR14->VAR88.VAR89 >= VAR14->VAR91))
    {
        VAR10 = FUN11(&VAR14->VAR90);
        VAR11 = FUN12(VAR2, VAR4, VAR10);
        if (VAR11)
            return VAR11;
        VAR10->VAR53 = 0;
        FUN2(VAR10->VAR33->VAR30);
        VAR10->VAR33->VAR30--;
        *VAR7 = 1;
    }
    else
    {
        *VAR7 = 0;
    }
    return 0;
}