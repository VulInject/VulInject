static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8, int64_t VAR9, int VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15, VAR16;
    uint64_t VAR17 = 0;
    int VAR18, VAR19, VAR20, VAR21;
    VAR19 = VAR12->VAR19 * sizeof(VAR14);
    VAR15 = FUN2(VAR19);
    VAR21 = FUN3(VAR2->VAR22, VAR9, VAR15, VAR19);
    if (VAR21 < 0)
    {
        fprintf(VAR23, "");
        VAR4->VAR24++;
        goto VAR25;
    }
    for (VAR18 = 0; VAR18 < VAR12->VAR19; VAR18++)
    {
        VAR16 = FUN4(VAR15[VAR18]);
        switch (FUN5(VAR16))
        {
        case VAR26:
            if (VAR16 & VAR27)
            {
                fprintf(VAR23, "" VAR28 ""
                                ""
                                "",
                        VAR16 >> VAR12->VAR29);
                VAR16 &= ~VAR27;
                VAR4->VAR30++;
            }
            VAR20 = ((VAR16 >> VAR12->VAR31) & VAR12->VAR32) + 1;
            VAR16 &= VAR12->VAR33;
            VAR21 = FUN6(VAR2, VAR4, VAR6, VAR8, VAR16 & ~511, VAR20 * 512);
            if (VAR21 < 0)
            {
                goto VAR25;
            }
            if (VAR10 & VAR34)
            {
                VAR4->VAR35.VAR36++;
                VAR4->VAR35.VAR37++;
                VAR4->VAR35.VAR38++;
            }
            break;
        case VAR39:
            if ((VAR16 & VAR40) == 0)
            {
                break;
            }
        case VAR41:
        {
            uint64_t VAR42 = VAR16 & VAR40;
            if (VAR10 & VAR34)
            {
                VAR4->VAR35.VAR36++;
                if (VAR17 && VAR42 != VAR17)
                {
                    VAR4->VAR35.VAR38++;
                }
                VAR17 = VAR42 + VAR12->VAR43;
            }
            VAR21 = FUN6(VAR2, VAR4, VAR6, VAR8, VAR42, VAR12->VAR43);
            if (VAR21 < 0)
            {
                goto VAR25;
            }
            if (FUN7(VAR12, VAR42))
            {
                fprintf(VAR23, "" VAR44 ""
                                "",
                        VAR42);
                VAR4->VAR30++;
            }
            break;
        }
        case VAR45:
            break;
        default:
            FUN8();
        }
    }
    FUN9(VAR15);
    return 0;
VAR25:
    FUN9(VAR15);
    return VAR21;
}