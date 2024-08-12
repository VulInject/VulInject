static void FUN1(VAR1 *VAR2, uint32_t VAR3, unsigned int VAR4, unsigned int VAR5, unsigned int VAR6)
{
    unsigned int VAR7 = VAR6 << 3 | VAR5;
    if (VAR4 != 3)
    {
        FUN2(VAR2);
        return;
    }
    switch (VAR7)
    {
    case 0:
        return;
    case 3:
        VAR2->VAR8.VAR9 = VAR10;
        return;
    case 1:
        if (!(FUN3(VAR2->VAR8.VAR11) & VAR12))
        {
            VAR2->VAR8.VAR9 = VAR13;
        }
        return;
    case 2:
        if (!(FUN3(VAR2->VAR8.VAR11) & VAR12))
        {
            VAR2->VAR8.VAR9 = VAR14;
        }
        return;
    case 4:
    case 5:
        return;
    default:
        return;
    }
}