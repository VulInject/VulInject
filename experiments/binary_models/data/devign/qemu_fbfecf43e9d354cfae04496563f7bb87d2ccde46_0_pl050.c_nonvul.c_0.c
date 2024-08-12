static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (VAR3 >= 0xfe0 && VAR3 < 0x1000)
        return VAR7[(VAR3 - 0xfe0) >> 2];
    switch (VAR3 >> 2)
    {
    case 0:
        return VAR6->VAR8;
    case 1:
    {
        uint8_t VAR9;
        uint32_t VAR10;
        VAR9 = VAR6->VAR11;
        VAR9 = VAR9 ^ (VAR9 >> 4);
        VAR9 = VAR9 ^ (VAR9 >> 2);
        VAR9 = (VAR9 ^ (VAR9 >> 1)) & 1;
        VAR10 = VAR12;
        if (VAR9)
            VAR10 |= VAR13;
        if (VAR6->VAR14)
            VAR10 |= VAR15;
        return VAR10;
    }
    case 2:
        if (VAR6->VAR14)
            VAR6->VAR11 = FUN2(VAR6->VAR16);
        return VAR6->VAR11;
    case 3:
        return VAR6->VAR17;
    case 4:
        return VAR6->VAR14 | 2;
    default:
        FUN3(VAR18, "", (int)VAR3);
        return 0;
    }
}