static char *FUN1(char *VAR1, int VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    char *VAR8 = NULL;
    switch (VAR4->VAR9)
    {
    case VAR10:
    {
        int VAR11 = 1;
        if (VAR7 && VAR7->VAR12 && VAR7->VAR12->VAR13 && FUN2(VAR7->VAR14, "", ""))
            VAR11 = 0;
        if (VAR4->VAR15)
        {
            VAR8 = FUN3(VAR4);
        }
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR5, VAR11, VAR8 ? VAR8 : "");
        break;
    }
    case VAR16:
    case VAR17:
        if (!VAR7 || !VAR7->VAR12->VAR13 || !FUN2(VAR7->VAR14, "", "") || VAR4->VAR9 == VAR17)
            FUN4(VAR1, VAR2, ""
                                    "",
                        VAR5, VAR5, VAR4->VAR18, VAR4->VAR19);
        break;
    case VAR20:
        if (VAR4->VAR15)
            FUN5(NULL, VAR21, ""
                                         "");
        FUN4(VAR1, VAR2, "", VAR5);
        break;
    case VAR22:
        if (VAR4->VAR15)
        {
            VAR8 = FUN6(VAR4);
        }
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR5, VAR8 ? VAR8 : "");
        break;
    case VAR23:
        if (VAR7 && VAR7->VAR12->VAR13 && FUN2(VAR7->VAR14, "", ""))
        {
            VAR8 = FUN7(VAR4);
            if (!VAR8)
                return NULL;
            FUN4(VAR1, VAR2, ""
                                    "",
                        VAR5, VAR4->VAR24, VAR4->VAR25, VAR5, FUN8(VAR4), VAR8);
        }
        else
        {
            if (VAR4->VAR15)
            {
                VAR8 = FUN6(VAR4);
            }
            else
            {
                FUN5(VAR4, VAR26, "");
                return NULL;
            }
            if (!VAR8)
            {
                return NULL;
            }
            FUN4(VAR1, VAR2, ""
                                    ""
                                    ""
                                    "",
                        VAR5, VAR4->VAR24, VAR4->VAR25, VAR5, VAR8);
        }
        break;
    case VAR27:
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5, VAR4->VAR24, VAR4->VAR25);
        break;
    case VAR29:
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5, VAR4->VAR24, VAR4->VAR25);
        break;
    case VAR30:
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5, VAR4->VAR24, VAR4->VAR25);
        break;
    case VAR31:
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR4->VAR24, VAR4->VAR25, VAR5);
        break;
    case VAR32:
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR4->VAR24, VAR4->VAR25, VAR5);
        break;
    case VAR33:
        if (VAR4->VAR15)
            VAR8 = FUN9(VAR4);
        else
            FUN5(VAR4, VAR26, "");
        if (!VAR8)
            return NULL;
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR4->VAR24, VAR4->VAR25, VAR5, VAR8);
        break;
    case VAR34:
    {
        const char *VAR35;
        switch (VAR4->VAR35)
        {
        case VAR36:
            VAR35 = "";
            break;
        case VAR37:
            VAR35 = "";
            break;
        case VAR38:
            VAR35 = "";
            break;
        default:
            FUN5(VAR4, VAR26, "");
            return NULL;
        }
        if (VAR4->VAR15)
            VAR8 = FUN9(VAR4);
        else
            FUN5(VAR4, VAR26, "");
        if (!VAR8)
            return NULL;
        FUN4(VAR1, VAR2, ""
                                ""
                                ""
                                "",
                    VAR5, VAR5, VAR4->VAR18, VAR4->VAR19, VAR35, VAR8);
        break;
    }
    case VAR39:
        FUN4(VAR1, VAR2, "", VAR5);
        break;
    case VAR40:
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5);
        break;
    case VAR41:
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5, 8000, VAR4->VAR25);
        break;
    case VAR42:
    {
        if (VAR5 >= VAR28)
            FUN4(VAR1, VAR2, "", VAR5, VAR4->VAR43 * 8, VAR4->VAR24);
        break;
    }
    case VAR44:
        FUN4(VAR1, VAR2, ""
                                "",
                    VAR5, VAR4->VAR24, VAR5, VAR4->VAR45 == 38 ? 20 : 30);
        break;
    case VAR46:
        FUN4(VAR1, VAR2, "", VAR5, VAR4->VAR24);
        break;
    case VAR47:
        FUN4(VAR1, VAR2, "", VAR5);
        if (VAR4->VAR25 == 2)
        {
            FUN4(VAR1, VAR2, "", VAR5);
        }
        break;
    default:
        break;
    }
    FUN10(VAR8);
    return VAR1;
}