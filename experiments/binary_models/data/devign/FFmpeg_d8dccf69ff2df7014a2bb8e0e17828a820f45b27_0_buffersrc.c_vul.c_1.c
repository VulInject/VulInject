static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR3 *copy;
    int VAR9;
    if (!VAR4)
    {
        VAR7->VAR10 = 1;
        return 0;
    }
    else if (VAR7->VAR10)
        return FUN2(VAR11);
    if (!(VAR5 & VAR12))
    {
        switch (VAR2->VAR13[0]->VAR14)
        {
        case VAR15:
            FUN3(VAR2, VAR7, VAR4->VAR16, VAR4->VAR17, VAR4->VAR18);
            break;
        case VAR19:
            FUN4(VAR2, VAR7, VAR4->VAR20, VAR4->VAR21, VAR4->VAR18);
            break;
        default:
            return FUN2(VAR11);
        }
    }
    if (!FUN5(VAR7->VAR22) && (VAR9 = FUN6(VAR7->VAR22, FUN7(VAR7->VAR22) + sizeof(copy))) < 0)
        return VAR9;
    if (!(copy = FUN8()))
        return FUN2(VAR23);
    FUN9(copy, VAR4);
    if ((VAR9 = FUN10(VAR7->VAR22, &copy, sizeof(copy), NULL)) < 0)
    {
        FUN9(VAR4, copy);
        FUN11(&copy);
        return VAR9;
    }
    if ((VAR5 & VAR24))
        if ((VAR9 = VAR2->VAR25[0].FUN12(VAR2->VAR13[0])) < 0)
            return VAR9;
    return 0;
}