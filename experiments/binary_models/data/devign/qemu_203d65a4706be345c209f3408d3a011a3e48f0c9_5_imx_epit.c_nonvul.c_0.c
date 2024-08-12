static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = FUN2(VAR1);
    uint32_t VAR7 = VAR2 >> 2;
    uint64_t VAR8;
    FUN3("", FUN4(VAR7), (VAR9)VAR3);
    switch (VAR7)
    {
    case 0:
        VAR8 = VAR6->VAR10;
        VAR6->VAR10 = VAR3 & 0x03ffffff;
        if (VAR6->VAR10 & VAR11)
        {
            FUN5(FUN6(VAR6));
        }
        else
        {
            FUN7(VAR6);
        }
        if (VAR6->VAR12 && (VAR6->VAR10 & VAR13) && !(VAR8 & VAR13))
        {
            if (VAR6->VAR10 & VAR14)
            {
                if (VAR6->VAR10 & VAR15)
                {
                    FUN8(VAR6->VAR16, VAR6->VAR17, 1);
                    FUN8(VAR6->VAR18, VAR6->VAR17, 1);
                }
                else
                {
                    FUN8(VAR6->VAR16, VAR19, 1);
                    FUN8(VAR6->VAR18, VAR19, 1);
                }
            }
            FUN9(VAR6);
            FUN10(VAR6->VAR16, 0);
            if (VAR6->VAR10 & VAR20)
            {
                FUN10(VAR6->VAR18, 0);
            }
            else
            {
                FUN11(VAR6->VAR18);
            }
        }
        else if (!(VAR6->VAR10 & VAR13))
        {
            FUN11(VAR6->VAR16);
            FUN11(VAR6->VAR18);
        }
        else if (VAR6->VAR10 & VAR20)
        {
            if (!(VAR8 & VAR20))
            {
                FUN9(VAR6);
                FUN10(VAR6->VAR18, 0);
            }
        }
        else
        {
            FUN11(VAR6->VAR18);
        }
        break;
    case 1:
        if (VAR3 & 0x01)
        {
            VAR6->VAR21 = 0;
            FUN12(VAR6);
        }
        break;
    case 2:
        VAR6->VAR17 = VAR3;
        if (VAR6->VAR10 & VAR15)
        {
            FUN8(VAR6->VAR16, VAR6->VAR17, VAR6->VAR10 & VAR22);
            FUN8(VAR6->VAR18, VAR6->VAR17, 0);
        }
        else if (VAR6->VAR10 & VAR22)
        {
            FUN13(VAR6->VAR16, VAR6->VAR17);
        }
        FUN9(VAR6);
        break;
    case 3:
        VAR6->VAR23 = VAR3;
        FUN9(VAR6);
        break;
    default:
        FUN14("", VAR7);
        break;
    }
}