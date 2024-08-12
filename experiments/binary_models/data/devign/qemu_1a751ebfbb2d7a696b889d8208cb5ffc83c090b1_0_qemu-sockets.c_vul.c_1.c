int FUN1(VAR1 *VAR2, VAR3 **VAR4, VAR5 *VAR6, void *VAR7)
{
    VAR8 *VAR9;
    int VAR10;
    VAR9 = FUN2(&VAR11);
    switch (VAR2->VAR12)
    {
    case VAR13:
        FUN3(VAR9, VAR2->VAR14);
        VAR10 = FUN4(VAR9, VAR4, VAR6, VAR7);
        break;
    case VAR15:
        FUN5(VAR9, "", VAR2->VAR16->VAR17);
        VAR10 = FUN6(VAR9, VAR4, VAR6, VAR7);
        break;
    case VAR18:
        VAR10 = FUN7(VAR19, VAR2->VAR10->VAR20, VAR4);
        if (VAR6)
        {
            FUN8(VAR10, VAR7);
        }
        break;
    default:
        FUN9();
    }
    FUN10(VAR9);
    return VAR10;