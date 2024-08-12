static VAR1 FUN1(VAR2 *VAR3, hwaddr VAR4, IOMMUAccessFlags VAR5)
{
    VAR6 *VAR7 = FUN2(VAR3, VAR6, VAR3);
    IOMMUTLBEntry VAR8;
    int VAR9;
    if (VAR4 <= 0xffffffffu)
    {
        if ((VAR7->VAR10 & 0x20) && VAR4 >= 0x80000 && VAR4 <= 0xfffff)
        {
            goto VAR11;
        }
        for (VAR9 = 0; VAR9 < 3; ++VAR9)
        {
            if (FUN3(&VAR7->VAR12[VAR9], VAR4, &VAR8))
            {
                goto VAR13;
            }
        }
        if ((VAR7->VAR12[3].VAR14 & 0x80000000000ull) == 0 && FUN3(&VAR7->VAR12[3], VAR4, &VAR8))
        {
            goto VAR13;
        }
    }
    else
    {
        if (VAR4 >= 0x10000000000ull && VAR4 < 0x20000000000ull)
        {
            if (VAR7->VAR10 & 0x40)
            {
                FUN4(0, 0x007ffffffffull, &VAR8);
                goto VAR13;
            }
        }
        if (VAR4 >= 0x80000000000ull && VAR4 <= 0xfffffffffffull)
        {
            if ((VAR7->VAR12[3].VAR14 & 0x80000000001ull) == 0x80000000001ull)
            {
                uint64_t VAR15;
                VAR15 = VAR7->VAR12[3].VAR16 & 0x7ffc00000ull;
                VAR15 |= (VAR4 & 0xffffe000u) >> 10;
                if (FUN5(VAR15, &VAR8))
                {
                    goto VAR13;
                }
            }
        }
    }
VAR11:
    VAR8 = (VAR1){.VAR17 = VAR18};
VAR13:
    return VAR8;
}