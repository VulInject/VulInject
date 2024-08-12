FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5 = FUN3(VAR4, VAR6, &VAR2->VAR7, VAR8, VAR9, &VAR2->VAR7, VAR8, FUN4(VAR2), FUN5(VAR2));
    if (0 > VAR5)
    {
        FUN6("", VAR5);
        VAR2->VAR10 = false;
    }
    else
    {
        if (!FUN7(VAR2, VAR6))
        {
            FUN6("", VAR5);
            FUN8(VAR4, &VAR2->VAR7, &VAR2->VAR7);
            VAR2->VAR10 = false;
        }
        else
        {
            VAR2->VAR10 = true;
        }
    }
    return VAR2->VAR10;
}