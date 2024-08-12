static void FUN1(void *VAR1, target_phys_addr_t VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = (struct VAR4 *)VAR1;
    int VAR6 = VAR2 - VAR5->VAR7;
    int VAR8 = VAR6 >> 6;
    uint8_t VAR9 = VAR3;
    if (VAR8 == VAR10)
    {
        FUN2(VAR5->VAR11, (const VAR12 *)"", 1);
    }
    else if (VAR8 == VAR13 || 1)
    {
        if (VAR3 == 0xc0 || VAR3 == 0xc3)
        {
        }
        else if (VAR3 == 0x00)
            FUN2(VAR5->VAR11, (const VAR12 *)"", 1);
        else
            FUN2(VAR5->VAR11, &VAR9, 1);
    }
}