static int FUN1(int VAR1, const VAR2 *VAR3, uint32_t VAR4)
{
    int VAR5, VAR6;
    VAR6 = VAR4;
    while (VAR4 > 0)
    {
        VAR5 = write(VAR1, VAR3, VAR6);
        if (VAR5 < 0)
        {
            if (VAR7 != VAR8 && VAR7 != VAR9)
            {
                return -1;
            }
        }
        else if (VAR5 == 0)
        {
            break;
        }
        else
        {
            VAR3 += VAR5;
            VAR6 -= VAR5;
        }
    }
    return VAR4 - VAR6;
}