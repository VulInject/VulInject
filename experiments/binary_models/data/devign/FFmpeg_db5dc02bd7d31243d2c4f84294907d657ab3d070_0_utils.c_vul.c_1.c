static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    if (VAR2->VAR5 == VAR6)
        return -1;
    if (VAR2->VAR4 <= 1)
    {
        int VAR7 = FUN2(VAR2->VAR5);
        if (VAR7)
        {
            if (VAR2->VAR8 == 0)
                return -1;
            VAR4 = (VAR3 << 3) / (VAR7 * VAR2->VAR8);
        }
        else
        {
            if (VAR2->VAR9 == 0)
                return -1;
            VAR4 = (VAR3 * 8 * VAR2->VAR10) / VAR2->VAR9;
        }
    }
    else
    {
        VAR4 = VAR2->VAR4;
    }
    return VAR4;
}