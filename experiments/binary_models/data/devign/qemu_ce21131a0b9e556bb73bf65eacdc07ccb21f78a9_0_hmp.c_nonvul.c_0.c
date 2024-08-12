void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    VAR8 *VAR9 = NULL;
    unsigned int VAR10 = 0;
    VAR11 *VAR12;
    VAR6 = FUN2(&VAR9);
    if (VAR9)
    {
        FUN3(VAR2, "");
        FUN4(VAR9);
        return;
    }
    if (VAR6)
    {
        FUN3(VAR2, "");
    }
    for (VAR7 = VAR6; VAR7; VAR7 = VAR7->VAR13)
    {
        VAR14 *VAR15 = VAR7->VAR16;
        FUN3(VAR2, "", VAR10, VAR17[VAR15->VAR18]);
        FUN3(VAR2, "", VAR15->VAR19, VAR20[VAR15->VAR21->VAR22]);
        switch (VAR15->VAR21->VAR22)
        {
        case VAR23:
            VAR12 = VAR15->VAR21->VAR24.VAR25;
            FUN3(VAR2, "", VAR12->VAR26 ? "" : "", VAR12->VAR26 ? VAR12->VAR27 : "", VAR12->VAR28 ? "" : "", VAR12->VAR28 ? VAR12->VAR29 : "");
            break;
        case VAR30:
            break;
        }
        FUN3(VAR2, "");
        VAR10++;
    }
    FUN5(VAR6);
}