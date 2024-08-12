static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = FUN2(VAR1);
    uint32_t VAR7;
    uint32_t VAR8 = VAR2 >> 2;
    FUN3("", FUN4(VAR8), (VAR9)VAR3);
    switch (VAR8)
    {
    case 0:
        VAR7 = VAR6->VAR10;
        VAR6->VAR10 = VAR3 & ~0x7c14;
        if (VAR6->VAR10 & VAR11)
        {
            FUN5(FUN6(VAR6));
        }
        else
        {
            FUN7(VAR6);
            if ((VAR7 ^ VAR6->VAR10) & VAR12)
            {
                if (VAR6->VAR10 & VAR12)
                {
                    if (VAR6->VAR10 & VAR13)
                    {
                        VAR6->VAR14 = VAR15;
                        FUN8(VAR6->VAR16, VAR15);
                        FUN9(VAR6, false);
                    }
                    FUN10(VAR6->VAR16, 1);
                }
                else
                {
                    FUN11(VAR6->VAR16);
                }
            }
        }
        break;
    case 1:
        VAR6->VAR17 = VAR3 & 0xfff;
        FUN7(VAR6);
        break;
    case 2:
        VAR6->VAR18 &= ~(VAR3 & 0x3f);
        FUN12(VAR6);
        break;
    case 3:
        VAR6->VAR19 = VAR3 & 0x3f;
        FUN12(VAR6);
        FUN9(VAR6, false);
        break;
    case 4:
        VAR6->VAR20 = VAR3;
        if (!(VAR6->VAR10 & VAR21))
        {
            VAR6->VAR14 = VAR15;
            FUN13(VAR6->VAR16, VAR15, 1);
        }
        FUN9(VAR6, false);
        break;
    case 5:
        VAR6->VAR22 = VAR3;
        FUN9(VAR6, false);
        break;
    case 6:
        VAR6->VAR23 = VAR3;
        FUN9(VAR6, false);
        break;
    default:
        FUN14("", VAR8);
        break;
    }
}