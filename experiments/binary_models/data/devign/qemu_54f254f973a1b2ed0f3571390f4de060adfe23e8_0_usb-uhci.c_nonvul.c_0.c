static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    VAR3 &= 0x1f;
    switch (VAR3)
    {
    case 0x00:
        VAR6 = VAR5->VAR7;
        break;
    case 0x02:
        VAR6 = VAR5->VAR8;
        break;
    case 0x04:
        VAR6 = VAR5->VAR9;
        break;
    case 0x06:
        VAR6 = VAR5->VAR10;
        break;
    case 0x10 ... 0x1f:
    {
        VAR11 *VAR12;
        int VAR13;
        VAR13 = (VAR3 >> 1) & 7;
        if (VAR13 >= VAR14)
            goto VAR15;
        VAR12 = &VAR5->VAR16[VAR13];
        VAR6 = VAR12->VAR17;
    }
    break;
    default:
    VAR15:
        VAR6 = 0xff7f;
        break;
    }
    FUN2("", VAR3, VAR6);
    return VAR6;
}