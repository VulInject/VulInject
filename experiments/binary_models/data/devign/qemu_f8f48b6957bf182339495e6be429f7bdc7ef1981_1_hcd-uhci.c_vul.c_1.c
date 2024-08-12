static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR2 &= 0x1f;
    FUN2(VAR2, VAR3);
    switch (VAR2)
    {
    case 0x00:
        if ((VAR3 & VAR6) && !(VAR5->VAR7 & VAR6))
        {
            FUN3();
            VAR5->VAR8 = FUN4(VAR9) + (FUN5() / VAR10);
            FUN6(VAR5->VAR11, FUN4(VAR9));
            VAR5->VAR12 &= ~VAR13;
        }
        else if (!(VAR3 & VAR6))
        {
            VAR5->VAR12 |= VAR13;
        }
        if (VAR3 & VAR14)
        {
            VAR15 *VAR16;
            int VAR17;
            for (VAR17 = 0; VAR17 < VAR18; VAR17++)
            {
                VAR16 = &VAR5->VAR19[VAR17];
                FUN7(VAR16->VAR16.VAR20);
            }
            FUN8(VAR5);
            return;
        }
        if (VAR3 & VAR21)
        {
            FUN8(VAR5);
            return;
        }
        VAR5->VAR7 = VAR3;
        break;
    case 0x02:
        VAR5->VAR12 &= ~VAR3;
        if (VAR3 & VAR22)
            VAR5->VAR23 = 0;
        FUN9(VAR5);
        break;
    case 0x04:
        VAR5->VAR24 = VAR3;
        FUN9(VAR5);
        break;
    case 0x06:
        if (VAR5->VAR12 & VAR13)
            VAR5->VAR25 = VAR3 & 0x7ff;
        break;
    case 0x10 ... 0x1f:
    {
        VAR15 *VAR16;
        VAR26 *VAR20;
        int VAR27;
        VAR27 = (VAR2 >> 1) & 7;
        if (VAR27 >= VAR18)
            return;
        VAR16 = &VAR5->VAR19[VAR27];
        VAR20 = VAR16->VAR16.VAR20;
        if (VAR20 && VAR20->VAR28)
        {
            if ((VAR3 & VAR29) && !(VAR16->VAR30 & VAR29))
            {
                FUN7(VAR20);
            }
        }
        VAR16->VAR30 &= VAR31;
        if (!(VAR16->VAR30 & VAR32))
        {
            VAR3 &= ~VAR33;
        }
        VAR16->VAR30 |= (VAR3 & ~VAR31);
        VAR16->VAR30 &= ~(VAR3 & VAR34);
    }
    break;
    }
}