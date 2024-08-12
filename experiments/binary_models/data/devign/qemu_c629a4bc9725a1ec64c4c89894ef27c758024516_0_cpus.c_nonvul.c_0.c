bool FUN1(void)
{
    int VAR1 = 0;
    if (VAR2 == NULL)
        VAR2 = VAR3;
    for (; VAR2 != NULL && !VAR4; VAR2 = VAR2->VAR2)
    {
        VAR5 *VAR6 = VAR7 = VAR2;
        FUN2(VAR8, (VAR7->VAR9 & VAR10) == 0);
        if (FUN3())
            break;
        if (FUN4(VAR6))
            VAR1 = FUN5(VAR6);
        else if (VAR6->VAR11)
            break;
        if (VAR1 == VAR12)
        {
            FUN6(VAR6);
            VAR13 = VAR12;
            break;
        }
    }
    VAR4 = 0;
    return FUN7();
}