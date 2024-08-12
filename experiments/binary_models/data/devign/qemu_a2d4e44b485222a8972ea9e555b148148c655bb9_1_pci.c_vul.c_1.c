void FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, int VAR5)
{
    int VAR6, VAR7;
    uint32_t VAR8, VAR9;
    if (VAR5 == 4 && ((VAR3 >= 0x10 && VAR3 < 0x10 + 4 * 6) || (VAR3 >= 0x30 && VAR3 < 0x34)))
    {
        VAR10 *VAR11;
        int VAR12;
        if (VAR3 >= 0x30)
        {
            VAR12 = VAR13;
        }
        else
        {
            VAR12 = (VAR3 - 0x10) >> 2;
        }
        VAR11 = &VAR2->VAR14[VAR12];
        if (VAR11->VAR15 == 0)
            goto VAR16;
        if (VAR12 == VAR13)
        {
            VAR4 &= (~(VAR11->VAR15 - 1)) | 1;
        }
        else
        {
            VAR4 &= ~(VAR11->VAR15 - 1);
            VAR4 |= VAR11->VAR17;
        }
        *(VAR18 *)(VAR2->VAR19 + VAR3) = FUN2(VAR4);
        FUN3(VAR2);
        return;
    }
VAR16:
    VAR9 = VAR3;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
    {
        switch (VAR2->VAR19[0x0e])
        {
        case 0x00:
        case 0x80:
            switch (VAR9)
            {
            case 0x00:
            case 0x01:
            case 0x02:
            case 0x03:
            case 0x08:
            case 0x09:
            case 0x0a:
            case 0x0b:
            case 0x0e:
            case 0x10 ... 0x27:
            case 0x30 ... 0x33:
            case 0x3d:
                VAR6 = 0;
                break;
            default:
                VAR6 = 1;
                break;
            }
            break;
        default:
        case 0x01:
            switch (VAR9)
            {
            case 0x00:
            case 0x01:
            case 0x02:
            case 0x03:
            case 0x08:
            case 0x09:
            case 0x0a:
            case 0x0b:
            case 0x0e:
            case 0x38 ... 0x3b:
            case 0x3d:
                VAR6 = 0;
                break;
            default:
                VAR6 = 1;
                break;
            }
            break;
        }
        if (VAR6)
        {
            VAR2->VAR19[VAR9] = VAR4;
        }
        VAR9++;
        VAR4 >>= 8;
    }
    VAR8 = VAR3 + VAR5;
    if (VAR8 > VAR20 && VAR3 < (VAR20 + 2))
    {
        FUN3(VAR2);
    }
}