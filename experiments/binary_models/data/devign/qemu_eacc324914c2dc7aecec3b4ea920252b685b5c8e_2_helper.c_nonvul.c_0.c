static int FUN1(VAR1 *VAR2, target_ulong VAR3, VAR4 *VAR5, VAR4 *VAR6, int *VAR7)
{
    target_phys_addr_t VAR8;
    target_ulong VAR9;
    uint64_t VAR10;
    uint32_t VAR11;
    int VAR12, VAR13;
    VAR13 = -5;
    VAR8 = VAR2->VAR14[VAR15];
    if (VAR16 != 0)
    {
        fprintf(VAR17, "" VAR18 "" VAR19 "", VAR20, VAR3, VAR8);
    }
    VAR9 = 0x0000000000000000ULL;
    for (VAR12 = 0; VAR12 < VAR2->VAR21; VAR12++)
    {
        VAR10 = FUN2(VAR8);
        VAR11 = FUN3(VAR8 + 8);
        if (VAR16 != 0)
        {
            fprintf(VAR17, "" VAR19 "" VAR22 "" VAR23 "", VAR20, VAR12, VAR8, VAR10, VAR11);
        }
        if (FUN4(VAR10))
        {
            switch (VAR10 & 0x0000000006000000ULL)
            {
            case 0x0000000000000000ULL:
                VAR9 = 0xFFFFFFFFF0000000ULL;
                break;
            case 0x0000000002000000ULL:
                VAR9 = 0xFFFF000000000000ULL;
                break;
            case 0x0000000004000000ULL:
            case 0x0000000006000000ULL:
                continue;
            }
            if ((VAR3 & VAR9) == (VAR10 & VAR9))
            {
                *VAR5 = ((VAR10 << 24) | (VAR11 >> 8)) & 0x0003FFFFFFFFFFFFULL;
                *VAR6 = ~VAR9;
                *VAR7 = VAR11 & 0xFF;
                VAR13 = VAR12;
                break;
            }
        }
        VAR8 += 12;
    }
    return VAR13;
}