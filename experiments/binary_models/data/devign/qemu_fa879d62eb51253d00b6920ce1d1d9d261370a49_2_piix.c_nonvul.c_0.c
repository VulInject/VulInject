static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9 = 0;
    VAR4 = FUN2(VAR3, VAR10, VAR2);
    VAR6 = FUN2(VAR5, VAR2, VAR4);
    for (; VAR9 < 3; VAR9++)
    {
        VAR8 = FUN3(VAR11, VAR9);
        if (VAR8 != NULL && VAR8->VAR12 != NULL && !VAR8->VAR12->VAR13)
        {
            VAR1 *VAR14 = FUN4(VAR8->VAR12);
            if (VAR14)
            {
                FUN5(VAR8->VAR12, VAR14);
            }
            FUN6(VAR8->VAR12);
            VAR6->VAR15[VAR8->VAR15].VAR16[VAR8->VAR17].VAR18 = NULL;
            FUN7(VAR8);
        }
    }
    FUN8(&(VAR6->VAR2.VAR10));
    return 0;
}