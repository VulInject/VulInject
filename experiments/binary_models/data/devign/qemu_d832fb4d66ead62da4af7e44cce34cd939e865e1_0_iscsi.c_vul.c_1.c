static int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = NULL;
    if (VAR5->VAR9 != VAR10)
    {
        return -VAR11;
    }
    FUN2(VAR5, &VAR8);
    if (VAR8 != NULL)
    {
        FUN3(VAR8);
        return -VAR12;
    }
    if (VAR3 > FUN4(VAR2))
    {
        return -VAR13;
    }
    if (VAR5->VAR14 != NULL)
    {
        FUN5(VAR5->VAR14);
        VAR5->VAR14 = FUN6(FUN7(VAR2->VAR15, VAR5->VAR16));
    }
    return 0;
}