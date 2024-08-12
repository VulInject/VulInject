void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7;
    int VAR8;
    int VAR9;
    int VAR10 = 0;
    uint64_t VAR11;
    hwaddr VAR12;
    int VAR13;
    VAR14 *VAR15;
    if (!VAR4->VAR16)
    {
        fprintf(VAR17, "");
        FUN2(1);
    }
    VAR15 = FUN3(FUN4(""), 0);
    if (VAR15)
    {
        VAR4->VAR18 = FUN5(VAR15, "");
    }
    else
    {
        VAR4->VAR18 = NULL;
    }
    if (!VAR4->VAR19)
    {
        VAR4->VAR19 = VAR20;
    }
    if (!VAR4->VAR21)
    {
        VAR4->VAR21 = VAR22;
    }
    if (VAR4->VAR23 == 0)
        VAR4->VAR23 = 1;
    VAR13 = 1;
    VAR13 = 0;
    VAR7 = FUN6(VAR4->VAR16, NULL, NULL, &VAR11, NULL, NULL, VAR13, VAR24, 1);
    VAR12 = VAR11;
    if (VAR7 < 0)
    {
        VAR7 = FUN7(VAR4->VAR16, &VAR12, NULL, &VAR10);
    }
    if (VAR7 < 0)
    {
        VAR12 = VAR4->VAR25 + VAR26;
        VAR7 = FUN8(VAR4->VAR16, VAR12, VAR4->VAR27 - VAR26);
        VAR10 = 1;
    }
    if (VAR7 < 0)
    {
        fprintf(VAR17, "", VAR4->VAR16);
        FUN2(1);
    }
    VAR4->VAR12 = VAR12;
    if (VAR10)
    {
        if (VAR4->VAR28)
        {
            VAR8 = FUN8(VAR4->VAR28, VAR4->VAR25 + VAR29, VAR4->VAR27 - VAR29);
            if (VAR8 < 0)
            {
                fprintf(VAR17, "", VAR4->VAR28);
                FUN2(1);
            }
        }
        else
        {
            VAR8 = 0;
        }
        VAR4->VAR8 = VAR8;
        VAR30[4] = VAR4->VAR31;
        if (VAR4->VAR18)
        {
            hwaddr VAR32 = FUN9(VAR4->VAR25 + VAR29 + VAR8);
            if (FUN10(VAR32, VAR4))
            {
                FUN2(1);
            }
            VAR30[5] = VAR32;
        }
        else
        {
            VAR30[5] = VAR4->VAR25 + VAR33;
            if (VAR4->VAR27 >= (1ULL << 32))
            {
                fprintf(VAR17, ""
                                ""
                                "");
                FUN2(1);
            }
        }
        VAR30[6] = VAR12;
        for (VAR9 = 0; VAR9 < sizeof(VAR30) / 4; VAR9++)
        {
            VAR30[VAR9] = FUN11(VAR30[VAR9]);
        }
        FUN12("", VAR30, sizeof(VAR30), VAR4->VAR25);
        if (VAR4->VAR23 > 1)
        {
            VAR4->FUN13(VAR2, VAR4);
        }
    }
    VAR4->VAR10 = VAR10;
    for (; VAR6; VAR6 = VAR6->VAR34)
    {
        VAR2 = FUN14(VAR6);
        VAR6->VAR35 = VAR4;
        FUN15(VAR36, VAR2);
    }
}