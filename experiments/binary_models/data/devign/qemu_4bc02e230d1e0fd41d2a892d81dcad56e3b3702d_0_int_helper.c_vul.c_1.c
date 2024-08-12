VAR1 FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5)
{
    int64_t VAR6;
    if (FUN2(!(VAR5 & 0x40)))
    {
        if (FUN2((VAR7)VAR5 != 0))
        {
            VAR5 &= 0x3f;
            VAR6 = (VAR8)VAR4 >> VAR5;
            if (FUN2(VAR6 >= 0 || (VAR4 & ((1 << VAR5) - 1)) == 0))
            {
                VAR3->VAR9 = 0;
            }
            else
            {
                VAR3->VAR9 = 1;
            }
        }
        else
        {
            VAR6 = (VAR8)VAR4;
            VAR3->VAR9 = 0;
        }
    }
    else
    {
        VAR6 = (VAR8)VAR4 >> 63;
        VAR3->VAR9 = (VAR6 != 0);
    }
    return VAR6;
}