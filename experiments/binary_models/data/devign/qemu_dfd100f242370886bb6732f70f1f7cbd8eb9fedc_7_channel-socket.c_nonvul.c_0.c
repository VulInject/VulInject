int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    int VAR7;
    FUN2(VAR2, VAR4);
    VAR7 = FUN3(VAR4, VAR6);
    if (VAR7 < 0)
    {
        FUN4(VAR2);
        return -1;
    }
    FUN5(VAR2, VAR7);
    if (FUN6(VAR2, VAR7, VAR6) < 0)
    {
        close(VAR7);
        return -1;
    }
    FUN7(FUN8(VAR2), VAR8);
    return 0;
}