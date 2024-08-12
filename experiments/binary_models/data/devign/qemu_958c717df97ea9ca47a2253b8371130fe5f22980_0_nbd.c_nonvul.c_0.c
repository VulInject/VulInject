static VAR1 FUN1(VAR2 *VAR3, struct VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR3->VAR8;
    int VAR9 = VAR8->VAR10;
    ssize_t VAR11, VAR12;
    FUN2(&VAR8->VAR13);
    VAR8->VAR14 = FUN3();
    FUN4(VAR8);
    if (!VAR6)
    {
        VAR11 = FUN5(VAR9, VAR5);
    }
    else
    {
        FUN6(VAR9, 1);
        VAR11 = FUN5(VAR9, VAR5);
        if (VAR11 >= 0)
        {
            VAR12 = FUN7(VAR9, VAR3->VAR15, VAR6);
            if (VAR12 != VAR6)
            {
                VAR11 = -VAR16;
            }
        }
        FUN6(VAR9, 0);
    }
    VAR8->VAR14 = NULL;
    FUN4(VAR8);
    FUN8(&VAR8->VAR13);
    return VAR11;
}