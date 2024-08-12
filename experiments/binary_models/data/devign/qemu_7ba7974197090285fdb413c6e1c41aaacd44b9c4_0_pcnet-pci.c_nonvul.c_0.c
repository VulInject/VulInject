static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    if (VAR3 < 0x10)
    {
        if (!FUN2(VAR6) && VAR4 == 1)
        {
            return FUN3(VAR6, VAR3);
        }
        else if (!FUN2(VAR6) && (VAR3 & 1) == 0 && VAR4 == 2)
        {
            return FUN3(VAR6, VAR3) | (FUN3(VAR6, VAR3 + 1) << 8);
        }
        else if (FUN2(VAR6) && (VAR3 & 3) == 0 && VAR4 == 4)
        {
            return FUN3(VAR6, VAR3) | (FUN3(VAR6, VAR3 + 1) << 8) | (FUN3(VAR6, VAR3 + 2) << 16) | (FUN3(VAR6, VAR3 + 3) << 24);
        }
    }
    else
    {
        if (VAR4 == 2)
        {
            return FUN4(VAR6, VAR3);
        }
        else if (VAR4 == 4)
        {
            return FUN5(VAR6, VAR3);
        }
    }
    return ((VAR1)1 << (VAR4 * 8)) - 1;
}