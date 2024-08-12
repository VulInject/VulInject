static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint8_t VAR6;
    int VAR7;
    if (VAR5->VAR8++ > 1)
    {
        FUN3("", VAR9, VAR5->VAR8);
        return 1;
    }
    if (VAR5->VAR10)
    {
        VAR5->VAR11 = VAR3;
        VAR5->VAR10 = 0;
        return 0;
    }
    switch (VAR5->VAR11)
    {
    case 0x01:
        for (VAR6 = (VAR3 ^ VAR5->VAR12) & ~VAR5->VAR13; VAR6; VAR6 &= ~(1 << VAR7))
        {
            VAR7 = FUN4(VAR6);
            if (VAR5->VAR14[VAR7])
                FUN5(VAR5->VAR14[VAR7], (VAR3 >> VAR7) & 1);
        }
        VAR5->VAR12 = (VAR5->VAR12 & VAR5->VAR13) | (VAR3 & ~VAR5->VAR13);
        break;
    case 0x02:
        VAR5->VAR15 = VAR3;
        break;
    case 0x03:
        VAR5->VAR12 &= ~(VAR5->VAR13 ^ VAR3);
        VAR5->VAR13 = VAR3;
        break;
    case 0x04:
        VAR5->VAR16 = VAR3;
        break;
    case 0x00:
        break;
    default:
        FUN3("", VAR9, VAR5->VAR11);
        return 1;
    }
    return 0;
}