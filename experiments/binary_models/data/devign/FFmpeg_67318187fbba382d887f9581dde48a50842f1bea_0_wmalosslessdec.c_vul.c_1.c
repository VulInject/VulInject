static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17, VAR18, VAR19;
    VAR8->VAR20->VAR21 = 0;
    if (!VAR15 && VAR8->VAR22 > FUN2(&VAR8->VAR11))
    {
        VAR8->VAR23 = 0;
        if (!FUN3(VAR8))
            VAR8->VAR22 = 0;
    }
    else if (VAR8->VAR23 || VAR8->VAR24)
    {
        VAR8->VAR23 = 0;
        if (!VAR15)
            return 0;
        VAR8->VAR25 = VAR15 - FUN4(VAR2->VAR26, VAR15);
        VAR15 = FUN4(VAR2->VAR26, VAR15);
        VAR8->VAR27 = VAR15 << 3;
        FUN5(VAR11, VAR14, VAR8->VAR27);
        VAR18 = FUN6(VAR11, 4);
        FUN7(VAR11, 1);
        VAR19 = FUN8(VAR11);
        if (VAR19)
            FUN9(VAR2, "");
        VAR17 = FUN6(VAR11, VAR8->VAR28);
        if (!VAR8->VAR24 && ((VAR8->VAR18 + 1) & 0xF) != VAR18)
        {
            FUN10(VAR2, VAR29, "" VAR30 "", VAR8->VAR18, VAR18);
            VAR8->VAR18 = VAR18;
            if (VAR17 > 0)
            {
                int VAR31 = VAR8->VAR27 - FUN2(VAR11);
                if (VAR17 >= VAR31)
                {
                    VAR17 = VAR31;
                    VAR8->VAR23 = 1;
                    FUN11(VAR8, VAR11, VAR17, 1);
                    if (VAR17 < VAR31 && !VAR8->VAR24)
                        FUN3(VAR8);
                }
                else if (VAR8->VAR22 - VAR8->VAR32)
                {
                    FUN12(VAR2, "", VAR8->VAR22 - VAR8->VAR32);
                    if (VAR8->VAR24)
                    {
                        VAR8->VAR22 = 0;
                        VAR8->VAR24 = 0;
                        FUN13(&VAR8->VAR33, VAR8->VAR34, VAR8->VAR35);
                    }
                    else
                    {
                        int VAR36;
                        VAR8->VAR27 = (VAR6->VAR16 - VAR8->VAR25) << 3;
                        FUN5(VAR11, VAR6->VAR3, VAR8->VAR27);
                        FUN7(VAR11, VAR8->VAR37);
                        if (VAR8->VAR38 && FUN14(VAR8, VAR11) > VAR8->VAR28 && (VAR36 = FUN15(VAR11, VAR8->VAR28)) && VAR36 <= FUN14(VAR8, VAR11))
                        {
                            FUN11(VAR8, VAR11, VAR36, 0);
                            VAR8->VAR23 = !FUN3(VAR8);
                        }
                        else if (!VAR8->VAR38 && VAR8->VAR22 > FUN2(&VAR8->VAR11))
                        {
                            VAR8->VAR23 = !FUN3(VAR8);
                        }
                        else
                        {
                            VAR8->VAR23 = 1;
                            if (VAR8->VAR23 && !VAR8->VAR24 && FUN14(VAR8, VAR11) > 0)
                            {
                                FUN11(VAR8, VAR11, FUN14(VAR8, VAR11), 0);
                                *VAR4 = VAR8->VAR20->VAR21 > 0;
                                FUN16(VAR3, VAR8->VAR20);
                                VAR8->VAR37 = FUN2(VAR11) & 7;
                                return (VAR8->VAR24) ? VAR39 : VAR15 ? FUN2(VAR11) >> 3
                                                                                         : 0