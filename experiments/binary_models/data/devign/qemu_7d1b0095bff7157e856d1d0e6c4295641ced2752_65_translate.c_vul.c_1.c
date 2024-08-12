static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, TCGv VAR5)
{
    TCGv VAR6;
    if (VAR4)
    {
        if (FUN2(VAR2))
            return 1;
        VAR6 = FUN3(VAR4);
        FUN4(VAR6, VAR6, ~VAR3);
        FUN4(VAR5, VAR5, VAR3);
        FUN5(VAR6, VAR6, VAR5);
        FUN6(VAR6, VAR4);
    }
    else
    {
        FUN7(VAR5, VAR3);
    }
    FUN8(VAR5);
    FUN9(VAR2);
    return 0;
}