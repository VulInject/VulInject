static void FUN1(int *VAR1, int *VAR2, int VAR3, VAR4 *VAR5, int VAR6, enum Mode VAR7)
{
    if (VAR6 == 0 || (VAR6 == 2 && VAR7 != VAR8))
    {
        if (VAR3 < 116)
        {
            *VAR1 = (VAR3 + 69) >> 1;
            *VAR2 = (VAR3 - (*VAR1 << 1) + 68) << 1;
        }
        else
        {
            *VAR1 = VAR3 - 24;
            *VAR2 = 0;
        }
        *VAR5 = FUN2(*VAR1 - 8 - (*VAR2 < 0), VAR9, VAR10 - 15);
    }
    else
    {
        *VAR1 = (VAR3 + 1) >> 1;
        *VAR2 = (VAR3 - (*VAR1 << 1)) << 1;
        *VAR1 += *VAR5;
    }
}