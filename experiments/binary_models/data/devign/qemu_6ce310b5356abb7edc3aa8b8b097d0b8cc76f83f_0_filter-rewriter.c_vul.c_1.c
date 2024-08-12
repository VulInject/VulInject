static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR8;
    VAR8 = (struct VAR7 *)VAR6->VAR9;
    if (FUN2(VAR10))
    {
        FUN3(VAR11, FUN4(VAR6->VAR12->VAR13), FUN4(VAR6->VAR12->VAR14), FUN5(VAR8->VAR15), FUN5(VAR8->VAR16), VAR8->VAR17);
        FUN6(VAR4->VAR18);
    }
    if (((VAR8->VAR17 & (VAR19 | VAR20)) == VAR20))
    {
        VAR4->VAR21 = 1;
    }
    if (((VAR8->VAR17 & (VAR19 | VAR20)) == VAR19))
    {
        if (VAR4->VAR21)
        {
            VAR4->VAR18 -= (FUN5(VAR8->VAR16) - 1);
            VAR4->VAR21 = 0;
        }
        if (VAR4->VAR18)
        {
            VAR8->VAR16 = FUN7(FUN5(VAR8->VAR16) + VAR4->VAR18);
            FUN8((VAR22 *)VAR6->VAR23, VAR6->VAR24);
        }
    }
    return 0;
}