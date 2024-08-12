static int FUN1(VAR1 *VAR2, const unsigned char *VAR3, int VAR4)
{
    int VAR5;
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9;
    FUN2(VAR2, "", VAR4);
    if (VAR7->VAR10 == VAR11)
    {
        if ((VAR5 = FUN3(VAR2)) < 0)
            return VAR5;
    }
    if (VAR7->VAR10 == VAR12)
    {
        if ((VAR5 = FUN4(VAR7)) < 0)
            return VAR5;
    }
    if (VAR7->VAR13 && VAR7->VAR10 == VAR14)
    {
        VAR9 = FUN5(VAR7->VAR13, VAR3, VAR4);
        if (VAR9 > 0)
        {
            VAR7->VAR15 += VAR9;
            VAR7->VAR16 = FUN6(VAR7->VAR16, VAR7->VAR15);
        }
        return VAR9;
    }
    FUN7(VAR2, VAR17, "");
    return FUN8(VAR18);
}