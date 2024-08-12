static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6->VAR7;
    VAR8 *VAR7 = VAR2->VAR6->VAR7;
    int VAR9;
    switch (VAR2->VAR10)
    {
    case VAR11:
        VAR7->VAR12 = VAR13;
        break;
    case VAR14:
        VAR7->VAR12 = VAR15;
        break;
    case VAR16:
        VAR7->VAR12 = VAR17;
        break;
    default:
        FUN2(VAR2, VAR18, "", FUN3(VAR2->VAR10));
        return FUN4(VAR19);
    }
    for (VAR9 = 0; VAR9 < FUN5(VAR20); VAR9++)
    {
        if (VAR20[VAR9].VAR12 == VAR7->VAR12)
        {
            VAR7->VAR21 = VAR9;
            VAR7->VAR22 = VAR4->VAR22[VAR9];
            VAR7->VAR23 = VAR4->VAR23[VAR9];
            break;
        }
    }
    if (!VAR7->VAR22)
    {
        FUN2(VAR2, VAR18, "", VAR7->VAR12);
        return FUN4(VAR19);
    }
    if (!VAR2->VAR24)
    {
        VAR2->VAR6->VAR25 = FUN6(sizeof(VAR26), VAR2, VAR27, NULL);
        if (!VAR2->VAR6->VAR25)
            return FUN4(VAR28);
    }
    VAR7->VAR29 = VAR4->VAR29;
    VAR7->VAR30 = VAR4->VAR30;
    return 0;
}