static int FUN1(VAR1 *VAR2, bool VAR3)
{
    uint32_t VAR4;
    VAR5 *VAR6;
    if (VAR3)
    {
        switch (VAR2->VAR7.FUN2(&VAR2->VAR7))
        {
        case 8:
            VAR4 = 64;
            break;
        case 15:
        case 16:
            VAR4 = 128;
            break;
        case 24:
        case 32:
        default:
            VAR4 = 256;
            break;
        }
        VAR2->VAR8 &= ~(VAR4 - 1);
        if (VAR2->VAR8 + VAR4 > VAR2->VAR7.VAR9)
        {
            return 0;
        }
        VAR6 = VAR2->VAR7.VAR10 + VAR2->VAR8;
    }
    else
    {
        VAR6 = VAR2->VAR11;
    }
    if (FUN3(VAR2, true))
    {
        return 0;
    }
    (*VAR2->VAR12)(VAR2, VAR2->VAR13, VAR6, VAR2->VAR14, 0, VAR2->VAR15, VAR2->VAR16);
    FUN4(VAR2, VAR2->VAR13, VAR2->VAR14, VAR2->VAR15, VAR2->VAR16);
    return 1;
}