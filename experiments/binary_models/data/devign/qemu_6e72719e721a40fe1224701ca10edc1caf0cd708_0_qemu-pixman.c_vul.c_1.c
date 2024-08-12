int FUN1(int VAR1, int VAR2, int VAR3)
{
    int VAR4 = VAR5;
    if (VAR1 > VAR2 && VAR2 > VAR3)
    {
        if (VAR3 == 0)
        {
            VAR4 = VAR6;
        }
        else
        {
            VAR4 = VAR7;
        }
    }
    else if (VAR1 < VAR2 && VAR2 < VAR3)
    {
        if (VAR1 == 0)
        {
            VAR4 = VAR8;
        }
        else
        {
            VAR4 = VAR9;
        }
    }
    return VAR4;