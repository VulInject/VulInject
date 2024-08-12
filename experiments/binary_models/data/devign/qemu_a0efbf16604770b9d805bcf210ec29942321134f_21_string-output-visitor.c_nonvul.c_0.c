static void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5, bool VAR6)
{
    if (FUN2(VAR4) != FUN3(VAR4))
    {
        if (VAR6)
        {
            FUN4(VAR2->VAR7, "" VAR8 "" VAR8, FUN2(VAR4), FUN3(VAR4));
        }
        else
        {
            FUN4(VAR2->VAR7, "" VAR9 "" VAR9, FUN2(VAR4), FUN3(VAR4));
        }
    }
    else
    {
        if (VAR6)
        {
            FUN4(VAR2->VAR7, "" VAR8, FUN2(VAR4));
        }
        else
        {
            FUN4(VAR2->VAR7, "" VAR9, FUN2(VAR4));
        }
    }
    if (VAR5)
    {
        FUN5(VAR2->VAR7, "");
    }
}