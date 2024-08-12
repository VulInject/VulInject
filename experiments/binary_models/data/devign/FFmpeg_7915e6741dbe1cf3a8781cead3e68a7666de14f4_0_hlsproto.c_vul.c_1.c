static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8;
    int VAR9 = 0, VAR10 = 0, VAR11 = 0, VAR12 = 0;
    int64_t VAR13 = 0;
    char VAR14[1024];
    const char *VAR15;
    if ((VAR9 = FUN2(&VAR8, VAR3, VAR16, &VAR2->VAR17, NULL)) < 0)
        return VAR9;
    FUN3(VAR8, VAR14, sizeof(VAR14));
    if (strcmp(VAR14, ""))
        return VAR18;
    FUN4(VAR5);
    VAR5->VAR19 = 0;
    while (!VAR8->VAR20)
    {
        FUN3(VAR8, VAR14, sizeof(VAR14));
        if (FUN5(VAR14, "", &VAR15))
        {
            struct variant_info VAR21 = {{0}};
            VAR11 = 1;
            FUN6(VAR15, (VAR22)VAR23, &VAR21);
            VAR12 = FUN7(VAR21.VAR12);
        }
        else if (FUN5(VAR14, "", &VAR15))
        {
            VAR5->VAR24 = FUN7(VAR15) * VAR25;
        }
        else if (FUN5(VAR14, "", &VAR15))
        {
            VAR5->VAR26 = FUN7(VAR15);
        }
        else if (FUN5(VAR14, "", &VAR15))
        {
            VAR5->VAR19 = 1;
        }
        else if (FUN5(VAR14, "", &VAR15))
        {
            VAR10 = 1;
            VAR13 = FUN8(VAR15) * VAR25;
        }
        else if (FUN5(VAR14, "", NULL))
        {
            continue;
        }
        else if (VAR14[0])
        {
            if (VAR10)
            {
                struct VAR27 *VAR28 = FUN9(sizeof(struct VAR27));
                if (!VAR28)
                {
                    VAR9 = FUN10(VAR29);
                    goto VAR30;
                }
                VAR28->VAR13 = VAR13;
                FUN11(VAR28->VAR3, sizeof(VAR28->VAR3), VAR3, VAR14);
                FUN12(&VAR5->VAR31, &VAR5->VAR32, VAR28);
                VAR10 = 0;
            }
            else if (VAR11)
            {
                struct VAR33 *VAR34 = FUN9(sizeof(struct VAR33));
                if (!VAR34)
                {
                    VAR9 = FUN10(VAR29);
                    goto VAR30;
                }
                VAR34->VAR12 = VAR12;
                FUN11(VAR34->VAR3, sizeof(VAR34->VAR3), VAR3, VAR14);
                FUN12(&VAR5->VAR35, &VAR5->VAR36, VAR34);
                VAR11 = 0;
            }
        }
    }
    VAR5->VAR37 = FUN13();
VAR30:
    FUN14(VAR8);
    return VAR9;
}