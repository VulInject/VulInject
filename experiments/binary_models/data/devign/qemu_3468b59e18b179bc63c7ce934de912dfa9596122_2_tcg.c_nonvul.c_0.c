void FUN1(VAR1 *VAR2, bool VAR3, bool VAR4)
{
    unsigned int VAR5 = FUN2(&VAR6);
    unsigned int VAR7;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        VAR8 *VAR9 = FUN2(&VAR10[VAR7]);
        const VAR1 *VAR11 = &VAR9->VAR2;
        if (VAR3)
        {
            FUN3(VAR2, VAR11, VAR12);
            FUN3(VAR2, VAR11, VAR13);
            FUN3(VAR2, VAR11, VAR14);
            FUN4(VAR2, VAR11, VAR15);
            FUN3(VAR2, VAR11, VAR16);
            FUN4(VAR2, VAR11, VAR17);
            FUN3(VAR2, VAR11, VAR18);
            FUN3(VAR2, VAR11, VAR19);
            FUN3(VAR2, VAR11, VAR20);
            FUN3(VAR2, VAR11, VAR21);
            FUN3(VAR2, VAR11, VAR22);
            FUN3(VAR2, VAR11, VAR23);
            FUN3(VAR2, VAR11, VAR24);
            FUN3(VAR2, VAR11, VAR25);
            FUN3(VAR2, VAR11, VAR26);
            FUN3(VAR2, VAR11, VAR27);
        }
        if (VAR4)
        {
            int VAR7;
            for (VAR7 = 0; VAR7 < VAR28; VAR7++)
            {
                FUN3(VAR2, VAR11, VAR29[VAR7]);
            }
        }
    }
}