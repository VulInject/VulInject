static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = (VAR4 *)VAR1;
    int VAR6;
    VAR2 &= 0x3ff;
    if (VAR2 > 0x200)
    {
        FUN2("", (int)VAR2);
    }
    VAR6 = VAR7[VAR2 >> 2];
    if (VAR6 > 1)
    {
        uint32_t VAR8;
        VAR8 = FUN3(VAR1, VAR2 & ~1);
        if (VAR2 & 1)
        {
            VAR8 = (VAR8 & 0xff00) | VAR3;
        }
        else
        {
            VAR8 = (VAR8 & 0x00ff) | (VAR3 << 8);
        }
        FUN4(VAR1, VAR2 & ~1, VAR8);
        return;
    }
    FUN5(VAR5, VAR2, VAR3, 1);
}