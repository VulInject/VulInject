static void FUN1(VAR1 *VAR2)
{
    uint16_t VAR3[12];
    int VAR4, VAR5;
    int VAR6, VAR7;
    uint16_t VAR8;
    VAR4 = (VAR2->VAR9[VAR10] & VAR11) ? 2 : 1;
    while (1)
    {
        FUN2("", (VAR2->VAR9[VAR12] << 16) | VAR2->VAR9[VAR13]);
        VAR5 = sizeof(VAR14) * 6 * VAR4;
        VAR2->VAR9[VAR15] = VAR2->VAR9[VAR13];
        VAR2->FUN3(VAR2->VAR16, ((VAR2->VAR9[VAR12] << 16) | VAR2->VAR9[VAR15]) + sizeof(VAR14) * VAR4, (VAR17 *)VAR3, VAR5, 0);
        VAR6 = 0;
        VAR2->VAR9[VAR18] = VAR3[0 * VAR4] & 0xf000;
        VAR2->VAR9[VAR19] = VAR3[1 * VAR4];
        VAR2->VAR9[VAR20] = VAR3[2 * VAR4];
        VAR2->VAR9[VAR21] = VAR3[3 * VAR4];
        VAR2->VAR9[VAR22] = VAR3[4 * VAR4];
        VAR2->VAR9[VAR23] = VAR3[5 * VAR4];
        if (VAR2->VAR9[VAR18] & VAR24)
        {
            VAR2->VAR9[VAR25] |= VAR26;
        }
        else
        {
            VAR2->VAR9[VAR25] &= ~VAR26;
        }
        for (VAR8 = 0; VAR8 < VAR2->VAR9[VAR20];)
        {
            VAR7 = VAR2->VAR9[VAR23];
            if (VAR6 + VAR7 > sizeof(VAR2->VAR27))
            {
                VAR7 = sizeof(VAR2->VAR27) - VAR6;
            }
            VAR2->FUN3(VAR2->VAR16, (VAR2->VAR9[VAR22] << 16) | VAR2->VAR9[VAR21], &VAR2->VAR27[VAR6], VAR7, 0);
            VAR6 += VAR7;
            VAR8++;
            if (VAR8 != VAR2->VAR9[VAR20])
            {
                VAR5 = sizeof(VAR14) * 3 * VAR4;
                VAR2->FUN3(VAR2->VAR16, ((VAR2->VAR9[VAR12] << 16) | VAR2->VAR9[VAR15]) + sizeof(VAR14) * (4 + 3 * VAR8) * VAR4, (VAR17 *)VAR3, VAR5, 0);
                VAR2->VAR9[VAR21] = VAR3[0 * VAR4];
                VAR2->VAR9[VAR22] = VAR3[1 * VAR4];
                VAR2->VAR9[VAR23] = VAR3[2 * VAR4];
            }
        }
        if (!(VAR2->VAR9[VAR18] & VAR28))
        {
        }
        else
        {
            VAR6 -= 4;
        }
        if (VAR2->VAR9[VAR29] & (VAR30 | VAR31))
        {
            VAR2->VAR9[VAR18] |= VAR32;
            if (VAR2->VAR33->FUN4(VAR2->VAR33))
            {
                VAR2->VAR34 = 1;
                VAR2->VAR33->FUN5(VAR2->VAR33, VAR2->VAR27, VAR6);
            }
        }
        else
        {
            FUN6(VAR2->VAR33, VAR2->VAR27, VAR6);
        }
        VAR2->VAR9[VAR18] |= VAR35;
        VAR3[0 * VAR4] = VAR2->VAR9[VAR18] & 0x0fff;
        VAR5 = sizeof(VAR14) * VAR4;
        VAR2->FUN3(VAR2->VAR16, (VAR2->VAR9[VAR12] << 16) | VAR2->VAR9[VAR15], (VAR17 *)VAR3, VAR5, 1);
        if (!(VAR2->VAR9[VAR36] & VAR37))
        {
            VAR5 = sizeof(VAR14) * VAR4;
            VAR2->FUN3(VAR2->VAR16, ((VAR2->VAR9[VAR12] << 16) | VAR2->VAR9[VAR15]) + sizeof(VAR14) * (4 + 3 * VAR2->VAR9[VAR20]) * VAR4, (VAR17 *)VAR3, VAR5, 0);
            VAR2->VAR9[VAR13] = VAR3[0 * VAR4] & ~0x1;
            if (VAR3[0 * VAR4] & 0x1)
            {
                break;
            }
        }
    }
    VAR2->VAR9[VAR36] &= ~VAR38;
    VAR2->VAR9[VAR25] |= VAR39;
    FUN7(VAR2);
}