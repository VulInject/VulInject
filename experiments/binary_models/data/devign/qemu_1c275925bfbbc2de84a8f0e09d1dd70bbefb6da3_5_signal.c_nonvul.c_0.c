static int FUN1(VAR1 *VAR2, target_ulong VAR3, struct VAR4 *VAR5)
{
    sigset_t VAR6;
    VAR7 *VAR8;
    FUN2(&VAR6, &VAR5->VAR9);
    FUN3(VAR10, &VAR6, NULL);
    if (FUN4(VAR2, &VAR5->VAR11))
        return 1;
    VAR8 = VAR5->VAR12;
    if (FUN5(VAR2, VAR13))
    {
        VAR8 = FUN6(VAR2, VAR8);
        if (!VAR8)
        {
            return 1;
        }
    }
    if (FUN5(VAR2, VAR14))
    {
        VAR8 = FUN7(VAR2, VAR8);
        if (!VAR8)
        {
            return 1;
        }
    }
    if (FUN8(VAR3 + FUN9(struct VAR4, VAR15), 0, FUN10(VAR2)) == -VAR16)
        return 1;
    if (FUN11(VAR17))
        FUN12(VAR18, VAR17, 1);
    return 0;
}