static unsigned int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5, VAR6;
    VAR6 = 0;
    if (VAR2->VAR7)
    {
        VAR6 = VAR8;
    }
    else if (FUN2(VAR2->VAR9))
    {
        VAR6 = VAR10;
    }
    VAR5 = VAR11;
    if (VAR6 != VAR8)
    {
        if (VAR2->VAR12.VAR13)
        {
            VAR5 = VAR14;
            VAR2->VAR12.VAR13 = false;
        }
        else if (VAR2->VAR12.VAR15)
        {
            VAR5 = VAR16;
            VAR2->VAR12.VAR15 = false;
        }
    }
    VAR4[4] = VAR5;
    VAR4[5] = VAR6;
    VAR4[6] = 0;
    VAR4[7] = 0;
    return 8;
}