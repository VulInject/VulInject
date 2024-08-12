static void FUN1(VAR1 *VAR2, TCGReg VAR3, TCGReg VAR4, uint64_t VAR5)
{
    int VAR6, VAR7;
    FUN2(VAR8 == 64);
    if (FUN3(VAR5, &VAR6, &VAR7))
    {
        if (VAR6 == 0)
        {
            FUN4(VAR2, VAR9, VAR3, VAR4, 0, VAR7);
        }
        else
        {
            FUN4(VAR2, VAR10, VAR3, VAR4, 0, VAR6);
        }
    }
    else if ((VAR5 & 0xffff) == VAR5)
    {
        FUN5(VAR2, VAR11 | FUN6(VAR4, VAR3, VAR5));
        return;
    }
    else if ((VAR5 & 0xffff0000) == VAR5)
    {
        FUN5(VAR2, VAR12 | FUN6(VAR4, VAR3, VAR5 >> 16));
        return;
    }
    else
    {
        FUN7(VAR2, VAR13, VAR14, VAR5);
        FUN5(VAR2, VAR15 | FUN8(VAR4, VAR3, VAR14));
    }
}