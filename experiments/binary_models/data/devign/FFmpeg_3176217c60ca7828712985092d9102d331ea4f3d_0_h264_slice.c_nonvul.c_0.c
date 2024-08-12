static enum VAR1 FUN1(VAR2 *VAR3)
{ VAR4 + VAR5 + \
( VAR6 * 2 ) + VAR7 ) enum AVPixelFormat VAR8 [ VAR9 + 2 ] , * VAR10 = VAR8 ;
    const enum VAR1 *VAR11 = VAR8;
    switch (VAR3->VAR12.VAR13->VAR14)
    {
    case 9:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR15->VAR16 == VAR17)
            {
                *VAR10++ = VAR18;
            }
            else
                *VAR10++ = VAR19;
        }
        else if (FUN3(VAR3))
            *VAR10++ = VAR20;
        else
            *VAR10++ = VAR21;
        break;
    case 10:
        if (FUN2(VAR3))
        {
            if (VAR3->VAR15->VAR16 == VAR17)
            {
                *VAR10++ = VAR22;
            }
            else
                *VAR10++ = VAR23;
        }
        else if (FUN3(VAR3))
            *VAR10++ = VAR24;
        else
            *VAR10++ = VAR25;
        break;
    case 8:
        *VAR10++ = VAR26;
        if (FUN2(VAR3))
        {
            if (VAR3->VAR15->VAR16 == VAR17)
                *VAR10++ = VAR27;
            else if (VAR3->VAR15->VAR28 == VAR29)
                *VAR10++ = VAR30;
            else
                *VAR10++ = VAR31;
        }
        else if (FUN3(VAR3))
        {
            if (VAR3->VAR15->VAR28 == VAR29)
                *VAR10++ = VAR32;
            else
                *VAR10++ = VAR33;
        }
        else
        {
            *VAR10++ = VAR34;
            *VAR10++ = VAR35;
            *VAR10++ = VAR36;
            *VAR10++ = VAR37;
            *VAR10++ = VAR38;
            if (VAR3->VAR15->VAR39->VAR8)
                VAR11 = VAR3->VAR15->VAR39->VAR8;
            else if (VAR3->VAR15->VAR28 == VAR29)
                *VAR10++ = VAR40;
            else
                *VAR10++ = VAR41;
        }
        break;
    default:
        FUN4(VAR3->VAR15, VAR42, "", VAR3->VAR12.VAR13->VAR14);
        return VAR43;
    }
    *VAR10 = VAR44;
    return FUN5(VAR3->VAR15, VAR11);
}