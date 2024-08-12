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
    if (VAR6 < 4)
    {
        FUN3(VAR1, VAR2, VAR3 >> 16);
        FUN3(VAR1, VAR2 + 2, VAR3 & 0xffff);
        return;
    }
    FUN4(VAR5, VAR2, VAR3, 4);
}