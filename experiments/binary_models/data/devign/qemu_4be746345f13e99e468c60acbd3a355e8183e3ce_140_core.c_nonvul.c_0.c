static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    bool VAR5 = (VAR4 & VAR6) != 0;
    BlockErrorAction VAR7 = FUN2(VAR2->VAR8, VAR5, VAR3);
    if (VAR7 == VAR9)
    {
        VAR2->VAR10->VAR11->VAR12->FUN3(VAR2->VAR10->VAR11, VAR2->VAR13);
        VAR2->VAR10->VAR14 = VAR4;
    }
    else if (VAR7 == VAR15)
    {
        if (VAR4 & VAR16)
        {
            FUN4(VAR2);
            FUN5(VAR2);
        }
        else
        {
            FUN6(VAR2);
        }
    }
    FUN7(VAR2->VAR8, VAR7, VAR5, VAR3);
    return VAR7 != VAR17;
}