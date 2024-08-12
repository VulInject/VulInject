static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    VAR7 *VAR8;
    uint32_t VAR9, VAR10, VAR11;
    unsigned int VAR12;
    if (VAR4 > 3)
    {
        FUN2(&VAR6->VAR13, VAR2);
        if (VAR4 < 2)
        {
            return 0;
            FUN3(VAR2, &VAR6->VAR14.VAR15);
            FUN3(VAR2, &VAR6->VAR14.VAR16);
            FUN4(VAR2, &VAR9);
            if (VAR9 > VAR6->VAR14.VAR9)
            {
                for (VAR12 = 0; VAR12 < (VAR9 + 31) / 32; VAR12++)
                {
                    FUN4(VAR2, &VAR11);
                    if (VAR11 != VAR6->VAR11[VAR12])
                    {
                        FUN4(VAR2, &VAR10);
                        for (VAR12 = 0; VAR12 < VAR10; VAR12++)
                        {
                            uint32_t VAR17;
                            bool VAR18;
                            VAR17 = FUN5(VAR2);
                            VAR8 = FUN6(VAR6, VAR17);
                            VAR8->VAR19 = FUN7(VAR2);
                            VAR18 = FUN7(VAR2);
                            if (VAR18 != VAR8->VAR18)
                            {
                                FUN8(VAR8, VAR20, VAR8->VAR18);
                                if (VAR4 > 2)
                                {
                                    uint32_t VAR21;
                                    FUN4(VAR2, &VAR21);
                                    if (VAR21)
                                    {
                                        FUN4(VAR2, &VAR8->VAR22);
                                        FUN9(VAR2, &VAR8->VAR23);
                                        FUN10(VAR2, (unsigned char *)&VAR8->VAR24, sizeof(VAR8->VAR24));
                                        FUN11(VAR8->VAR24.VAR25, VAR8->VAR24.VAR26, VAR8->VAR24.VAR27, 1);
                                        FUN11(VAR8->VAR24.VAR28, VAR8->VAR24.VAR29, VAR8->VAR24.VAR30, 1);
                                        FUN12(VAR8, false);
                                        return 0;