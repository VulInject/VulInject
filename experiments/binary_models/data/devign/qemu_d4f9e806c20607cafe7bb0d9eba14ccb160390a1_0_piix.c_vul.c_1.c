int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    int VAR7 = 0;
    VAR4 = FUN2(VAR2);
    for (; VAR7 < 3; VAR7++)
    {
        VAR6 = FUN3(VAR8, VAR7);
        if (VAR6 != NULL && !VAR6->VAR9)
        {
            VAR10 *VAR11 = FUN4(VAR6);
            VAR1 *VAR12 = FUN5(VAR11);
            if (VAR12)
            {
                FUN6(VAR11, VAR12);
            }
            VAR4->VAR13[VAR6->VAR13].VAR14[VAR6->VAR15].VAR11 = NULL;
            FUN7(VAR11);
        }
    }
    FUN8(FUN9(VAR2));
    return 0;
}