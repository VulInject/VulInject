int FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(&VAR8, NULL, 0, &VAR9);
    switch (VAR2->VAR10)
    {
    case VAR11:
        FUN3(VAR6, VAR2->VAR12.VAR13);
        VAR7 = FUN4(VAR6, 0, VAR4);
        break;
    case VAR14:
        FUN5(VAR6, "", VAR2->VAR12.VAR15->VAR16, &VAR9);
        VAR7 = FUN6(VAR6, VAR4);
        break;
    case VAR17:
        VAR7 = FUN7(VAR18, VAR2->VAR12.VAR7->VAR19, VAR4);
        break;
    default:
        FUN8();
    }
    FUN9(VAR6);
    return VAR7;
}