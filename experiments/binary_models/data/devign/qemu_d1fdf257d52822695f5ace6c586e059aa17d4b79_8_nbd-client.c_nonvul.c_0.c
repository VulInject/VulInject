static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    FUN2();
    *VAR6 = VAR2->VAR6;
    if (VAR6->VAR10 != VAR4->VAR10 || !VAR2->VAR11)
    {
        VAR6->VAR12 = VAR13;
    }
    else
    {
        if (VAR8 && VAR6->VAR12 == 0)
        {
            VAR9 = FUN3(VAR2->VAR11, VAR8->VAR14, VAR8->VAR15, VAR4->VAR16, true, NULL);
            if (VAR9 != VAR4->VAR16)
            {
                VAR6->VAR12 = VAR13;
            }
        }
        VAR2->VAR6.VAR10 = 0;
    }
}