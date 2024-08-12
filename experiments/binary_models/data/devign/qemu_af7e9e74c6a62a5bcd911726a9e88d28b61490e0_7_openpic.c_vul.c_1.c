static VAR1 FUN1(void *VAR2, hwaddr VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2;
    VAR7 *VAR8;
    VAR9 *VAR10;
    uint32_t VAR11;
    int VAR12;
    FUN2("" VAR13 "", VAR14, VAR4, VAR3);
    VAR11 = 0xFFFFFFFF;
    if (VAR4 < 0)
    {
        return VAR11;
    }
    if (VAR3 & 0xF)
        return VAR11;
    VAR10 = &VAR6->VAR10[VAR4];
    VAR3 &= 0xFF0;
    switch (VAR3)
    {
    case 0x80:
        VAR11 = VAR10->VAR15;
        break;
    case 0x90:
        VAR11 = VAR4;
        break;
    case 0xA0:
        FUN2("");
        FUN3(VAR10->VAR16[VAR17]);
        VAR12 = FUN4(VAR6, &VAR10->VAR18);
        FUN2("", VAR12);
        if (VAR12 == -1)
        {
            VAR11 = VAR6->VAR19;
        }
        else
        {
            VAR8 = &VAR6->VAR8[VAR12];
            if (!(VAR8->VAR20 & VAR21) || !(FUN5(VAR8->VAR20) > VAR10->VAR15))
            {
                VAR8->VAR20 &= ~VAR21;
                VAR11 = VAR6->VAR19;
            }
            else
            {
                FUN6(&VAR10->VAR22, VAR12);
                VAR11 = FUN7(VAR6, VAR8->VAR20);
            }
            FUN8(&VAR10->VAR18, VAR12);
            VAR10->VAR18.VAR23 = -1;
            if (!(VAR8->VAR20 & VAR24))
            {
                VAR8->VAR20 &= ~VAR21;
                VAR8->VAR25 = 0;
            }
            if ((VAR12 >= VAR6->VAR26) && (VAR12 < (VAR6->VAR26 + VAR27)))
            {
                VAR8->VAR28 &= ~(1 << VAR4);
                if (VAR8->VAR28 && !(VAR8->VAR20 & VAR24))
                {
                    FUN9(VAR6, VAR12, 1);
                    FUN9(VAR6, VAR12, 0);
                    VAR8->VAR20 |= VAR21;
                }
            }
        }
        break;
    case 0xB0:
        VAR11 = 0;
        break;
    default:
        break;
    }
    FUN2("", VAR14, VAR11);
    return VAR11;
}