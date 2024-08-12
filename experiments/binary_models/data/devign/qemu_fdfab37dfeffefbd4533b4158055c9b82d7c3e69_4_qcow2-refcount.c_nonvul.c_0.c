static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void **VAR5, VAR6 *VAR7, int64_t VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14, VAR15;
    uint64_t VAR16 = 0;
    int VAR17, VAR18, VAR19, VAR20;
    VAR18 = VAR11->VAR18 * sizeof(VAR13);
    VAR14 = FUN2(VAR18);
    VAR20 = FUN3(VAR2->VAR21, VAR8, VAR14, VAR18);
    if (VAR20 < 0)
    {
        fprintf(VAR22, "");
        VAR4->VAR23++;
        goto VAR24;
    }
    for (VAR17 = 0; VAR17 < VAR11->VAR18; VAR17++)
    {
        VAR15 = FUN4(VAR14[VAR17]);
        switch (FUN5(VAR15))
        {
        case VAR25:
            if (VAR15 & VAR26)
            {
                fprintf(VAR22, "" VAR27 ""
                                ""
                                "",
                        VAR15 >> VAR11->VAR28);
                VAR15 &= ~VAR26;
                VAR4->VAR29++;
            }
            VAR19 = ((VAR15 >> VAR11->VAR30) & VAR11->VAR31) + 1;
            VAR15 &= VAR11->VAR32;
            VAR20 = FUN6(VAR2, VAR4, VAR5, VAR7, VAR15 & ~511, VAR19 * 512);
            if (VAR20 < 0)
            {
                goto VAR24;
            }
            if (VAR9 & VAR33)
            {
                VAR4->VAR34.VAR35++;
                VAR4->VAR34.VAR36++;
                VAR4->VAR34.VAR37++;
            }
            break;
        case VAR38:
        case VAR39:
        {
            uint64_t VAR40 = VAR15 & VAR41;
            if (VAR9 & VAR33)
            {
                VAR4->VAR34.VAR35++;
                if (VAR16 && VAR40 != VAR16)
                {
                    VAR4->VAR34.VAR37++;
                }
                VAR16 = VAR40 + VAR11->VAR42;
            }
            VAR20 = FUN6(VAR2, VAR4, VAR5, VAR7, VAR40, VAR11->VAR42);
            if (VAR20 < 0)
            {
                goto VAR24;
            }
            if (FUN7(VAR11, VAR40))
            {
                fprintf(VAR22, "" VAR43 ""
                                "",
                        VAR40);
                VAR4->VAR29++;
            }
            break;
        }
        case VAR44:
        case VAR45:
            break;
        default:
            FUN8();
        }
    }
    FUN9(VAR14);
    return 0;
VAR24:
    FUN9(VAR14);
    return VAR20;
}