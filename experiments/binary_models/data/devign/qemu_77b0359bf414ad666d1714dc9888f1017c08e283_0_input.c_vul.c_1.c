static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    FUN2(!FUN3(VAR3));
    VAR5 = FUN4(VAR3);
    FUN2(VAR5->VAR6 == VAR7);
    FUN5(VAR3, VAR5, VAR8);
    FUN6(VAR5);
    while (!FUN3(VAR3))
    {
        VAR5 = FUN4(VAR3);
        switch (VAR5->VAR6)
        {
        case VAR7:
            FUN7(VAR5->VAR9, FUN8(VAR10) + VAR5->VAR11);
            return;
        case VAR12:
            FUN9(VAR5->VAR13, VAR5->VAR14);
            FUN10(VAR5->VAR14);
            break;
        case VAR15:
            FUN11();
            break;
        }
        FUN5(VAR3, VAR5, VAR8);
        FUN6(VAR5);
    }