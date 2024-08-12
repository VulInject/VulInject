static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5, VAR6;
    VAR6 = 0;
    if (VAR2->VAR7)
    {
        VAR6 = VAR8;
    }
    else if (FUN2(VAR2->VAR9.VAR10.VAR11))
    {
        VAR6 = VAR12;
    }
    VAR5 = VAR13;
    if (VAR6 != VAR8)
    {
        if (VAR2->VAR14)
        {
            VAR5 = VAR15;
            VAR2->VAR14 = false;
        }
        else if (VAR2->VAR16)
        {
            VAR5 = VAR17;
            VAR2->VAR16 = false;
        }
    }
    VAR4[0] = VAR5;
    VAR4[1] = VAR6;
    VAR4[2] = 0;
    VAR4[3] = 0;
    return 4;
}