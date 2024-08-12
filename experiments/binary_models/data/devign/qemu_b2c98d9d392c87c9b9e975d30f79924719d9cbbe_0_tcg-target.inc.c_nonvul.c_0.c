static int FUN1(TCGType VAR1, tcg_target_long VAR2)
{
    if (VAR3 & VAR4)
    {
        if (VAR1 == VAR5)
        {
            return 1;
        }
        else
        {
            return VAR2 >= 0 && VAR2 <= 0x7fffffff;
        }
    }
    else
    {
        return VAR2 == 0;
    }
}