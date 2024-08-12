static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    uint64_t VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    VAR3 *VAR14;
    uint8_t VAR15;
    VAR11 = VAR2->VAR16.VAR17[1] & 0x8;
    VAR10 = VAR2->VAR16.VAR17[2] & 0x3f;
    VAR13 = (VAR2->VAR16.VAR17[2] & 0xc0) >> 6;
    FUN3("", (VAR2->VAR16.VAR17[0] == VAR18) ? 6 : 10, VAR10, VAR19, VAR13);
    memset(VAR4, 0, VAR2->VAR16.VAR20);
    VAR14 = VAR4;
    if (FUN4(VAR6->VAR21))
    {
        VAR15 = 0x80;
    }
    else
    {
        VAR15 = 0x00;
    }
    if (VAR2->VAR16.VAR17[0] == VAR18)
    {
        VAR14[1] = 0;
        VAR14[2] = VAR15;
        VAR14[3] = 0;
        VAR14 += 4;
    }
    else
    {
        VAR14[2] = 0;
        VAR14[3] = VAR15;
        VAR14[6] = VAR14[7] = 0;
        VAR14 += 8;
    }
    FUN5(VAR6->VAR21, &VAR9);
    if (!VAR11 && VAR9)
    {
        if (VAR2->VAR16.VAR17[0] == VAR18)
        {
            VAR4[3] = 8;
        }
        else
        {
            VAR4[7] = 8;
        }
        VAR9 /= VAR6->VAR22;
        if (VAR9 > 0xffffff)
            VAR9 = 0;
        VAR14[0] = 0;
        VAR14[1] = (VAR9 >> 16) & 0xff;
        VAR14[2] = (VAR9 >> 8) & 0xff;
        VAR14[3] = VAR9 & 0xff;
        VAR14[4] = 0;
        VAR14[5] = 0;
        VAR14[6] = VAR6->VAR22 * 2;
        VAR14[7] = 0;
        VAR14 += 8;
    }
    if (VAR13 == 3)
    {
        return -1;
    }
    switch (VAR10)
    {
    case 0x04:
    case 0x05:
    case 0x08:
    case 0x2a:
        VAR14 += FUN6(VAR2, VAR10, VAR14, VAR13);
        break;
    case 0x3f:
        VAR14 += FUN6(VAR2, 0x08, VAR14, VAR13);
        VAR14 += FUN6(VAR2, 0x2a, VAR14, VAR13);
        break;
    default:
        return -1;
    }
    VAR12 = VAR14 - VAR4;
    if (VAR2->VAR16.VAR17[0] == VAR18)
    {
        VAR4[0] = VAR12 - 1;
    }
    else
    {
        VAR4[0] = ((VAR12 - 2) >> 8) & 0xff;
        VAR4[1] = (VAR12 - 2) & 0xff;
    }
    if (VAR12 > VAR2->VAR16.VAR20)
        VAR12 = VAR2->VAR16.VAR20;
    return VAR12;
}