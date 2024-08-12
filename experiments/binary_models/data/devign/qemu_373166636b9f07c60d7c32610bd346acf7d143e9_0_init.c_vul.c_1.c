int FUN1(VAR1 **VAR2)
{
    int VAR3;
    VAR3 = FUN2();
    if (VAR3 < 0)
    {
        FUN3(VAR2, "", FUN4(VAR3));
        return -1;
    }
    FUN5(10);
    FUN6(VAR4);
    if (!FUN7(VAR5))
    {
        FUN3(VAR2, "");
        return -1;
    }
    FUN8(VAR6, &VAR7);
    FUN8(VAR8, 0);
    return 0;
}