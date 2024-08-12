static void FUN1(VAR1 *VAR2)
{
    bool VAR3 = FUN2(&VAR2->VAR4);
    int VAR5;
    FUN3(VAR2);
    if (VAR2->VAR6 & (1U << 31) && VAR2->VAR7 & (1U << 31))
    {
        VAR5 = 1;
    }
    else
    {
        VAR5 = 0;
    }
    FUN4(VAR2, 2, "", VAR8, VAR5, VAR3 ? "" : "");
    if (VAR3)
    {
        if (VAR5)
        {
            FUN5(&VAR2->VAR4, 0);
        }
    }
    else
    {
        FUN6(&VAR2->VAR4, VAR5);
    }
}