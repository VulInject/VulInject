int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    uint32_t VAR8;
    uint32_t VAR9 = VAR2->VAR10->FUN2(VAR2->VAR11);
    if (VAR2->VAR10->VAR12)
    {
        VAR7 = VAR2->VAR10->FUN3(VAR2->VAR11, VAR4);
        if (VAR7)
            return VAR7;
    }
    FUN4(VAR4, &VAR2->VAR13);
    FUN4(VAR4, &VAR2->VAR14);
    FUN5(VAR4, &VAR2->VAR15);
    FUN6(VAR4, &VAR8);
    if (VAR8 & ~VAR9)
    {
        fprintf(VAR16, "", VAR8, VAR9);
        return -1;
    }
    if (VAR2->VAR17)
        VAR2->FUN7(VAR2, VAR8);
    VAR2->VAR18 = VAR8;
    VAR2->VAR19 = FUN8(VAR4);
    FUN9(VAR4, VAR2->VAR20, VAR2->VAR19);
    VAR5 = FUN8(VAR4);
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        VAR2->VAR21[VAR6].VAR22.VAR5 = FUN8(VAR4);
        VAR2->VAR21[VAR6].VAR23 = FUN10(VAR4);
        FUN5(VAR4, &VAR2->VAR21[VAR6].VAR24);
        if (VAR2->VAR21[VAR6].VAR23)
        {
            FUN11(&VAR2->VAR21[VAR6]);
        }
        VAR25 = FUN12(&VAR2->VAR21[VAR6]) - VAR2->VAR21[VAR6].VAR24;
        if (VAR25 > VAR2->VAR21[VAR6].VAR22.VAR5)
        {
            fprintf(VAR16, ""
                            "",
                    VAR6, VAR2->VAR21[VAR6].VAR22.VAR5, FUN12(&VAR2->VAR21[VAR6]), VAR2->VAR21[VAR6].VAR24, VAR25);
            return -1;
        }
        if (VAR2->VAR10->VAR26)
        {
            VAR7 = VAR2->VAR10->FUN13(VAR2->VAR11, VAR6, VAR4);
            if (VAR7)
                return VAR7;
        }
    }
    FUN14(VAR2, VAR27);
    return 0;