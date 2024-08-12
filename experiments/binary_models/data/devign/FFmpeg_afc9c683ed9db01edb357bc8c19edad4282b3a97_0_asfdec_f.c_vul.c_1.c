static int FUN1(VAR1 *VAR2, int VAR3)
{
    ff_asf_guid VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8 = FUN2(VAR2->VAR9);
    int64_t VAR10;
    if ((VAR10 = FUN3(VAR2->VAR9, VAR6->VAR11 + VAR6->VAR12, VAR13)) < 0)
    {
        return VAR10;
        if ((VAR10 = FUN4(VAR2->VAR9, &VAR4)) < 0)
            while (FUN5(&VAR4, &VAR14))
            {
                int64_t VAR15 = FUN6(VAR2->VAR9);
                if (VAR15 < 24 || FUN7(VAR2->VAR9))
                {
                    FUN8(VAR2->VAR9, VAR15 - 24);
                    if ((VAR10 = FUN4(VAR2->VAR9, &VAR4)) < 0)
                    {
                        int64_t VAR16, VAR17 = -1;
                        int VAR18, VAR19;
                        int VAR20;
                        int64_t av_unused VAR15 = FUN6(VAR2->VAR9);
                        if ((VAR10 = FUN4(VAR2->VAR9, &VAR4)) < 0)
                            VAR16 = FUN6(VAR2->VAR9);
                        VAR18 = FUN9(VAR2->VAR9);
                        VAR19 = FUN9(VAR2->VAR9);
                        FUN10(VAR2, VAR21, "" VAR22 "", VAR16, VAR18, VAR19);
                        for (VAR20 = 0; VAR20 < VAR19; VAR20++)
                        {
                            int VAR23 = FUN9(VAR2->VAR9);
                            int VAR24 = FUN11(VAR2->VAR9);
                            int64_t VAR25 = VAR2->VAR26->VAR27 + VAR2->VAR28 * (VAR29)VAR23;
                            int64_t VAR30 = FUN12(FUN13(VAR16, VAR20, 10000) - VAR6->VAR31.VAR32, 0);
                            if (VAR25 != VAR17)
                            {
                                FUN10(VAR2, VAR21, "" VAR33 "", VAR23, VAR24, VAR30);
                                FUN14(VAR2->VAR34[VAR3], VAR25, VAR30, VAR2->VAR28, 0, VAR35);
                                VAR17 = VAR25;
                                VAR6->VAR36 = VAR19 > 1;
                            VAR37:
                                FUN3(VAR2->VAR9, VAR8, VAR13);
                                return VAR10