bool FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR3 & VAR4)
    {
        VAR5 *VAR6 = FUN2(VAR2);
        VAR7 *VAR8 = &VAR6->VAR8;
        if (VAR8->VAR9)
        {
            return false;
        }
        if (FUN3(VAR6))
        {
            FUN4(VAR2);
            return true;
        }
    }
    return false;
}