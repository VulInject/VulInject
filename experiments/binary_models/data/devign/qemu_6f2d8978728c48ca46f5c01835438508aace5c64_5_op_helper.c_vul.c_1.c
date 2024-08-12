void FUN1(void)
{
    int32_t VAR1;
    if (FUN2(!(VAR2 & 0x20UL)))
    {
        if (FUN2((VAR3)VAR2 != 0))
        {
            VAR1 = (VAR4)VAR5 >> (VAR2 & 0x1fUL);
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
        VAR1 = (-1) * ((VAR3)VAR5 >> 31);
        if (FUN2(VAR1 >= 0 || ((VAR3)VAR5 & ~0x80000000UL) == 0))
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