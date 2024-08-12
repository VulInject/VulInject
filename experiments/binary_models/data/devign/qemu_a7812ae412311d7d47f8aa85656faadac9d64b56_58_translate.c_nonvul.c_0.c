static void FUN1(VAR1 *VAR2, TCGv VAR3, TCGv VAR4, unsigned int VAR5, int VAR6)
{
    int VAR7 = FUN2(VAR2->VAR8);
    if (VAR2->VAR9 == 1)
        FUN3(VAR2);
    if (VAR5 == 1)
    {
        if (VAR6)
            FUN4(VAR3, VAR4, VAR7);
        else
            FUN5(VAR3, VAR4, VAR7);
    }
    else if (VAR5 == 2)
    {
        if (VAR6)
            FUN6(VAR3, VAR4, VAR7);
        else
            FUN7(VAR3, VAR4, VAR7);
    }
    else if (VAR5 == 4)
    {
        FUN8(VAR3, VAR4, VAR7);
    }
    else
    {
        FUN9();
    }
}