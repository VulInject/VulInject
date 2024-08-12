void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9;
    const char *VAR10 = FUN2(VAR4, "");
    bool VAR11 = FUN3(VAR4, "", 0);
    VAR6 = FUN4(NULL);
    for (VAR7 = VAR6; VAR7; VAR7 = VAR7->VAR12)
    {
        if (VAR10 && strcmp(VAR10, VAR7->VAR13->VAR10))
        {
            continue;
        }
        if (VAR7 != VAR6)
        {
            FUN5(VAR2, "");
        }
        FUN5(VAR2, "", VAR7->VAR13->VAR10);
        if (VAR7->VAR13->VAR14)
        {
            FUN5(VAR2, "", VAR7->VAR13->VAR15->VAR16, VAR7->VAR13->VAR15->VAR17, VAR7->VAR13->VAR15->VAR18 ? "" : "", VAR7->VAR13->VAR15->VAR19 ? "" : "");
        }
        else
        {
            FUN5(VAR2, "");
        }
        if (VAR7->VAR13->VAR20 && VAR7->VAR13->VAR21 != VAR22)
        {
            FUN5(VAR2, "", VAR23[VAR7->VAR13->VAR21]);
        }
        if (VAR7->VAR13->VAR24)
        {
            FUN5(VAR2, "", VAR7->VAR13->VAR25 ? "" : "", VAR7->VAR13->VAR26 ? "" : "");
        }
        if (!VAR7->VAR13->VAR14)
        {
            continue;
        }
        if (VAR7->VAR13->VAR15->VAR27)
        {
            FUN5(VAR2, ""
                                "" VAR28 "",
                           VAR7->VAR13->VAR15->VAR29, VAR7->VAR13->VAR15->VAR30);
        }
        if (VAR7->VAR13->VAR15->VAR31 || VAR7->VAR13->VAR15->VAR32 || VAR7->VAR13->VAR15->VAR33 || VAR7->VAR13->VAR15->VAR34 || VAR7->VAR13->VAR15->VAR35 || VAR7->VAR13->VAR15->VAR36)
        {
            FUN5(VAR2, "" VAR28 "" VAR28 "" VAR28 "" VAR28 "" VAR28 "" VAR28 "", VAR7->VAR13->VAR15->VAR31, VAR7->VAR13->VAR15->VAR32, VAR7->VAR13->VAR15->VAR33, VAR7->VAR13->VAR15->VAR34, VAR7->VAR13->VAR15->VAR35, VAR7->VAR13->VAR15->VAR36);
        }
        if (VAR11)
        {
            FUN5(VAR2, "");
            VAR9 = VAR7->VAR13->VAR15->VAR37;
            while (1)
            {
                FUN6((VAR38)VAR39, VAR2, VAR9);
                if (VAR9->VAR40)
                {
                    VAR9 = VAR9->VAR41;
                }
                else
                {
                    break;
                }
            }
        }
    }
    FUN7(VAR6);
}