static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    if (VAR3 >= 0xfe0 && VAR3 < 0x1000)
    {
        return VAR6->VAR8[(VAR3 - 0xfe0) >> 2];
    }
    switch (VAR3 >> 2)
    {
    case 0:
        VAR6->VAR9 &= ~VAR10;
        VAR7 = VAR6->VAR11[VAR6->VAR12];
        if (VAR6->VAR13 > 0)
        {
            VAR6->VAR13--;
            if (++VAR6->VAR12 == 16)
                VAR6->VAR12 = 0;
        }
        if (VAR6->VAR13 == 0)
        {
            VAR6->VAR9 |= VAR14;
        }
        if (VAR6->VAR13 == VAR6->VAR15 - 1)
            VAR6->VAR16 &= ~VAR17;
        FUN2(VAR6);
        if (VAR6->VAR18)
        {
            FUN3(VAR6->VAR18);
        }
        return VAR7;
    case 1:
        return 0;
    case 6:
        return VAR6->VAR9;
    case 8:
        return VAR6->VAR19;
    case 9:
        return VAR6->VAR20;
    case 10:
        return VAR6->VAR21;
    case 11:
        return VAR6->VAR22;
    case 12:
        return VAR6->VAR23;
    case 13:
        return VAR6->VAR24;
    case 14:
        return VAR6->VAR25;
    case 15:
        return VAR6->VAR16;
    case 16:
        return VAR6->VAR16 & VAR6->VAR25;
    case 18:
        return VAR6->VAR26;
    default:
        FUN4(VAR27, "", (int)VAR3);
        return 0;
    }
}