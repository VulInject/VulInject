void FUN1(VAR1 *VAR2, const char *VAR3, FWCfgCallback VAR4, FWCfgWriteCallback VAR5, void *VAR6, void *VAR7, size_t VAR8, bool VAR9)
{
    int VAR10, VAR11, VAR12;
    size_t VAR13;
    VAR14 *VAR15 = FUN2(FUN3());
    int VAR16 = 0;
    if (!VAR2->VAR17)
    {
        VAR13 = sizeof(VAR18) + sizeof(VAR19) * FUN4(VAR2);
        VAR2->VAR17 = FUN5(VAR13);
        FUN6(VAR2, VAR20, VAR2->VAR17, VAR13);
    }
    VAR12 = FUN7(VAR2->VAR17->VAR12);
    assert(VAR12 < FUN4(VAR2));
    if (VAR15->VAR21)
    {
        VAR16 = FUN8(VAR2, VAR3);
        for (VAR11 = VAR12; VAR11 > 0 && VAR16 < VAR2->VAR22[VAR11 - 1]; VAR11--)
            ;
    }
    else
    {
        for (VAR11 = VAR12; VAR11 > 0 && strcmp(VAR3, VAR2->VAR17->VAR23[VAR11 - 1].VAR24) < 0; VAR11--)
            ;
    }
    for (VAR10 = VAR12 + 1; VAR10 > VAR11; VAR10--)
    {
        VAR2->VAR17->VAR23[VAR10] = VAR2->VAR17->VAR23[VAR10 - 1];
        VAR2->VAR17->VAR23[VAR10].VAR25 = FUN9(VAR26 + VAR10);
        VAR2->VAR27[0][VAR26 + VAR10] = VAR2->VAR27[0][VAR26 + VAR10 - 1];
        VAR2->VAR22[VAR10] = VAR2->VAR22[VAR10 - 1];
    }
    memset(&VAR2->VAR17->VAR23[VAR11], 0, sizeof(VAR19));
    memset(&VAR2->VAR27[0][VAR26 + VAR11], 0, sizeof(VAR28));
    FUN10(VAR2->VAR17->VAR23[VAR11].VAR24, sizeof(VAR2->VAR17->VAR23[VAR11].VAR24), VAR3);
    for (VAR10 = 0; VAR10 <= VAR12; VAR10++)
    {
        if (VAR10 != VAR11 && strcmp(VAR2->VAR17->VAR23[VAR11].VAR24, VAR2->VAR17->VAR23[VAR10].VAR24) == 0)
        {
            FUN11("", VAR2->VAR17->VAR23[VAR11].VAR24);
            FUN12(1);
        }
    }
    FUN13(VAR2, VAR26 + VAR11, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9);
    VAR2->VAR17->VAR23[VAR11].VAR29 = FUN14(VAR8);
    VAR2->VAR17->VAR23[VAR11].VAR25 = FUN9(VAR26 + VAR11);
    VAR2->VAR22[VAR11] = VAR16;
    FUN15(VAR2, VAR11, VAR2->VAR17->VAR23[VAR11].VAR24, VAR8);
    VAR2->VAR17->VAR12 = FUN14(VAR12 + 1);
}