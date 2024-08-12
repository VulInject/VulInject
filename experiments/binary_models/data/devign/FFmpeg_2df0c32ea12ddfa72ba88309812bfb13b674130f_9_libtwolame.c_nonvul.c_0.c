static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    if ((VAR11 = FUN2(VAR4, VAR12)) < 0)
        return VAR11;
    if (VAR6)
    {
        switch (VAR2->VAR13)
        {
        case VAR14:
            VAR11 = FUN3(VAR9->VAR15, (const float *)VAR6->VAR16[0], VAR6->VAR17, VAR4->VAR16, VAR4->VAR18);
            break;
        case VAR19:
            VAR11 = FUN4(VAR9->VAR15, (const float *)VAR6->VAR16[0], (const float *)VAR6->VAR16[1], VAR6->VAR17, VAR4->VAR16, VAR4->VAR18);
            break;
        case VAR20:
            VAR11 = FUN5(VAR9->VAR15, (const short int *)VAR6->VAR16[0], VAR6->VAR17, VAR4->VAR16, VAR4->VAR18);
            break;
        case VAR21:
            VAR11 = FUN6(VAR9->VAR15, (const short int *)VAR6->VAR16[0], (const short int *)VAR6->VAR16[1], VAR6->VAR17, VAR4->VAR16, VAR4->VAR18);
            break;
        default:
            FUN7(VAR2, VAR22, "", VAR2->VAR13);
            return VAR23;
        }
    }
    else
    {
        VAR11 = FUN8(VAR9->VAR15, VAR4->VAR16, VAR4->VAR18);
    }
    if (!VAR11)
        return 0;
    if (VAR11 < 0)
        return VAR24;
    VAR4->VAR25 = FUN9(VAR2, VAR6->VAR17);
    if (VAR6)
    {
        if (VAR6->VAR26 != VAR27)
            VAR4->VAR26 = VAR6->VAR26 - FUN9(VAR2, VAR2->VAR28);
    }
    else
    {
        VAR4->VAR26 = VAR9->VAR29;
    }
    if (VAR4->VAR26 != VAR27)
        VAR9->VAR29 = VAR4->VAR26 + VAR4->VAR25;
    FUN10(VAR4, VAR11);
    *VAR7 = 1;
    return 0;
}