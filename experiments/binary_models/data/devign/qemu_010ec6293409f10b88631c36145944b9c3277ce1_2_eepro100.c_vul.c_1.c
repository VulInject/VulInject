static void FUN1(VAR1 *VAR2)
{
    for (;;)
    {
        bool VAR3;
        bool VAR4;
        bool VAR5;
        bool VAR6;
        uint16_t VAR7 = VAR8;
        VAR2->VAR9 = VAR2->VAR10 + VAR2->VAR11;
        FUN2(VAR2);
        VAR3 = ((VAR2->VAR12.VAR13 & VAR14) != 0);
        VAR4 = ((VAR2->VAR12.VAR13 & VAR15) != 0);
        VAR5 = ((VAR2->VAR12.VAR13 & VAR16) != 0);
        VAR6 = ((VAR2->VAR12.VAR13 & VAR17) != 0);
        bool VAR18 = ((VAR2->VAR12.VAR13 & VAR19) != 0);
        VAR2->VAR11 = VAR2->VAR12.VAR20;
        FUN3(VAR21, FUN4("", VAR2->VAR12.VAR22, VAR2->VAR12.VAR13, VAR2->VAR12.VAR20));
        switch (VAR2->VAR12.VAR13 & VAR23)
        {
        case VAR24:
            break;
        case VAR25:
            FUN5(VAR2->VAR9 + 8, &VAR2->VAR26.VAR27.VAR28[0], 6);
            FUN3(VAR21, FUN4("", FUN6(&VAR2->VAR26.VAR27.VAR28[0], 6)));
            break;
        case VAR29:
            FUN5(VAR2->VAR9 + 8, &VAR2->VAR30[0], sizeof(VAR2->VAR30));
            FUN3(VAR21, FUN4("", FUN6(&VAR2->VAR30[0], 16)));
            break;
        case VAR31:
            FUN7(VAR2);
            break;
        case VAR32:
            if (VAR6)
            {
                FUN8("");
                VAR7 = 0;
                break;
            }
            FUN9(VAR2);
            break;
        case VAR33:
            FUN3(VAR21, FUN4(""));
            break;
        case VAR34:
            FUN3(VAR21, FUN4(""));
            VAR2->VAR12.VAR22 = 0;
            break;
        default:
            FUN8("");
            VAR7 = 0;
            break;
        }
        FUN10(VAR2->VAR9, VAR2->VAR12.VAR22 | VAR7 | VAR35);
        if (VAR5)
        {
            FUN11(VAR2);
        }
        if (VAR3)
        {
            FUN12(VAR2, VAR36);
            FUN13(VAR2);
            break;
        }
        else if (VAR4)
        {
            FUN12(VAR2, VAR37);
            FUN13(VAR2);
            break;
        }
        else
        {
            FUN3(VAR21, FUN4(""));
        }
    }
    FUN3(VAR21, FUN4(""));
}