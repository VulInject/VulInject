static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    VAR3 &= 0x3ff;
    if (VAR3 > 0x200)
    {
        FUN2("", (int)VAR3);
    }
    if (VAR6[VAR3 >> 2] > 1)
    {
        uint16_t VAR7;
        VAR7 = FUN3(VAR2, VAR3 & ~1);
        if ((VAR3 & 1) == 0)
        {
            VAR7 >>= 8;
        }
        return VAR7 & 0xff;
    }
    return FUN4(VAR5, VAR3, 1);
}