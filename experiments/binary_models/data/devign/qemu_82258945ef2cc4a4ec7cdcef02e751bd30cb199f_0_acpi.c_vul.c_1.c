static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    int64_t VAR5;
    VAR4 = FUN2(VAR2);
    VAR3 = (((VAR4 & VAR2->VAR6) & (VAR7 | VAR8 | VAR9 | VAR10)) != 0);
    FUN3(VAR2->VAR11, VAR3);
    if ((VAR2->VAR6 & VAR10) && !(VAR4 & VAR10))
    {
        VAR5 = FUN4(VAR2->VAR12, VAR13, VAR14);
        FUN5(VAR2->VAR15, VAR5);
        VAR2->VAR12 += 0x800000;
    }
    else
    {
        FUN6(VAR2->VAR15);
    }
}