static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    if (!FUN2(VAR4, 23))
    {
        FUN3(VAR2->VAR8, VAR9, "");
        return -1;
    }
    VAR5 = FUN4(VAR4, 5);
    VAR6 = FUN4(VAR4, 6);
    FUN5(VAR4);
    VAR7 = FUN4(VAR4, 6);
    VAR2->VAR10 = VAR7 + 60 * (VAR6 + 60 * VAR5);
    FUN5(VAR4);
    FUN5(VAR4);
    return 0;
}