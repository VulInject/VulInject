void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    if (VAR2->VAR5)
    {
        if (VAR2->VAR5->VAR6 & VAR7)
        {
            VAR2->VAR5 = NULL;
            if (FUN2(VAR2, 0))
                FUN3(VAR2, VAR8);
            else
                FUN4(VAR2, NULL);
        }
    }
    else
    {
        FUN5(VAR4, &VAR2->VAR9, VAR10)
        if (VAR4->VAR11 == VAR2->VAR12)
        {
            if (VAR4->VAR6 & VAR7)
            {
                FUN2(VAR2, 1);
                FUN3(VAR2, VAR8);
            }
            break;
        }
    }
}