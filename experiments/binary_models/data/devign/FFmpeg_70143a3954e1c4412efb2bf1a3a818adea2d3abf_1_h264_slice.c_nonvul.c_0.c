static enum VAR1 FUN1(VAR2 *VAR3, int VAR4)
{ ( VAR5 * 2 ) + VAR6 + \
( VAR7 * 2 ) + VAR8 + VAR9 ) enum AVPixelFormat VAR10 [ VAR11 + 2 ] , * VAR12 = VAR10 ;
    const enum VAR1 *VAR13 = VAR10;
    int VAR14;
    switch (VAR3->VAR15.VAR16->VAR17)
    {
    case 9:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR18->VAR19 == VAR20)
            {
                *VAR12++ = VAR21;
            }
            else
                *VAR12++ = VAR22;
        }
        else if (FUN3(VAR3))
            *VAR12++ = VAR23;
        else
            *VAR12++ = VAR24;
        break;
    case 10:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR18->VAR19 == VAR20)
            {
                *VAR12++ = VAR25;
            }
            else
                *VAR12++ = VAR26;
        }
        else if (FUN3(VAR3))
            *VAR12++ = VAR27;
        else
            *VAR12++ = VAR28;
        break;
    case 12:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR18->VAR19 == VAR20)
            {
                *VAR12++ = VAR29;
            }
            else
                *VAR12++ = VAR30;
        }
        else if (FUN3(VAR3))
            *VAR12++ = VAR31;
        else
            *VAR12++ = VAR32;
        break;
    case 14:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR18->VAR19 == VAR20)
            {
                *VAR12++ = VAR33;
            }
            else
                *VAR12++ = VAR34;
        }
        else if (FUN3(VAR3))
            *VAR12++ = VAR35;
        else
            *VAR12++ = VAR36;
        break;
    case 8:
        *VAR12++ = VAR37;
        if (FUN2(VAR3))
        {
            if (VAR3->VAR18->VAR19 == VAR20)
                *VAR12++ = VAR38;
            else if (VAR3->VAR18->VAR39 == VAR40)
                *VAR12++ = VAR41;
            else
                *VAR12++ = VAR42;
        }
        else if (FUN3(VAR3))
        {
            if (VAR3->VAR18->VAR39 == VAR40)
                *VAR12++ = VAR43;
            else
                *VAR12++ = VAR44;
        }
        else
        {
            *VAR12++ = VAR45;
            *VAR12++ = VAR46;
            *VAR12++ = VAR47;
            *VAR12++ = VAR48;
            *VAR12++ = VAR49;
            *VAR12++ = VAR50;
            *VAR12++ = VAR51;
            if (VAR3->VAR18->VAR52->VAR10)
                VAR13 = VAR3->VAR18->VAR52->VAR10;
            else if (VAR3->VAR18->VAR39 == VAR40)
                *VAR12++ = VAR53;
            else
                *VAR12++ = VAR54;
        }
        break;
    default:
        FUN4(VAR3->VAR18, VAR55, "", VAR3->VAR15.VAR16->VAR17);
        return VAR56;
    }
    *VAR12 = VAR57;
    for (VAR14 = 0; VAR13[VAR14] != VAR57; VAR14++)
        if (VAR13[VAR14] == VAR3->VAR18->VAR58 && !VAR4)
            return VAR13[VAR14];
    return FUN5(VAR3->VAR18, VAR13);
}