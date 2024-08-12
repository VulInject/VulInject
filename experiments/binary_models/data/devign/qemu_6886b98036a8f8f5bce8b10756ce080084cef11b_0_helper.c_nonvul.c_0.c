void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    VAR7 *VAR8;
    if (VAR2->VAR9)
    {
        if (VAR2->VAR9->VAR10 & VAR11)
        {
            VAR2->VAR9 = NULL;
            if (FUN3(VAR6))
            {
                FUN4(VAR6, VAR12);
            }
            else
            {
                FUN5(VAR2);
            }
        }
    }
    else
    {
        FUN6(VAR8, &VAR2->VAR13, VAR14)
        {
            if (VAR8->VAR15 == VAR6->VAR15)
            {
                if (VAR8->VAR10 & VAR11)
                {
                    FUN4(VAR6, VAR16);
                }
                break;
            }
        }
    }
}