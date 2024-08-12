static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9;
    FUN2(&VAR2->VAR10);
    VAR2->VAR11 = FUN3();
    FUN4(VAR2->VAR12, VAR13, VAR14, VAR15, NULL, VAR2);
    VAR8 = FUN5(VAR2->VAR12, VAR4);
    if (VAR8 >= 0 && VAR6)
    {
        VAR9 = FUN6(VAR2->VAR12, VAR6, VAR4->VAR16, VAR7);
        if (VAR9 != VAR4->VAR16)
        {
            return -VAR17;
        }
    }
    FUN4(VAR2->VAR12, VAR13, NULL, VAR15, NULL, VAR2);
    VAR2->VAR11 = NULL;
    FUN7(&VAR2->VAR10);
    return VAR8;
}