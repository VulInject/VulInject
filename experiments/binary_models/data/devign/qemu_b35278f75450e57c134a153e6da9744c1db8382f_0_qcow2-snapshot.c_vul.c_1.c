int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    QCowSnapshot VAR7;
    int VAR8, VAR9;
    VAR8 = FUN2(VAR2, VAR3);
    if (VAR8 < 0)
    {
        return -VAR10;
    }
    VAR7 = VAR5->VAR11[VAR8];
    memmove(VAR5->VAR11 + VAR8, VAR5->VAR11 + VAR8 + 1, (VAR5->VAR12 - VAR8 - 1) * sizeof(VAR7));
    VAR5->VAR12--;
    VAR9 = FUN3(VAR2);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    FUN4(VAR7.VAR13);
    FUN4(VAR7.VAR14);
    VAR9 = FUN5(VAR2, VAR7.VAR15, VAR7.VAR16, -1);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    FUN6(VAR2, VAR7.VAR15, VAR7.VAR16 * sizeof(VAR17));
    VAR9 = FUN5(VAR2, VAR5->VAR15, VAR5->VAR16, 0);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    {
        BdrvCheckResult VAR18 = {0};
        FUN7(VAR2, &VAR18);
    }
    return 0;
}