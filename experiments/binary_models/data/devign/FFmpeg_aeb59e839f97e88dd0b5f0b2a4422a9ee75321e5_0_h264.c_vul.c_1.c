static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *const VAR7 = &VAR2->VAR7;
    int VAR8, VAR9;
    int VAR10 = 0;
    VAR11 *VAR12;
    if ((VAR7->VAR13->VAR14 & VAR15) && VAR5 == 0)
        FUN2(VAR2->VAR7.VAR13, VAR16, "");
    for (VAR8 = 0; VAR8 < VAR5; VAR8++)
    {
        int VAR17, VAR18, VAR19;
        if (VAR7->VAR13->VAR14 & VAR15)
            FUN2(VAR2->VAR7.VAR13, VAR16, "", VAR2->VAR4[VAR8].VAR20, VAR2->VAR4[VAR8].VAR21, VAR2->VAR4[VAR8].VAR22);
        switch (VAR4[VAR8].VAR20)
        {
        case VAR23:
            if (VAR7->VAR13->VAR14 & VAR15)
                FUN2(VAR2->VAR7.VAR13, VAR16, "", VAR2->VAR4[VAR8].VAR21, VAR2->VAR24);
            VAR18 = FUN3(VAR2, VAR4[VAR8].VAR21, &VAR17);
            VAR12 = FUN4(VAR2, VAR18, &VAR9);
            if (VAR12)
            {
                if (FUN5(VAR2, VAR12, VAR17 ^ VAR25))
                    FUN6(VAR2, VAR9);
            }
            else if (VAR7->VAR13->VAR14 & VAR15)
                FUN2(VAR2->VAR7.VAR13, VAR16, "");
        case VAR26:
            if (VAR27 && VAR4[VAR8].VAR22 < VAR2->VAR28 && VAR2->VAR29[VAR4[VAR8].VAR22]->VAR18 == VAR4[VAR8].VAR21 / 2)
            {
                int VAR18 = VAR4[VAR8].VAR21 >> VAR27;
                VAR12 = FUN7(VAR2, VAR4[VAR8].VAR22);
                if (VAR12)
                    FUN5(VAR2, VAR12, 0);
                VAR2->VAR29[VAR4[VAR8].VAR22] = FUN8(VAR2, VAR18);
                if (VAR2->VAR29[VAR4[VAR8].VAR22])
                {
                    VAR2->VAR29[VAR4[VAR8].VAR22]->VAR29 = 1;
                    VAR2->VAR28++;
                case VAR30:
                    VAR9 = FUN3(VAR2, VAR4[VAR8].VAR22, &VAR17);
                    VAR12 = VAR2->VAR29[VAR9];
                    if (VAR12)
                    {
                        if (FUN5(VAR2, VAR12, VAR17 ^ VAR25))
                            FUN9(VAR2, VAR9);
                    }
                    else if (VAR7->VAR13->VAR14 & VAR15)
                        FUN2(VAR2->VAR7.VAR13, VAR16, "");
                case VAR31:
                    VAR19 = 1;
                    if (VAR27 && !VAR7->VAR32)
                    {
                        if (VAR2->VAR29[VAR4[VAR8].VAR22] == VAR7->VAR33)
                        {
                            VAR19 = 0;
                        }
                        else if (VAR7->VAR33->VAR34)
                        {
                            VAR7->VAR33->VAR34 = VAR25;
                        }
                        else if (VAR7->VAR33->VAR29)
                        {
                            FUN2(VAR2->VAR7.VAR13, VAR35, ""
                                                             ""
                                                             ""
                                                             "");