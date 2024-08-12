static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    int VAR6 = FUN2(VAR4, 0);
    if (VAR6 != VAR2->VAR7)
    {
        FUN3("", VAR6);
        FUN4(VAR2, 0);
        FUN5(VAR2);
        FUN6(VAR2);
    }
    else
    {
        FUN3("", VAR6);
        FUN4(VAR2, 1);
        FUN5(VAR2);
        if (FUN7(VAR2, FUN8(VAR2)) < 0)
        {
            FUN3("");
            return 0;
        }
        FUN3("");
        if (FUN9(VAR2) < 0)
        {
            FUN3("");
            return 0;
        }
    }
    return 0;
}