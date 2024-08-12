static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    char VAR8[VAR9];
    float VAR10[3] = {0.0, 0.0, 0.0};
    float VAR11[3] = {1.0, 1.0, 1.0};
    while (fgets(VAR8, sizeof(VAR8), VAR4))
    {
        if (!FUN2(VAR8, "", 12))
        {
            int VAR12, VAR13, VAR14;
            const int VAR15 = FUN3(VAR8 + 12, NULL, 0);
            if (VAR15 > VAR16)
            {
                FUN4(VAR2, VAR17, "");
                return FUN5(VAR18);
            }
            VAR6->VAR19 = VAR15;
            for (VAR14 = 0; VAR14 < VAR15; VAR14++)
            {
                for (VAR13 = 0; VAR13 < VAR15; VAR13++)
                {
                    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
                    {
                        struct VAR20 *VAR21 = &VAR6->VAR22[VAR14][VAR13][VAR12];
                        do
                        {
                            FUN6(0);
                            if (!FUN2(VAR8, "", 7))
                            {
                                float *VAR23 = NULL;
                                if (!FUN2(VAR8 + 7, "", 4))
                                    VAR23 = VAR10;
                                else if (!FUN2(VAR8 + 7, "", 4))
                                    VAR23 = VAR11;
                                if (!VAR23)
                                    return VAR24;
                                sscanf(VAR8 + 11, "", VAR23, VAR23 + 1, VAR23 + 2);
                                FUN4(VAR2, VAR25, "", VAR10[0], VAR10[1], VAR10[2], VAR11[0], VAR11[1], VAR11[2]);
                                continue;
                            }
                        } while (FUN7(VAR8));
                        if (sscanf(VAR8, "", &VAR21->VAR26, &VAR21->VAR27, &VAR21->VAR28) != 3)
                            return VAR24;
                        VAR21->VAR26 *= VAR11[0] - VAR10[0];
                        VAR21->VAR27 *= VAR11[1] - VAR10[1];
                        VAR21->VAR28 *= VAR11[2] - VAR10[2];
                    }
                }
            }
            break;
        }
    }
    return 0;
}