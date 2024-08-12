static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    switch (VAR8->VAR13)
    {
        uint8_t VAR14;
    case VAR15:
        VAR4->VAR16 = 1;
        break;
    case VAR17:
    case VAR18:
        VAR14 = VAR12;
        VAR4->VAR16 = FUN2(2.0, VAR14 - VAR8->VAR19[VAR10]);
        VAR4->VAR16 *= VAR8->VAR20[VAR10] / 2048.0 + 1.0;
        break;
    default:
        VAR4->VAR16 = 0;
        FUN3(VAR2, VAR21, "");
        break;
    }
    if (VAR6->VAR22 != VAR23)
    {
        int VAR24 = 0;
        switch (VAR9 + (VAR11 > 0))
        {
        case 1:
        case 2:
            VAR4->VAR16 *= VAR25 * 2;
            VAR24 = 1;
            break;
        case 3:
            VAR4->VAR16 *= VAR25 * VAR25 * 4;
            break;
        }
        if (VAR6->VAR22 == VAR26)
        {
            VAR4->VAR16 *= FUN2(VAR27, 2 * (VAR6->VAR28 - VAR11) + VAR24 - 2);
        }
    }
    VAR4->VAR29 = VAR4->VAR16 * (1 << 15);
    if (!FUN4(VAR2->VAR30))
        VAR4->VAR16 *= 0.5;
}