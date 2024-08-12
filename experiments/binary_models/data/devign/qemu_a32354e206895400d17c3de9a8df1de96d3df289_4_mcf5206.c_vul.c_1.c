static VAR1 FUN1(void *VAR2, target_phys_addr_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    int VAR6;
    VAR3 &= 0x3ff;
    if (VAR3 > 0x200)
    {
        FUN2("", (int)VAR3);
    }
    VAR6 = VAR7[VAR3 >> 2];
    if (VAR6 > 2)
    {
        uint32_t VAR8;
        VAR8 = FUN3(VAR2, VAR3 & ~3);
        if ((VAR3 & 3) == 0)
            VAR8 >>= 16;
        return VAR8 & 0xffff;
    }
    else if (VAR6 < 2)
    {
        uint16_t VAR8;
        VAR8 = FUN4(VAR2, VAR3) << 8;
        VAR8 |= FUN4(VAR2, VAR3 + 1);
        return VAR8;
    }
    return FUN5(VAR5, VAR3, 2);
}