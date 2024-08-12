bool FUN1(void)
{
    if (VAR1 == NULL)
        VAR1 = VAR2;
    for (; VAR1 != NULL && !VAR3; VAR1 = VAR1->VAR1)
    {
        VAR4 *VAR5 = VAR1;
        FUN2(VAR6, (VAR5->VAR7 & VAR8) == 0);
        if (FUN3())
            break;
        if (FUN4(VAR5))
        {
            if (FUN5(VAR5) == VAR9)
            {
                break;
            }
        }
        else if (VAR5->VAR10)
        {
            break;
        }
    }
    VAR3 = 0;
    return FUN6();
}