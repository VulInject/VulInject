static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, TCGArg VAR6, TCGArg VAR7, TCGArg VAR8, bool VAR9)
{
    if (VAR9)
    {
        int VAR10 = FUN2(VAR8);
        if (VAR10 < 0)
        {
            VAR8 = -VAR8;
            VAR10 = FUN2(VAR8);
            FUN3(VAR10 >= 0);
            VAR4 = VAR5;
        }
        FUN4(VAR2, VAR3, VAR4, VAR6, VAR7, FUN5(VAR8, VAR10) | (VAR10 << 7));
    }
    else
    {
        FUN6(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, FUN7(0));
    }
}