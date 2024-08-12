static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int64_t VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    VAR13 *VAR14, VAR15;
    int VAR16, VAR17, VAR18, VAR19;
    VAR17 = VAR11->VAR17 * sizeof(VAR13);
    VAR14 = FUN2(VAR17);
    if (FUN3(VAR2->VAR20, VAR8, VAR14, VAR17) != VAR17)
        goto VAR21;
    for (VAR16 = 0; VAR16 < VAR11->VAR17; VAR16++)
    {
        VAR15 = FUN4(VAR14[VAR16]);
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
            VAR18 = ((VAR15 >> VAR11->VAR28) & VAR11->VAR29) + 1;
            VAR15 &= VAR11->VAR30;
            FUN6(VAR2, VAR4, VAR6, VAR7, VAR15 & ~511, VAR18 * 512);
            break;
        case VAR31:
            if ((VAR15 & VAR32) == 0)
            {
                break;
            }
        case VAR33:
        {
            uint64_t VAR34 = VAR15 & VAR32;
            if (VAR9 & VAR35)
            {
                VAR19 = FUN7(VAR2, VAR34 >> VAR11->VAR26);
                if (VAR19 < 0)
                {
                    fprintf(VAR24, "" VAR36 "", VAR15, strerror(-VAR19));
                    goto VAR21;
                }
                if ((VAR19 == 1) != ((VAR15 & VAR23) != 0))
                {
                    fprintf(VAR24, "" VAR36 "", VAR15, VAR19);
                    VAR4->VAR27++;
                }
            }
            FUN6(VAR2, VAR4, VAR6, VAR7, VAR34, VAR11->VAR37);
            if (VAR34 & (VAR11->VAR37 - 1))
            {
                fprintf(VAR24, "" VAR36 ""
                                "",
                        VAR34);
                VAR4->VAR27++;
            }
            break;
        }
        case VAR38:
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
    return -VAR39;
}