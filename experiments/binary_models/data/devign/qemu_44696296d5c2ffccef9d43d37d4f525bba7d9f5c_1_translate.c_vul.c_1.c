static void FUN1(VAR1 *VAR2, int VAR3, TCGv VAR4, TCGv VAR5, TCGv VAR6, int VAR7)
{
    TCGv VAR8;
    int VAR9;
    VAR9 = 1;
    if (VAR3 == VAR10 || VAR3 == VAR11)
        VAR8 = FUN2(VAR12);
    else
        VAR8 = FUN3(VAR12);
    if (VAR3 == VAR13)
    {
        VAR9 = 0;
    }
    else if (VAR7 == 4)
    {
        VAR8 = VAR4;
        VAR9 = 0;
    }
    FUN4(VAR2, VAR3, VAR5, VAR6, VAR7);
    FUN5(VAR2, VAR3, VAR8, VAR5, VAR6, VAR7);
    FUN6(VAR2, VAR8);
    if (VAR9)
    {
        if (VAR7 == 1)
            FUN7(VAR4, VAR4, ~0xff);
        else
            FUN7(VAR4, VAR4, ~0xffff);
        FUN8(VAR4, VAR4, VAR8);
    }
    if (VAR8 != VAR4)
        FUN9(VAR8);
}