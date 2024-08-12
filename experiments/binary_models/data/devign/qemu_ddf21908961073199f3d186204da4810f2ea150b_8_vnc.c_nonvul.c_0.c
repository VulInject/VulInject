static void FUN1(VAR1 *VAR2, QAPIEvent VAR3)
{
    VAR4 *VAR5;
    if (!VAR2->VAR6)
    {
        return;
    }
    VAR5 = FUN2(VAR2->VAR7);
    if (!VAR5)
    {
        return;
    }
    switch (VAR3)
    {
    case VAR8:
        FUN3(VAR5, FUN4(VAR2->VAR6), &VAR9);
        break;
    case VAR10:
        FUN5(VAR5, VAR2->VAR6, &VAR9);
        break;
    case VAR11:
        FUN6(VAR5, VAR2->VAR6, &VAR9);
        break;
    default:
        break;
    }
    FUN7(VAR5);
}