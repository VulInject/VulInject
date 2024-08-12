static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    unsigned int VAR12;
    VAR3 *VAR13;
    uint8_t VAR14 = (VAR9->VAR15 + 7) >> 3;
    VAR16 *VAR17, *VAR18;
    VAR16 *VAR19 = 0, *VAR20;
    uint32_t VAR21;
    VAR16 *VAR22;
    size_t VAR23 = VAR24;
    APNGFctlChunk VAR25 = *VAR7;
    APNGFctlChunk VAR26 = *VAR6;
    if (VAR2->VAR27 == 0)
    {
        VAR6->VAR28 = VAR4->VAR28;
        VAR6->VAR29 = VAR4->VAR29;
        VAR6->VAR30 = 0;
        VAR6->VAR31 = 0;
        VAR6->VAR32 = VAR33;
        return FUN2(VAR2, VAR4);
    }
    VAR13 = FUN3();
    if (!VAR13)
        return FUN4(VAR34);
    VAR13->VAR35 = VAR4->VAR35;
    VAR13->VAR28 = VAR4->VAR28;
    VAR13->VAR29 = VAR4->VAR29;
    if ((VAR11 = FUN5(VAR13, 32)) < 0)
        goto VAR36;
    VAR17 = VAR9->VAR37;
    VAR18 = VAR9->VAR38;
    VAR19 = FUN6(VAR18 - VAR17);
    VAR20 = VAR19 + (VAR18 - VAR17);
    if (!VAR19)
    {
        VAR11 = FUN4(VAR34);
        goto VAR36;
    }
    for (VAR25.VAR39 = 0; VAR25.VAR39 < 3; ++VAR25.VAR39)
    {
        for (VAR26.VAR32 = 0; VAR26.VAR32 < 2; ++VAR26.VAR32)
        {
            uint32_t VAR40 = VAR9->VAR41, VAR41;
            VAR16 *VAR42 = VAR9->VAR37;
            size_t VAR43;
            if (VAR25.VAR39 != VAR44)
            {
                VAR13->VAR28 = VAR4->VAR28;
                VAR13->VAR29 = VAR4->VAR29;
                VAR11 = FUN7(VAR13, VAR9->VAR45);
                if (VAR11 < 0)
                    goto VAR36;
                if (VAR25.VAR39 == VAR46)
                {
                    for (VAR12 = VAR25.VAR31; VAR12 < VAR25.VAR31 + VAR25.VAR29; ++VAR12)
                    {
                        size_t VAR47 = VAR13->VAR48[0] * VAR12 + VAR14 * VAR25.VAR30;
                        memset(VAR13->VAR49[0] + VAR47, 0, VAR14 * VAR25.VAR28);
                    }
                }
            }
            else
            {
                if (!VAR9->VAR50)
                    continue;
                VAR13->VAR28 = VAR4->VAR28;
                VAR13->VAR29 = VAR4->VAR29;
                VAR11 = FUN7(VAR13, VAR9->VAR50);
                if (VAR11 < 0)
                    goto VAR36;
            }
            if (FUN8(VAR13, VAR4, &VAR26, VAR14) < 0)
                continue;
            VAR11 = FUN2(VAR2, VAR13);
            VAR41 = VAR9->VAR41;
            VAR9->VAR41 = VAR40;
            VAR43 = VAR9->VAR37 - VAR42;
            VAR9->VAR37 = VAR42;
            if (VAR11 < 0)
                goto VAR36;
            if (VAR43 < VAR23)
            {
                *VAR6 = VAR26;
                *VAR7 = VAR25;
                VAR21 = VAR41;
                VAR22 = VAR9->VAR37;
                VAR23 = VAR43;
                if (VAR22 == VAR17)
                {
                    VAR9->VAR37 = VAR19;
                    VAR9->VAR38 = VAR20;
                }
                else
                {
                    VAR9->VAR37 = VAR17;
                    VAR9->VAR38 = VAR18;
                }
            }
        }
    }
    VAR9->VAR41 = VAR21;
    VAR9->VAR37 = VAR17 + VAR23;
    VAR9->VAR38 = VAR18;
    if (VAR22 != VAR17)
        memcpy(VAR17, VAR22, VAR23);
    VAR11 = 0;
VAR36:
    FUN9(&VAR19);
    FUN10(&VAR13);
    return VAR11;
}