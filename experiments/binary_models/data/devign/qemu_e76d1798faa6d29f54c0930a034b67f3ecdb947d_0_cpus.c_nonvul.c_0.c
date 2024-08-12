static void FUN1(void)
{
    int VAR1;
    FUN2();
    if (VAR2 == NULL)
    {
        VAR2 = VAR3;
    }
    for (; VAR2 != NULL && !VAR4; VAR2 = FUN3(VAR2))
    {
        VAR5 *VAR6 = VAR2;
        FUN4(VAR7, (VAR6->VAR8 & VAR9) == 0);
        if (FUN5(VAR6))
        {
            VAR1 = FUN6(VAR6);
            if (VAR1 == VAR10)
            {
                FUN7(VAR6);
                break;
            }
        }
        else if (VAR6->VAR11 || VAR6->VAR12)
        {
            break;
        }
    }
    FUN8(&VAR4, 0);
}