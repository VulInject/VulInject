bool FUN1(void)
{
    int VAR1;
    FUN2(VAR2);
    if (VAR3 == NULL)
    {
        VAR3 = VAR4;
    }
    for (; VAR3 != NULL && !VAR5; VAR3 = VAR3->VAR3)
    {
        VAR6 *VAR7 = VAR3;
        FUN3(VAR2, (VAR7->VAR8 & VAR9) == 0);
        if (FUN4())
        {
            break;
        }
        if (FUN5(VAR7))
        {
            if (FUN6())
            {
                VAR1 = FUN7(VAR7);
                FUN8(VAR7);
            }
            else
            {
                VAR1 = FUN9(VAR7);
            }
            if (VAR1 == VAR10)
            {
                FUN10(VAR7);
                break;
            }
        }
        else if (VAR7->VAR11 || VAR7->VAR12)
        {
            break;
        }
    }
    VAR5 = 0;
    return !FUN11();
}