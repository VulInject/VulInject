static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    if (VAR3 == 0 || VAR3 == -1)
    {
        if (VAR3 == -1)
        {
            switch (VAR4)
            {
            case VAR5:
            case VAR6:
            case VAR7:
                return 0;
            default:
                break;
            }
        }
        FUN2("", VAR3, VAR3 < 0 ? VAR4 : 0);
        FUN3(VAR2->VAR8, NULL, NULL, NULL, NULL);
        FUN4(VAR2->VAR8);
        FUN5(VAR2->VAR9);
        FUN6(VAR2->VAR9);
        if (VAR2->VAR10.VAR11)
            FUN7(VAR2->VAR10.VAR11);
        if (VAR2->VAR12.VAR11)
            FUN7(VAR2->VAR12.VAR11);
        FUN8(VAR2);
        FUN9(VAR2);
        VAR1 *VAR13, *VAR14 = NULL;
        for (VAR13 = VAR2->VAR15->VAR16; VAR13 != NULL; VAR13 = VAR13->VAR17)
        {
            if (VAR13 == VAR2)
            {
                if (VAR14)
                    VAR14->VAR17 = VAR13->VAR17;
                else
                    VAR2->VAR15->VAR16 = VAR13->VAR17;
                break;
            }
            VAR14 = VAR13;
        }
        if (!VAR2->VAR15->VAR16)
            VAR18->VAR19 = 1;
        FUN7(VAR2->VAR20);
        FUN7(VAR2);
        return 0;
    }
    return VAR3;
}