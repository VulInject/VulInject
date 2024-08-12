void FUN1(VAR1 **VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4)
    {
        VAR5 *VAR6 = FUN3(VAR4);
        if (!VAR6->VAR7)
        {
            FUN4(VAR4, VAR8);
        }
        else
        {
            FUN5(VAR6->VAR7);
        }
    }
    VAR3 *VAR4;
    VAR9 *VAR6;
    FUN2(VAR4)
    {
        VAR6 = FUN6(VAR4);
        if (VAR6->VAR10.VAR11 == FUN7())
        {
            if (FUN8(FUN6(VAR4)) == -1)
            {
                FUN9(VAR2, VAR12);
                return;
            }
            break;
        }
    }
    FUN9(VAR2, VAR12);
}