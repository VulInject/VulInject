static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    if (VAR4->VAR6 & VAR7)
    {
        int VAR8 = FUN2(VAR2);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        VAR4->VAR6 &= ~VAR7;
        return FUN3(VAR2);
    }
    return 0;
}