FUN1(int VAR1, struct VAR2 *VAR3, unsigned VAR4, size_t VAR5, size_t VAR6, bool VAR7)
{
    size_t VAR8 = 0;
    ssize_t VAR9;
    while (VAR8 < VAR6)
    {
        VAR9 = FUN2(VAR1, VAR3, VAR5 + VAR8, VAR6 - VAR8, VAR7);
        if (VAR9 > 0)
        {
            VAR8 += VAR9;
        }
        else if (VAR9 < 0)
        {
            if (VAR10 == VAR11)
            {
                FUN3();
            }
            else if (VAR8 == 0)
            {
                return -1;
            }
            else
            {
                break;
            }
        }
        else if (VAR9 == 0 && !VAR7)
        {
            break;
        }
    }
    return VAR8;
}