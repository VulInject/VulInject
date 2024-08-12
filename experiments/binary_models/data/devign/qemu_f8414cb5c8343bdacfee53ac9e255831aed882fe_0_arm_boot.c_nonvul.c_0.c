void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    int VAR7;
    int VAR8 = 0;
    uint64_t VAR9;
    target_phys_addr_t VAR10;
    int VAR11;
    if (!VAR4->VAR12)
    {
        fprintf(VAR13, "");
        FUN2(1);
    }
    if (!VAR4->VAR14)
    {
        VAR4->VAR14 = VAR15;
    }
    if (!VAR4->VAR16)
    {
        VAR4->VAR16 = VAR17;
    }
    if (VAR4->VAR18 == 0)
        VAR4->VAR18 = 1;
    VAR11 = 1;
    VAR11 = 0;
    VAR5 = FUN3(VAR4->VAR12, NULL, NULL, &VAR9, NULL, NULL, VAR11, VAR19, 1);
    VAR10 = VAR9;
    if (VAR5 < 0)
    {
        VAR5 = FUN4(VAR4->VAR12, &VAR10, NULL, &VAR8);
    }
    if (VAR5 < 0)
    {
        VAR10 = VAR4->VAR20 + VAR21;
        VAR5 = FUN5(VAR4->VAR12, VAR10, VAR22 - VAR21);
        VAR8 = 1;
    }
    if (VAR5 < 0)
    {
        fprintf(VAR13, "", VAR4->VAR12);
        FUN2(1);
    }
    VAR4->VAR10 = VAR10;
    if (VAR8)
    {
        if (VAR4->VAR23)
        {
            VAR6 = FUN5(VAR4->VAR23, VAR4->VAR20 + VAR24, VAR22 - VAR24);
            if (VAR6 < 0)
            {
                fprintf(VAR13, "", VAR4->VAR23);
                FUN2(1);
            }
        }
        else
        {
            VAR6 = 0;
        }
        VAR25[4] = VAR4->VAR26;
        VAR25[5] = VAR4->VAR20 + VAR27;
        VAR25[6] = VAR10;
        for (VAR7 = 0; VAR7 < sizeof(VAR25) / 4; VAR7++)
        {
            VAR25[VAR7] = FUN6(VAR25[VAR7]);
        }
        FUN7("", VAR25, sizeof(VAR25), VAR4->VAR20);
        if (VAR4->VAR18 > 1)
        {
            VAR4->FUN8(VAR2, VAR4);
        }
        VAR4->VAR6 = VAR6;
    }
    VAR4->VAR8 = VAR8;
    for (; VAR2; VAR2 = VAR2->VAR28)
    {
        VAR2->VAR29 = VAR4;
        FUN9(VAR30, VAR2);
    }
}