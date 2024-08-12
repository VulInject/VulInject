void FUN1(VAR1)(VAR2 *VAR3, uint64_t VAR4, uint64_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(FUN3(VAR3));
    const uintptr_t VAR9 = FUN4();
    uint64_t VAR10, VAR11, VAR12;
    uint16_t VAR13, VAR14, VAR15 = 0;
    if (VAR5 & 0xff000)
    {
        FUN5(VAR3, VAR16, 4, VAR9);
    }
    if (!(VAR5 & 0x800))
    {
        VAR10 = VAR4 & VAR17;
        VAR13 = (VAR5 & 0x7ff) + 1;
        switch (VAR4 & VAR18)
        {
        case VAR19:
            VAR15 = (VAR5 >> 53) & 0x7ff;
            break;
        case VAR20:
            VAR15 = (VAR5 >> 42) & 0x7ff;
            break;
        case VAR21:
            VAR15 = (VAR5 >> 31) & 0x7ff;
            break;
        case VAR22:
            VAR15 = (VAR5 >> 20) & 0x7ff;
            break;
        }
        for (VAR14 = 0; VAR14 < VAR13; VAR14++)
        {
            VAR12 = VAR10 + ((VAR15 + VAR14) & 0x7ff) * sizeof(VAR11);
            VAR11 = FUN6(VAR3, VAR12, VAR9);
            if (!(VAR11 & VAR23))
            {
                VAR11 |= VAR23;
                FUN7(VAR3, VAR12, VAR11, VAR9);
            }
        }
    }
    if (VAR6 & 1)
    {
        FUN8(VAR8);
    }
    else
    {
        FUN9(VAR8);
    }
}