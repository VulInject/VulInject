static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    RTSPMessageHeader VAR9, *VAR10 = &VAR9;
    char VAR11[1024];
    if (VAR6->VAR12 == VAR13)
    {
        int VAR14;
        for (VAR14 = 0; VAR14 < VAR2->VAR15; VAR14++)
            VAR6->VAR16[VAR14] = VAR2->VAR17[VAR14]->VAR18;
        if (!VAR6->VAR19)
        {
            if (memcmp(VAR6->VAR16, VAR6->VAR20, sizeof(enum VAR21) * VAR2->VAR15))
            {
                snprintf(VAR11, sizeof(VAR11), "", VAR6->VAR22);
                FUN2(VAR2, "", VAR6->VAR23, VAR11, VAR10, NULL);
                if (VAR10->VAR24 != VAR25)
                    return VAR26;
                VAR6->VAR19 = 1;
            }
        }
        if (VAR6->VAR19)
        {
            int VAR27, VAR28, VAR29 = 1;
            memcpy(VAR6->VAR20, VAR6->VAR16, sizeof(enum VAR21) * VAR2->VAR15);
            VAR6->VAR22[0] = 0;
            snprintf(VAR11, sizeof(VAR11), "");
            for (VAR14 = 0; VAR14 < VAR6->VAR30; VAR14++)
            {
                VAR28 = 0;
                for (VAR27 = 0; VAR27 < VAR2->VAR15; VAR27++)
                {
                    if (VAR2->VAR17[VAR27]->VAR7 == VAR6->VAR31[VAR14])
                    {
                        if (VAR2->VAR17[VAR27]->VAR18 != VAR32)
                        {
                            if (!VAR29)
                                FUN3(VAR6->VAR22, "", sizeof(VAR6->VAR22));
                            FUN4(VAR6->VAR22, sizeof(VAR6->VAR22), VAR14, VAR28);
                            VAR29 = 0;
                        }
                        VAR28++;
                    }
                }
            }
            FUN5(VAR11, sizeof(VAR11), "", VAR6->VAR22);
            FUN2(VAR2, "", VAR6->VAR23, VAR11, VAR10, NULL);
            if (VAR10->VAR24 != VAR25)
                return VAR26;
            VAR6->VAR19 = 0;
            if (VAR6->VAR33 == VAR34)
                FUN6(VAR2);
        }
    }
    VAR8 = FUN7(VAR2, VAR4);
    if (VAR8 < 0)
        return VAR8;
    if ((VAR6->VAR12 == VAR35 || VAR6->VAR12 == VAR13) && (FUN8() - VAR6->VAR36) / 1000000 >= VAR6->VAR37 / 2)
    {
        if (VAR6->VAR12 == VAR35)
        {
            FUN9(VAR2, "", VAR6->VAR23, NULL);
        }
        else
        {
            FUN9(VAR2, "", "", NULL);
        }
    }
    return 0;
}