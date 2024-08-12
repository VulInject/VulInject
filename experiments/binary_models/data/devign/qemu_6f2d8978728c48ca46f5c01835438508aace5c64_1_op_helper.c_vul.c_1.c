void FUN1(void)
{
    int64_t VAR1;
    if (FUN2(!(VAR2 & 0x40UL)))
    {
        if (FUN2((VAR3)VAR2 != 0))
        {
            VAR1 = (VAR4)VAR5 >> (VAR2 & 0x3FUL);
            if (FUN2(VAR1 >= 0 || ((VAR4)VAR5 & ((1 << VAR2) - 1)) == 0))
            {
                VAR6 = 0;
            }
            else
            {
                VAR6 = 1;
            }
        }
        else
        {
            VAR1 = VAR5;
            VAR6 = 0;
        }
    }
    else
    {
        VAR1 = (-1) * ((VAR3)VAR5 >> 63);
        if (FUN2(VAR1 >= 0 || ((VAR3)VAR5 & ~0x8000000000000000ULL) == 0))
        {
            VAR6 = 0;
        }
        else
        {
            VAR6 = 1;
        }
    }
    VAR5 = VAR1;
}