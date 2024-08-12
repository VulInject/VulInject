void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    target_ulong VAR5;
    target_ulong VAR6;
    target_ulong VAR7;
    uint8_t VAR8;
    int VAR9;
    VAR8 = VAR2->VAR10 & 0xFF;
    for (VAR9 = 0; VAR9 < VAR2->VAR4->VAR11; VAR9++)
    {
        VAR4 = &VAR2->VAR4->VAR12.VAR13.VAR4[VAR9];
        VAR5 = VAR4->VAR14 | ~(VAR15 << 1);
        VAR6 = VAR2->VAR10 & ~VAR5;
        VAR7 = VAR4->VAR7 & ~VAR5;
        VAR6 &= VAR2->VAR16;
        if ((VAR4->VAR17 == 1 || VAR4->VAR8 == VAR8) && VAR7 == VAR6 && !VAR4->VAR18)
        {
            VAR2->VAR19 = VAR9;
            break;
        }
    }
    if (VAR9 == VAR2->VAR4->VAR11)
    {
        for (VAR9 = VAR2->VAR4->VAR11; VAR9 < VAR2->VAR4->VAR20; VAR9++)
        {
            VAR4 = &VAR2->VAR4->VAR12.VAR13.VAR4[VAR9];
            VAR5 = VAR4->VAR14 | ~(VAR15 << 1);
            VAR6 = VAR2->VAR10 & ~VAR5;
            VAR7 = VAR4->VAR7 & ~VAR5;
            VAR6 &= VAR2->VAR16;
            if ((VAR4->VAR17 == 1 || VAR4->VAR8 == VAR8) && VAR7 == VAR6)
            {
                FUN2(VAR2, VAR9);
                break;
            }
        }
        VAR2->VAR19 |= 0x80000000;
    }
}