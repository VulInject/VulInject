static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int64_t VAR7, int64_t VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14, VAR15;
    uint64_t VAR16 = 0;
    int VAR17, VAR18, VAR19;
    VAR18 = VAR11->VAR18 * sizeof(VAR13);
    VAR14 = FUN2(VAR18);
    if (FUN3(VAR2->VAR20, VAR8, VAR14, VAR18) != VAR18)
        goto VAR21;
    for (VAR17 = 0; VAR17 < VAR11->VAR18; VAR17++)
    {
        VAR15 = FUN4(VAR14[VAR17]);
        switch (FUN5(VAR15))
        {
        case VAR22:
            if (VAR15 & VAR23)
            {
                fprintf(VAR24, "" VAR25 ""
                                ""
                                "",
                        VAR15 >> VAR11->VAR26);
                VAR15 &= ~VAR23;
                VAR4->VAR27++;
            }
            VAR19 = ((VAR15 >> VAR11->VAR28) & VAR11->VAR29) + 1;
            VAR15 &= VAR11->VAR30;
            FUN6(VAR2, VAR4, VAR6, VAR7, VAR15 & ~511, VAR19 * 512);
            if (VAR9 & VAR31)
            {
                VAR4->VAR32.VAR33++;
                VAR4->VAR32.VAR34++;
                VAR4->VAR32.VAR35++;
            }
            break;
        case VAR36:
            if ((VAR15 & VAR37) == 0)
            {
                break;
            }
        case VAR38:
        {
            uint64_t VAR39 = VAR15 & VAR37;
            if (VAR9 & VAR31)
            {
                VAR4->VAR32.VAR33++;
                if (VAR16 && VAR39 != VAR16)
                {
                    VAR4->VAR32.VAR35++;
                }
                VAR16 = VAR39 + VAR11->VAR40;
            }
            FUN6(VAR2, VAR4, VAR6, VAR7, VAR39, VAR11->VAR40);
            if (FUN7(VAR11, VAR39))
            {
                fprintf(VAR24, "" VAR41 ""
                                "",
                        VAR39);
                VAR4->VAR27++;
            }
            break;
        }
        case VAR42:
            break;
        default:
            FUN8();
        }
    }
    FUN9(VAR14);
    return 0;
VAR21:
    fprintf(VAR24, "");
    FUN9(VAR14);
    return -VAR43;
}