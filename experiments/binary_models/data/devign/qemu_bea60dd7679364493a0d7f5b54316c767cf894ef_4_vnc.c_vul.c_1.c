static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    char VAR6[1024];
    VncShareMode VAR7;
    int VAR8;
    VAR7 = VAR4[0] ? VAR9 : VAR10;
    switch (VAR2->VAR11->VAR12)
    {
    case VAR13:
        break;
    case VAR14:
        if (VAR7 == VAR10)
        {
            VAR1 *VAR15;
            FUN2(VAR15, &VAR2->VAR11->VAR16, VAR17)
            {
                if (VAR2 == VAR15)
                {
                    continue;
                }
                if (VAR15->VAR18 != VAR10 && VAR15->VAR18 != VAR9)
                {
                    continue;
                }
                FUN3(VAR15);
            }
        }
        if (VAR7 == VAR9)
        {
            if (VAR2->VAR11->VAR19 > 0)
            {
                FUN3(VAR2);
                return 0;
            }
        }
        break;
    case VAR20:
        if (VAR7 == VAR10)
        {
            FUN3(VAR2);
            return 0;
        }
        break;
    }
    FUN4(VAR2, VAR7);
    VAR2->VAR21 = FUN5(VAR2->VAR11->VAR22);
    VAR2->VAR23 = FUN6(VAR2->VAR11->VAR22);
    FUN7(VAR2, VAR2->VAR21);
    FUN7(VAR2, VAR2->VAR23);
    FUN8(VAR2);
    if (VAR24)
        VAR8 = snprintf(VAR6, sizeof(VAR6), "", VAR24);
    else
        VAR8 = snprintf(VAR6, sizeof(VAR6), "");
    FUN9(VAR2, VAR8);
    FUN10(VAR2, VAR6, VAR8);
    FUN11(VAR2);
    FUN12(VAR2);
    FUN13(VAR2, VAR25);
    FUN14(VAR2, VAR26, 1);
    return 0;
}