static int FUN1(VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2->VAR4.VAR5);
    if (VAR3 < 0)
    {
        if (!FUN3(VAR3))
        {
            FUN4("");
            if (!FUN5(VAR2->VAR4.VAR5))
            {
                FUN6(VAR2->VAR6, VAR7, NULL, VAR2);
            }
            else
            {
                FUN6(VAR2->VAR6, NULL, VAR7, VAR2);
            }
            return 0;
        }
        FUN4("", FUN7(VAR3));
        FUN8(VAR2);
        return -1;
    }
    if (VAR2->VAR8->VAR4.VAR9)
    {
        if (FUN9(VAR2) < 0)
        {
            FUN4("");
            FUN8(VAR2);
            return -1;
        }
        else
        {
            FUN4("");
        }
    }
    FUN4("");
    FUN6(VAR2->VAR6, VAR10, NULL, VAR2);
    return 0;
}