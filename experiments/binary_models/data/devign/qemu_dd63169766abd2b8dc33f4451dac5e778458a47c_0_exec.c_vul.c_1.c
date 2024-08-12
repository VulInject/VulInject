static VAR1 FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR2 *VAR6;
    VAR2 *VAR7 = NULL;
    ram_addr_t VAR8, VAR9;
    VAR8 = FUN2() >> VAR10;
    FUN3();
    VAR3->VAR11 = FUN4(VAR3->VAR12);
    if (!VAR3->VAR13)
    {
        if (FUN5())
        {
            FUN6(VAR3->VAR11, VAR3->VAR12, VAR3->VAR14);
        }
        else
        {
            VAR3->VAR13 = FUN7(VAR3->VAR12, &VAR3->VAR14->VAR15);
            if (!VAR3->VAR13)
            {
                FUN8(VAR5, VAR16, "", FUN9(VAR3->VAR14));
                FUN10();
                return -1;
                FUN11(VAR3->VAR13, VAR3->VAR12);
                FUN12(VAR6, &VAR17.VAR18, VAR19)
                {
                    VAR7 = VAR6;
                    if (VAR6->VAR12 < VAR3->VAR12)
                    {
                        break;
                        if (VAR6)
                        {
                            FUN13(VAR6, VAR3, VAR19);
                        }
                        else if (VAR7)
                        {
                            FUN14(VAR7, VAR3, VAR19);
                        }
                        else
                        {
                            FUN15(&VAR17.VAR18, VAR3, VAR19);
                            VAR17.VAR20 = NULL;
                            FUN16();
                            VAR17.VAR21++;
                            FUN10();
                            VAR9 = FUN2() >> VAR10;
                            int VAR22;
                            for (VAR22 = 0; VAR22 < VAR23; VAR22++)
                            {
                                VAR17.VAR24[VAR22] = FUN17(VAR17.VAR24[VAR22], VAR8, VAR9);
                                FUN18(VAR3->VAR11, VAR3->VAR25, VAR26);
                                if (VAR3->VAR13)
                                {
                                    FUN19(VAR3->VAR13, VAR3->VAR12);
                                    FUN20(VAR3->VAR13, VAR3->VAR12, VAR27);
                                    FUN20(VAR3->VAR13, VAR3->VAR12, VAR28);
                                    if (FUN21())
                                    {
                                        FUN22(VAR3->VAR13, VAR3->VAR12);
                                        return VAR3->VAR11;