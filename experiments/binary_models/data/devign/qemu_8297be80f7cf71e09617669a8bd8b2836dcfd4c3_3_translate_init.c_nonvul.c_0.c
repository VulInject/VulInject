static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7;
    VAR6->VAR8 = NULL;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
        VAR6->VAR10[VAR7] = (VAR11)(-1ULL);
    VAR6->VAR12 = 0x00000000;
    VAR6->VAR13 = 0x00000000;
    VAR6->VAR14 = 0;
    VAR6->VAR15 = 0;
    VAR6->VAR16 = 0;
    VAR6->VAR17 = VAR18;
    FUN3(VAR6);
    FUN4(VAR6, VAR19, "", &VAR20, VAR21, VAR21, &VAR20, VAR21, VAR4->VAR22);
    if (VAR4->VAR23 != VAR24)
    {
        if (VAR4->VAR23 & VAR25)
        {
            FUN4(VAR6, VAR26, "", VAR21, VAR21, &VAR20, VAR21, VAR4->VAR23 & ~VAR25);
        }
        else
        {
            FUN4(VAR6, VAR27, "", VAR21, VAR21, &VAR20, VAR21, VAR4->VAR23);
        }
    }
    (*VAR4->VAR28)(VAR6);
    if (VAR6->VAR29 & (1 << 25))
    {
        switch (VAR6->VAR30 & (VAR31 | VAR32))
        {
        case VAR31:
        case VAR32:
            break;
        default:
            fprintf(VAR33, ""
                            "");
            FUN5(1);
        }
    }
    else if (VAR6->VAR30 & (VAR31 | VAR32))
    {
        fprintf(VAR33, ""
                        "");
        FUN5(1);
    }
    if (VAR6->VAR29 & (1 << 17))
    {
        switch (VAR6->VAR30 & (VAR34 | VAR35))
        {
        case VAR34:
        case VAR35:
            break;
        default:
            fprintf(VAR33, ""
                            "");
            FUN5(1);
        }
    }
    else if (VAR6->VAR30 & (VAR34 | VAR35))
    {
        fprintf(VAR33, ""
                        "");
        FUN5(1);
    }
    if (VAR6->VAR29 & (1 << 10))
    {
        switch (VAR6->VAR30 & (VAR36 | VAR37 | VAR38))
        {
        case VAR36:
        case VAR37:
        case VAR38:
            break;
        default:
            fprintf(VAR33, ""
                            ""
                            "");
            FUN5(1);
        }
    }
    else if (VAR6->VAR30 & (VAR36 | VAR37 | VAR38))
    {
        fprintf(VAR33, ""
                        ""
                        "");
        FUN5(1);
    }
    if (VAR6->VAR29 & (1 << 9))
    {
        switch (VAR6->VAR30 & (VAR39 | VAR40))
        {
        case VAR39:
        case VAR40:
            break;
        default:
            fprintf(VAR33, ""
                            "");
            FUN5(1);
        }
    }
    else if (VAR6->VAR30 & (VAR39 | VAR40))
    {
        fprintf(VAR33, ""
                        "");
        FUN5(1);
    }
    if (VAR6->VAR29 & (1 << 2))
    {
        switch (VAR6->VAR30 & (VAR41 | VAR42))
        {
        case VAR41:
        case VAR42:
            break;
        default:
            fprintf(VAR33, ""
                            "");
            FUN5(1);
        }
    }
    else if (VAR6->VAR30 & (VAR41 | VAR42))
    {
        fprintf(VAR33, ""
                        "");
        FUN5(1);
    }
    if ((VAR6->VAR30 & (VAR43 | VAR44)) == 0)
    {
        fprintf(VAR33, ""
                        "");
        FUN5(1);
    }
    if (VAR6->VAR15 != 0)
    {
        int VAR15 = VAR6->VAR15;
        if (VAR6->VAR45 != 0)
            VAR15 *= 2;
        switch (VAR6->VAR17)
        {
        case VAR46:
            VAR6->VAR47.VAR48 = FUN6(VAR15 * sizeof(VAR49));
            break;
        case VAR50:
            VAR6->VAR47.VAR51 = FUN6(VAR15 * sizeof(VAR52));
            break;
        case VAR53:
            VAR6->VAR47.VAR54 = FUN6(VAR15 * sizeof(VAR55));
            break;
        }
        VAR6->VAR56 = VAR6->VAR15 / VAR6->VAR16;
    }
    if (VAR6->VAR8 == NULL)
    {
        FUN7(""
                    "");
    }
    if (VAR6->VAR57 == NULL)
    {
        FUN7(""
                    ""
                    "");
    }
}