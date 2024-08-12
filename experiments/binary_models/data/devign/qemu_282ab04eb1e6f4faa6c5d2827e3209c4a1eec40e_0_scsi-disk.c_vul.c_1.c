static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2->VAR8);
    uint64_t VAR9;
    int VAR10, VAR11, VAR12;
    VAR3 *VAR13;
    uint8_t VAR14;
    VAR11 = VAR2->VAR15.VAR16[1] & 0x8;
    VAR10 = VAR2->VAR15.VAR16[2] & 0x3f;
    FUN3("", VAR10, VAR2->VAR15.VAR17);
    memset(VAR4, 0, VAR2->VAR15.VAR17);
    VAR13 = VAR4;
    if (FUN4(VAR6->VAR18))
    {
        VAR14 = 0x80;
    }
    else
    {
        VAR14 = 0x00;
    }
    if (VAR2->VAR15.VAR16[0] == VAR19)
    {
        VAR13[1] = 0;
        VAR13[2] = VAR14;
        VAR13[3] = 0;
        VAR13 += 4;
    }
    else
    {
        VAR13[2] = 0;
        VAR13[3] = VAR14;
        VAR13[6] = VAR13[7] = 0;
        VAR13 += 8;
    }
    FUN5(VAR6->VAR18, &VAR9);
    if ((~VAR11) & VAR9)
    {
        if (VAR2->VAR15.VAR16[0] == VAR19)
        {
            VAR4[3] = 8;
        }
        else
        {
            VAR4[7] = 8;
        }
        VAR9 /= VAR6->VAR20;
        VAR9--;
        if (VAR9 > 0xffffff)
            VAR9 = 0xffffff;
        VAR13[0] = 0;
        VAR13[1] = (VAR9 >> 16) & 0xff;
        VAR13[2] = (VAR9 >> 8) & 0xff;
        VAR13[3] = VAR9 & 0xff;
        VAR13[4] = 0;
        VAR13[5] = 0;
        VAR13[6] = VAR6->VAR20 * 2;
        VAR13[7] = 0;
        VAR13 += 8;
    }
    switch (VAR10)
    {
    case 0x04:
    case 0x05:
    case 0x08:
    case 0x2a:
        VAR13 += FUN6(VAR2, VAR10, VAR13);
        break;
    case 0x3f:
        VAR13 += FUN6(VAR2, 0x08, VAR13);
        VAR13 += FUN6(VAR2, 0x2a, VAR13);
        break;
    }
    VAR12 = VAR13 - VAR4;
    if (VAR2->VAR15.VAR16[0] == VAR19)
    {
        VAR4[0] = VAR12 - 1;
    }
    else
    {
        VAR4[0] = ((VAR12 - 2) >> 8) & 0xff;
        VAR4[1] = (VAR12 - 2) & 0xff;
    }
    if (VAR12 > VAR2->VAR15.VAR17)
        VAR12 = VAR2->VAR15.VAR17;
    return VAR12;
}