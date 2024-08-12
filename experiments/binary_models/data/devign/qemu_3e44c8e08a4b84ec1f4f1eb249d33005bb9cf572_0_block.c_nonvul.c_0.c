static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR4 *VAR5, *VAR6, *VAR7;
    FUN2(VAR5, &VAR2->VAR8, VAR9, VAR6)
    {
        if (VAR5->VAR10->VAR11)
        {
            continue;
        }
        if (VAR5->VAR10 == &VAR12)
        {
            FUN3(VAR7, &VAR3->VAR13, VAR6)
            {
                if (VAR7 == VAR5)
                {
                    break;
                }
            }
            if (VAR7)
            {
                continue;
            }
        }
        FUN4(VAR3);
        FUN5(VAR5, VAR3, true);
        FUN6(VAR2);
    }
}