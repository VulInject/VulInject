static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    while (VAR2->VAR5 >= VAR2->VAR6)
    {
        VAR4 = FUN2(VAR2);
        if (VAR4 < 0)
            return -1;
        else if (VAR4 == 0)
        {
            break;
        }
        else
        {
            return 0;
        }
    }
    if (VAR2->VAR6 > VAR2->VAR5)
    {
        VAR3 = write(VAR2->VAR7, VAR2->VAR5, VAR2->VAR6 - VAR2->VAR5);
        if (VAR3 < 0)
        {
            if (VAR8 != VAR9 && VAR8 != VAR10)
            {
                return -1;
            }
        }
        else
        {
            VAR2->VAR5 += VAR3;
            VAR2->VAR11 += VAR3;
        }
    }
    return 0;
}