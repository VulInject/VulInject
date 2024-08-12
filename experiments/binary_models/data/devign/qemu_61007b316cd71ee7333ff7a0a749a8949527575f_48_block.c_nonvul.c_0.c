void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    if (VAR3)
    {
        if (!FUN2(VAR2))
        {
            FUN3(VAR5, "", FUN4(VAR2));
        }
        else if (FUN5(VAR2, VAR3) < 0)
        {
            FUN6(VAR5, VAR6);
        }
    }
    else
    {
        if (FUN7(VAR2))
        {
            FUN6(VAR5, VAR7, "", FUN4(VAR2), FUN8(VAR2));
        }
    }
}