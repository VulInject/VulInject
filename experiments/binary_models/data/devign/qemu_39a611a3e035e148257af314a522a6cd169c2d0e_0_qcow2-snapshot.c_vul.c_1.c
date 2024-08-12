int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    QCowSnapshot VAR10;
    int VAR11, VAR12;
    VAR11 = FUN2(VAR2, VAR3, VAR4);
    if (VAR11 < 0)
    {
        FUN3(VAR6, "");
        return -VAR13;
    }
    VAR10 = VAR8->VAR14[VAR11];
    memmove(VAR8->VAR14 + VAR11, VAR8->VAR14 + VAR11 + 1, (VAR8->VAR15 - VAR11 - 1) * sizeof(VAR10));
    VAR8->VAR15--;
    VAR12 = FUN4(VAR2);
    if (VAR12 < 0)
    {
        FUN3(VAR6, "");
        return VAR12;
    }
    FUN5(VAR10.VAR16);
    FUN5(VAR10.VAR4);
    VAR12 = FUN6(VAR2, VAR10.VAR17, VAR10.VAR18, -1);
    if (VAR12 < 0)
    {
        FUN3(VAR6, "");
        return VAR12;
    }
    FUN7(VAR2, VAR10.VAR17, VAR10.VAR18 * sizeof(VAR19), VAR20);
    VAR12 = FUN6(VAR2, VAR8->VAR17, VAR8->VAR18, 0);
    if (VAR12 < 0)
    {
        FUN3(VAR6, "");
        return VAR12;
    }
    {
        BdrvCheckResult VAR21 = {0};
        FUN8(VAR2, &VAR21, 0);
    }
    return 0;
}