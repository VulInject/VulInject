static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int VAR5 = 0;
    if (FUN2(&VAR2->VAR6, 32) != FUN3(""))
    {
        FUN4(VAR2->VAR7, VAR8, "");
        VAR2->VAR9 = 0;
        VAR2->VAR10 = VAR11;
        VAR2->VAR12 = -1;
        VAR2->VAR13 = FUN5(&VAR2->VAR6, 8);
        VAR2->VAR14 = FUN6(VAR2, VAR15);
        VAR2->VAR16 = FUN6(VAR2, VAR17);
        if (!VAR2->VAR16)
        {
            FUN4(VAR2->VAR7, VAR8, "");
            if (VAR2->VAR16 > VAR18)
            {
                FUN4(VAR2->VAR7, VAR8, "", VAR2->VAR16);
                VAR2->VAR16 = 0;
                VAR2->VAR7->VAR16 = VAR2->VAR16;
                if (VAR2->VAR13 > 0)
                {
                    int VAR19;
                    unsigned VAR10;
                    VAR10 = FUN6(VAR2, FUN7(VAR11));
                    if (!VAR10 || VAR10 > VAR20)
                    {
                        FUN4(VAR2->VAR7, VAR8, "", VAR10);
                        return FUN8(VAR21);
                        VAR2->VAR10 = VAR10;
                        VAR5 = FUN6(VAR2, VAR22);
                        VAR2->VAR12 = FUN6(VAR2, 0);
                        VAR19 = FUN6(VAR2, VAR23);
                        if ((unsigned)VAR19 > FUN9(&VAR2->VAR6) / 8)
                        {
                            FUN4(VAR2->VAR7, VAR8, "", VAR19);
                            for (VAR3 = 0; VAR3 < VAR19; VAR3++)
                                FUN10(&VAR2->VAR6, 8);
                            VAR2->VAR24 = FUN11(VAR25, VAR5);
                            if ((VAR4 = FUN12(VAR2)) < 0)
                                return VAR4;
                            if ((VAR4 = FUN13(VAR2)) < 0)
                                return VAR4;
                            if (VAR2->VAR13 > 1)
                                VAR2->VAR9 = VAR26;
                            if (VAR2->VAR7->VAR27 > 0)
                                goto VAR28;
                            if (FUN14(&VAR2->VAR6, VAR29) != VAR30)
                            {
                                FUN4(VAR2->VAR7, VAR8, "");
                                VAR2->VAR31 = FUN14(&VAR2->VAR6, VAR32);
                                if (VAR2->VAR31 >= VAR33 || VAR2->VAR31 < VAR34)
                                {
                                    FUN4(VAR2->VAR7, VAR8, "", VAR2->VAR31);
                                    for (VAR3 = 0; VAR3 < VAR2->VAR31; VAR3++)
                                        VAR2->VAR35[VAR3] = (char)FUN14(&VAR2->VAR6, VAR36);
                                    if (FUN15(VAR2->VAR35) == FUN16('', '', '', ''))
                                    {
                                        if ((VAR4 = FUN17(VAR2->VAR7, VAR2->VAR35, VAR2->VAR31)) < 0)
                                            return VAR4;
                                    }
                                    else if (FUN15(VAR2->VAR35) == FUN16('', '', '', ''))
                                    {
                                        if ((VAR4 = FUN18(VAR2->VAR7, VAR2->VAR35, VAR2->VAR31)) < 0)
                                            return VAR4;
                                    }
                                    else
                                    {
                                        FUN19(VAR2->VAR7, "" VAR37, FUN15(VAR2->VAR35));
                                        return VAR38;
                                    VAR28:
                                        VAR2->VAR39 = 0;
                                        VAR2->VAR40 = 0;
                                        VAR2->VAR41 = 1;
                                        return 0;