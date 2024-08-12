static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (!VAR4 || VAR2->VAR5 != FUN2(VAR4))
    {
        return 0;
    }
    switch (VAR2->VAR5)
    {
    case VAR6:
        return VAR2->VAR7.VAR8 == FUN3(FUN4(VAR4));
    case VAR9:
        return (strcmp(VAR2->VAR7.VAR10, FUN5(FUN6(VAR4))) == 0);
    case VAR11:
    {
        int VAR12;
        for (VAR12 = 0; VAR2->VAR7.VAR13[VAR12].VAR14; VAR12++)
        {
            VAR3 *VAR15 = FUN7(FUN8(VAR4), VAR2->VAR7.VAR13[VAR12].VAR14);
            if (!FUN1(&VAR2->VAR7.VAR13[VAR12].VAR7, VAR15))
            {
                return 0;
            }
        }
        return 1;
    }
    case VAR16:
    {
        QListCompareHelper VAR17;
        VAR17.VAR18 = 0;
        VAR17.VAR19 = VAR2->VAR7.VAR20;
        VAR17.VAR21 = 1;
        FUN9(FUN10(VAR4), VAR22, &VAR17);
        return VAR17.VAR21;
    }
    default:
        break;
    }
    return 0;
}