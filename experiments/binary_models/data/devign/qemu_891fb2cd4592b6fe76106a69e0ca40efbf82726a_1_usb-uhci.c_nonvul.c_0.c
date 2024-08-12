static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0x1f;
    FUN2("", VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        if ((VAR3 & VAR6) && !(VAR5->VAR7 & VAR6))
        {
            VAR5->VAR8 = FUN3(VAR9) + (FUN4() / VAR10);
            FUN5(VAR5->VAR11, FUN3(VAR9));
            VAR5->VAR12 &= ~VAR13;
        }
        else if (!(VAR3 & VAR6))
        {
            VAR5->VAR12 |= VAR13;
        }
        if (VAR3 & VAR14)
        {
            VAR15 *VAR16;
            VAR17 *VAR18;
            int VAR19;
            for (VAR19 = 0; VAR19 < VAR20; VAR19++)
            {
                VAR16 = &VAR5->VAR21[VAR19];
                VAR18 = VAR16->VAR16.VAR18;
                if (VAR18 && VAR18->VAR22)
                {
                    FUN6(VAR18, VAR23);
                }
            }
            FUN7(VAR5);
            return;
        }
        if (VAR3 & VAR24)
        {
            FUN7(VAR5);
            return;
        }
        VAR5->VAR7 = VAR3;
        break;
    case 0x02:
        VAR5->VAR12 &= ~VAR3;
        if (VAR3 & VAR25)
            VAR5->VAR26 = 0;
        FUN8(VAR5);
        break;
    case 0x04:
        VAR5->VAR27 = VAR3;
        FUN8(VAR5);
        break;
    case 0x06:
        if (VAR5->VAR12 & VAR13)
            VAR5->VAR28 = VAR3 & 0x7ff;
        break;
    case 0x10 ... 0x1f:
    {
        VAR15 *VAR16;
        VAR17 *VAR18;
        int VAR29;
        VAR29 = (VAR2 >> 1) & 7;
        if (VAR29 >= VAR20)
            return;
        VAR16 = &VAR5->VAR21[VAR29];
        VAR18 = VAR16->VAR16.VAR18;
        if (VAR18 && VAR18->VAR22)
        {
            if ((VAR3 & VAR30) && !(VAR16->VAR31 & VAR30))
            {
                FUN6(VAR18, VAR23);
            }
        }
        VAR16->VAR31 &= VAR32;
        VAR16->VAR31 |= (VAR3 & ~VAR32);
        VAR16->VAR31 &= ~(VAR3 & VAR33);
    }
    break;
    }
}