int FUN1(VAR1 *VAR2)
{
    int (*VAR3)(VAR4 *);
    unsigned VAR5;
    int VAR6;
    for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
    {
        VAR4 *VAR8 = VAR2->VAR9[VAR5];
        VAR4 *VAR10 = VAR8->VAR11->VAR7 ? VAR8->VAR11->VAR9[0] : NULL;
        if (!VAR8)
            continue;
        VAR8->VAR12 = VAR13;
        switch (VAR8->VAR14)
        {
        case VAR15:
            continue;
        case VAR16:
            FUN2(VAR2, VAR17, "");
            return 0;
        case VAR18:
            VAR8->VAR14 = VAR16;
            if ((VAR6 = FUN1(VAR8->VAR11)) < 0)
                return VAR6;
            if (!(VAR3 = VAR8->VAR19->VAR20))
            {
                if (VAR8->VAR11->VAR7 != 1)
                {
                    FUN2(VAR8->VAR11, VAR21, ""
                                                    ""
                                                    ""
                                                    "");
                    return FUN3(VAR22);
                }
            }
            else if ((VAR6 = FUN4(VAR8)) < 0)
            {
                FUN2(VAR8->VAR11, VAR21, "", VAR8->VAR11->VAR23);
                return VAR6;
            }
            switch (VAR8->VAR24)
            {
            case VAR25:
                if (!VAR8->VAR26.VAR27 && !VAR8->VAR26.VAR28)
                    VAR8->VAR26 = VAR10 ? VAR10->VAR26 : VAR29;
                if (!VAR8->VAR30.VAR27 && !VAR8->VAR30.VAR28)
                    VAR8->VAR30 = VAR10 ? VAR10->VAR30 : (VAR31){1, 1};
                if (VAR10 && !VAR8->VAR32.VAR27 && !VAR8->VAR32.VAR28)
                    VAR8->VAR32 = VAR10->VAR32;
                if (VAR10)
                {
                    if (!VAR8->VAR33)
                        VAR8->VAR33 = VAR10->VAR33;
                    if (!VAR8->VAR34)
                        VAR8->VAR34 = VAR10->VAR34;
                }
                else if (!VAR8->VAR33 || !VAR8->VAR34)
                {
                    FUN2(VAR8->VAR11, VAR21, ""
                                                    "");
                    return FUN3(VAR22);
                }
                break;
            case VAR35:
                if (VAR10)
                {
                    if (!VAR8->VAR26.VAR27 && !VAR8->VAR26.VAR28)
                        VAR8->VAR26 = VAR10->VAR26;
                }
                if (!VAR8->VAR26.VAR27 && !VAR8->VAR26.VAR28)
                    VAR8->VAR26 = (VAR31){1, VAR8->VAR36};
            }
            if ((VAR3 = VAR8->VAR37->VAR20))
                if ((VAR6 = FUN4(VAR8)) < 0)
                {
                    FUN2(VAR8->VAR11, VAR21, "", VAR8->VAR38->VAR23);
                    return VAR6;
                }
            VAR8->VAR14 = VAR15;
        }
    }
    return 0;
}