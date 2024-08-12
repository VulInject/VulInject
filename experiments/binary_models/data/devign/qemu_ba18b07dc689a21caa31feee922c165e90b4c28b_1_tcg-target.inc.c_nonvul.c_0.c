static int FUN1(tcg_target_long VAR1, TCGType VAR2, const VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR5;
    if (VAR5 & VAR6)
    {
        return 1;
    }
    if (VAR2 == VAR7)
    {
        VAR1 = (VAR8)VAR1;
    }
    if (VAR5 & VAR9)
    {
        return VAR1 == (VAR10)VAR1;
    }
    else if (VAR5 & VAR11)
    {
        return VAR1 == (VAR8)VAR1;
    }
    else if (VAR5 & VAR12)
    {
        return VAR1 >= -0xffffffffll && VAR1 <= 0xffffffffll;
    }
    else if (VAR5 & VAR13)
    {
        return FUN2(VAR2, VAR1);
    }
    else if (VAR5 & VAR14)
    {
        return FUN3(VAR2, VAR1);
    }
    else if (VAR5 & VAR15)
    {
        return VAR1 >= 0 && VAR1 <= 0x7fffffff;
    }
    else if (VAR5 & VAR16)
    {
        return VAR1 == 0;
    }
    return 0;
}