static void FUN1(VAR1 *VAR2)
{
    size_t VAR3;
    if (!VAR2)
    {
        return;
    }
    VAR2->VAR4 = false;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        if (VAR2->VAR6[VAR3])
        {
            FUN2(VAR2->VAR6[VAR3]);
        }
        FUN3(FUN4(VAR2->VAR7[VAR3]));
    }
    FUN5(VAR2->VAR7);
    FUN5(VAR2->VAR6);
    VAR2->VAR7 = NULL;
    VAR2->VAR6 = NULL;
    VAR2->VAR5 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR8; VAR3++)
    {
        if (VAR2->VAR9[VAR3])
        {
            FUN2(VAR2->VAR9[VAR3]);
        }
        FUN3(FUN4(VAR2->VAR10[VAR3]));
    }
    FUN5(VAR2->VAR10);
    FUN5(VAR2->VAR9);
    VAR2->VAR10 = NULL;
    VAR2->VAR9 = NULL;
    VAR2->VAR8 = 0;
    VAR2->VAR11 = VAR12;
    VAR2->VAR13 = VAR12;
    if (VAR2->VAR14)
    {
        FUN6(FUN4(VAR2->VAR14));
        VAR2->VAR14 = NULL;
    }
    FUN5(VAR2->VAR15);
    VAR2->VAR15 = NULL;
    if (VAR2->VAR16)
    {
        FUN7(VAR2->VAR17);
    }