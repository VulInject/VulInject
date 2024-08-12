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
    if (VAR6 < 4)
    {
        uint32_t VAR8;
        VAR8 = FUN3(VAR2, VAR3) << 16;
        VAR8 |= FUN3(VAR2, VAR3 + 2);
        return VAR8;
    }
    return FUN4(VAR5, VAR3, 4);
}