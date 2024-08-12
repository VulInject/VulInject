VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    assert(VAR4 != NULL);
    VAR6 *VAR7;
    VAR8 *VAR9;
    if (VAR2 == NULL)
    {
        VAR2 = FUN2(VAR1, 1);
        FUN3(VAR2);
    }
    VAR5 &= ~VAR10;
    FUN4(VAR9, &VAR4->VAR11, VAR12)
    {
        int VAR13;
        if (VAR9->VAR4->VAR14 != VAR4)
        {
            continue;
        }
        VAR13 = VAR9->VAR15->FUN5(VAR5);
        FUN1(VAR2, VAR9->VAR4, VAR13);
    }
    VAR7 = FUN2(VAR6, 1);
    FUN6(VAR2, VAR7, VAR16);
    VAR7->VAR17.VAR4 = VAR4;
    VAR7->VAR17.VAR5 = VAR5;
    return VAR2;
}