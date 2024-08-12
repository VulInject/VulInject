static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    VAR3 &= 7;
    switch (VAR3)
    {
    default:
    case 0:
        if (VAR5->VAR7 & VAR8)
        {
            VAR6 = VAR5->VAR9 & 0xff;
        }
        else
        {
            VAR6 = VAR5->VAR10;
            VAR5->VAR11 &= ~(VAR12 | VAR13);
            FUN2(VAR5);
            if (!(VAR5->VAR14 & VAR15))
            {
                FUN3(VAR5->VAR16);
            }
        }
        break;
    case 1:
        if (VAR5->VAR7 & VAR8)
        {
            VAR6 = (VAR5->VAR9 >> 8) & 0xff;
        }
        else
        {
            VAR6 = VAR5->VAR17;
        }
        break;
    case 2:
        VAR6 = VAR5->VAR18;
        if ((VAR6 & 0x7) == VAR19)
            VAR5->VAR20 = 0;
        FUN2(VAR5);
        break;
    case 3:
        VAR6 = VAR5->VAR7;
        break;
    case 4:
        VAR6 = VAR5->VAR14;
        break;
    case 5:
        VAR6 = VAR5->VAR11;
        break;
    case 6:
        if (VAR5->VAR14 & VAR15)
        {
            VAR6 = (VAR5->VAR14 & 0x0c) << 4;
            VAR6 |= (VAR5->VAR14 & 0x02) << 3;
            VAR6 |= (VAR5->VAR14 & 0x01) << 5;
        }
        else
        {
            VAR6 = VAR5->VAR21;
        }
        break;
    case 7:
        VAR6 = VAR5->VAR22;
        break;
    }
    FUN4("", VAR3, VAR6);
    return VAR6;
}