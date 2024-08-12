int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5->VAR6)
    {
        VAR4->VAR7 = VAR2->VAR5->VAR6->VAR8;
        FUN2(VAR4, VAR2->VAR5->VAR6->VAR9);
        FUN3(VAR4, VAR2->VAR5->VAR6->VAR10);
        FUN4(VAR4, VAR2->VAR5->VAR6->VAR11);
    }
    else
    {
        VAR4->VAR7 = VAR12;
        FUN2(VAR4, -1);
        FUN3(VAR4, 0);
        FUN4(VAR4, -1);
    }
    VAR4->VAR13 = VAR2->VAR13;
    switch (VAR2->VAR14->VAR15)
    {
    case VAR16:
        VAR4->VAR17 = VAR2->VAR18;
        if (!VAR4->VAR19.VAR20)
            VAR4->VAR19 = VAR2->VAR19;
        if (FUN5(VAR4) == VAR21)
            FUN6(VAR4, VAR2->VAR22);
        if (FUN7(VAR4) == VAR23)
            FUN8(VAR4, VAR2->VAR24);
        break;
    case VAR25:
        if (!VAR4->VAR26)
            VAR4->VAR26 = VAR2->VAR26;
        if (VAR4->VAR17 < 0)
            VAR4->VAR17 = VAR2->VAR27;
        if (!VAR4->VAR28)
        {
            if (VAR2->VAR28)
            {
                if (FUN9(VAR2->VAR28) != VAR2->VAR29)
                {
                    FUN10(VAR2, VAR30, ""
                                                "");
                    return FUN11(VAR31);
                }
                VAR4->VAR28 = VAR2->VAR28;
            }
            else
            {
                if (VAR2->VAR29 > VAR32)
                {
                    FUN10(VAR2, VAR30, "", VAR2->VAR29);
                    return FUN11(VAR33);
                }
            }
        }
        FUN12(VAR4, VAR2->VAR29);
        break;
    }
    return 0;
}