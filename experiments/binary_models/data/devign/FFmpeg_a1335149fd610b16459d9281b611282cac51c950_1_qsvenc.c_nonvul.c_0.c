int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const VAR7 *VAR8, int *VAR9)
{
    int VAR10;
    VAR10 = FUN2(VAR2, VAR4, VAR8);
    if (VAR10 < 0)
        return VAR10;
    if (!FUN3(VAR4->VAR11) || (!VAR8 && FUN4(VAR4->VAR11)))
    {
        AVPacket VAR12;
        VAR13 *VAR14;
        VAR15 *VAR16;
        FUN5(VAR4->VAR11, &VAR12, sizeof(VAR12), NULL);
        FUN5(VAR4->VAR11, &VAR16, sizeof(VAR16), NULL);
        FUN5(VAR4->VAR11, &VAR14, sizeof(VAR14), NULL);
        do
        {
            VAR10 = FUN6(VAR4->VAR17, *VAR16, 1000);
        } while (VAR10 == VAR18);
        VAR12.VAR19 = FUN7(VAR14->VAR20, (VAR21){1, 90000}, VAR2->VAR22);
        VAR12.VAR23 = FUN7(VAR14->VAR24, (VAR21){1, 90000}, VAR2->VAR22);
        VAR12.VAR25 = VAR14->VAR26;
        if (VAR14->VAR27 & VAR28 || VAR14->VAR27 & VAR29)
            VAR12.VAR30 |= VAR31;
        FF_DISABLE_DEPRECATION_WARNINGS if (VAR14->VAR27 & VAR32 || VAR14->VAR27 & VAR33) VAR2->VAR34->VAR35 = VAR36;
        else if (VAR14->VAR27 & VAR37 || VAR14->VAR27 & VAR38) VAR2->VAR34->VAR35 = VAR39;
        else if (VAR14->VAR27 & VAR40 || VAR14->VAR27 & VAR41) VAR2->VAR34->VAR35 = VAR42;
        VAR43 FUN8(&VAR14);
        FUN8(&VAR16);
        if (VAR6->VAR44)
        {
            if (VAR6->VAR25 < VAR12.VAR25)
            {
                FUN9(VAR2, VAR45, "", VAR6->VAR25, VAR12.VAR25);
                FUN10(&VAR12);
                return FUN11(VAR46);
            }
            memcpy(VAR6->VAR44, VAR12.VAR44, VAR12.VAR25);
            VAR6->VAR25 = VAR12.VAR25;
            VAR10 = FUN12(VAR6, &VAR12);
            FUN10(&VAR12);
            if (VAR10 < 0)
                return VAR10;
        }
        else
            *VAR6 = VAR12;
        *VAR9 = 1;
    }
    return 0;
}