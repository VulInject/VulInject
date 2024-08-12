static int FUN1(VAR1 *VAR2, hwaddr VAR3, bool VAR4)
{
    int VAR5;
    bool VAR6;
    int VAR7;
    CCW1 VAR8;
    if (!VAR3)
    {
        return -VAR9;
    }
    if (VAR3 & (VAR2->VAR10 ? 0x80000007 : 0xff000007))
    {
        return -VAR11;
    }
    VAR8 = FUN2(VAR3, VAR2->VAR10);
    if ((VAR8.VAR12 & 0x0f) == 0)
    {
        return -VAR11;
    }
    if (((VAR8.VAR12 & 0x0f) == VAR13) && ((VAR8.VAR12 & 0xf0) != 0))
    {
        return -VAR11;
    }
    if (!VAR2->VAR10 && (VAR8.VAR14 == 0) && (VAR8.VAR12 != VAR13))
    {
        return -VAR11;
    }
    if (VAR8.VAR15 & VAR16)
    {
        return -VAR11;
    }
    if (VAR8.VAR15 & VAR17)
    {
        return VAR4 ? -VAR18 : -VAR11;
    }
    VAR6 = !((VAR8.VAR15 & VAR19) && !(VAR8.VAR15 & VAR20));
    if (!VAR8.VAR21)
    {
        if (VAR2->VAR22 == 255)
        {
            return -VAR11;
        }
        VAR2->VAR22++;
    }
    switch (VAR8.VAR12)
    {
    case VAR23:
        VAR5 = 0;
        break;
    case VAR24:
        if (VAR6)
        {
            if (VAR8.VAR14 != sizeof(VAR2->VAR25))
            {
                VAR5 = -VAR11;
                break;
            }
        }
        VAR7 = FUN3(VAR8.VAR14, sizeof(VAR2->VAR25));
        FUN4(VAR8.VAR21, VAR2->VAR25, VAR7);
        VAR2->VAR26.VAR27.VAR14 = VAR8.VAR14 - VAR7;
        memset(VAR2->VAR25, 0, sizeof(VAR2->VAR25));
        VAR5 = 0;
        break;
    case VAR28:
    {
        SenseId VAR29;
        FUN5(&VAR29, &VAR2->VAR30);
        if (VAR6)
        {
            if (VAR8.VAR14 != sizeof(VAR29))
            {
                VAR5 = -VAR11;
                break;
            }
        }
        VAR7 = FUN3(VAR8.VAR14, sizeof(VAR29));
        if (VAR7 >= 4)
        {
            VAR29.VAR31 = 0xff;
        }
        else
        {
            VAR29.VAR31 = 0;
        }
        FUN4(VAR8.VAR21, &VAR29, VAR7);
        VAR2->VAR26.VAR27.VAR14 = VAR8.VAR14 - VAR7;
        VAR5 = 0;
        break;
    }
    case VAR13:
        if (VAR2->VAR32 && (VAR2->VAR33.VAR12 == VAR13))
        {
            VAR5 = -VAR11;
            break;
        }
        if (VAR8.VAR15 || VAR8.VAR14)
        {
            VAR5 = -VAR11;
            break;
        }
        VAR2->VAR34 = VAR8.VAR21;
        VAR5 = -VAR35;
        break;
    default:
        if (VAR2->VAR36)
        {
            VAR5 = VAR2->FUN6(VAR2, VAR8);
        }
        else
        {
            VAR5 = -VAR37;
        }
        break;
    }
    VAR2->VAR33 = VAR8;
    VAR2->VAR32 = true;
    if (VAR5 == 0)
    {
        if (VAR8.VAR15 & VAR38)
        {
            VAR2->VAR34 += 8;
            VAR5 = -VAR35;
        }
    }
    return VAR5;
}