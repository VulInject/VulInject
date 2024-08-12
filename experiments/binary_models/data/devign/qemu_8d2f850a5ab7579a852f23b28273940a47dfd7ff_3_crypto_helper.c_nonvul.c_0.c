VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5, uint32_t VAR6, uint32_t VAR7, uint32_t VAR8)
{
    const uintptr_t VAR9 = FUN2();
    const uint8_t VAR10 = VAR4->VAR11[0] & 0x80ULL;
    const uint8_t VAR12 = VAR4->VAR11[0] & 0x7fULL;
    uint8_t VAR13[16] = {0};
    uint64_t VAR14;
    int VAR15;
    switch (VAR8)
    {
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
        if (VAR10)
        {
            FUN3(VAR4, VAR21, 4, VAR9);
            return 0;
        }
        break;
    }
    FUN4(VAR8, VAR13);
    if (!FUN5(VAR12, VAR13))
    {
        FUN3(VAR4, VAR21, 4, VAR9);
        return 0;
    }
    switch (VAR12)
    {
    case 0:
        for (VAR15 = 0; VAR15 < 16; VAR15++)
        {
            VAR14 = FUN6(VAR4, VAR4->VAR11[1] + VAR15);
            FUN7(VAR4, VAR14, VAR13[VAR15], VAR9);
        }
        break;
    default:
        FUN8();
    }
    return 0;
}