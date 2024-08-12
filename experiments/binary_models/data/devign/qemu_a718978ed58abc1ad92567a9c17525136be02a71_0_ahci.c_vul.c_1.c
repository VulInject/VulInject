static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int32_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    uint16_t VAR9 = FUN2(VAR7->VAR9);
    uint16_t VAR10 = FUN2(VAR7->VAR10);
    uint64_t VAR11 = FUN3(VAR7->VAR12);
    uint64_t VAR13 = VAR11 + 0x80;
    dma_addr_t VAR14 = (VAR10 * sizeof(VAR15));
    dma_addr_t VAR16 = VAR14;
    VAR17 *VAR18;
    int VAR19;
    int VAR20 = 0;
    uint64_t VAR21 = 0;
    int VAR22 = -1;
    int64_t VAR23 = -1;
    int VAR24;
    VAR25 *VAR26 = &VAR2->VAR27;
    VAR28 *VAR29 = FUN4(VAR26);
    if (!VAR10)
    {
        FUN5(VAR2->VAR30, "", VAR9);
        return -1;
    }
    if (!(VAR18 = FUN6(VAR2->VAR31->VAR32, VAR13, &VAR14, VAR33)))
    {
        FUN5(VAR2->VAR30, "");
        return -1;
    }
    if (VAR14 < VAR16)
    {
        FUN5(VAR2->VAR30, "");
        VAR20 = -1;
        goto VAR34;
    }
    if (VAR10 > 0)
    {
        VAR15 *VAR35 = (VAR15 *)VAR18;
        VAR21 = 0;
        for (VAR19 = 0; VAR19 < VAR10; VAR19++)
        {
            VAR24 = FUN7(&VAR35[VAR19]);
            if (VAR5 <= (VAR21 + VAR24))
            {
                VAR22 = VAR19;
                VAR23 = VAR5 - VAR21;
                break;
            }
            VAR21 += VAR24;
        }
        if ((VAR22 == -1) || (VAR23 < 0) || (VAR23 > VAR24))
        {
            FUN5(VAR2->VAR30, ""
                                 "" VAR36 "",
                    VAR37, VAR22, VAR23);
            VAR20 = -1;
            goto VAR34;
        }
        FUN8(VAR4, VAR29->VAR38, (VAR10 - VAR22), VAR2->VAR31->VAR32);
        FUN9(VAR4, FUN3(VAR35[VAR22].VAR39) + VAR23, FUN7(&VAR35[VAR22]) - VAR23);
        for (VAR19 = VAR22 + 1; VAR19 < VAR10; VAR19++)
        {
            FUN9(VAR4, FUN3(VAR35[VAR19].VAR39), FUN7(&VAR35[VAR19]));
            if (VAR4->VAR40 > VAR41)
            {
                FUN10(""
                             "");
                FUN11(VAR4);
                VAR20 = -1;
                goto VAR34;
            }
        }
    }
VAR34:
    FUN12(VAR2->VAR31->VAR32, VAR18, VAR14, VAR33, VAR14);
    return VAR20;
}