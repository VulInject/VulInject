void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    FUN2(VAR4, &VAR7, VAR8)
    {
        VAR9 *VAR10 = FUN3(VAR4);
        FUN4(VAR6, VAR10)
        {
            if (VAR6->VAR2 == VAR2)
            {
                FUN5(VAR6, VAR4, VAR11, VAR12);
            }
        }
        FUN6(VAR10);
    }
}