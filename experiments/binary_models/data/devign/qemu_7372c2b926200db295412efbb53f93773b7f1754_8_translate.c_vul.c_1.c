static inline VAR1 FUN1(VAR2 *VAR3, int VAR4, TCGv VAR5, int VAR6)
{
    TCGv VAR7;
    int VAR8 = FUN2(VAR3);
    VAR3->VAR9 = 1;
    VAR7 = FUN3();
    switch (VAR4)
    {
    case VAR10:
        if (VAR6)
            FUN4(VAR7, VAR5, VAR8);
        else
            FUN5(VAR7, VAR5, VAR8);
        break;
    case VAR11:
        if (VAR6)
            FUN6(VAR7, VAR5, VAR8);
        else
            FUN7(VAR7, VAR5, VAR8);
        break;
    case VAR12:
    case VAR13:
        FUN8(VAR7, VAR5, VAR8);
        break;
    default:
        FUN9(0, "");
    }
    VAR14 = VAR15;
    return VAR7;
}