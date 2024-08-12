static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    int VAR7;
    VAR6->VAR8 = 1;
    if (VAR2 >= 0x200 && VAR2 < 0x400)
    {
        VAR7 = (VAR2 - 0x200) >> 2;
        VAR6->VAR9[(VAR2 - 0x200) >> 2] = VAR3;
        FUN2(VAR6, VAR7);
        return;
    }
    switch (VAR2 >> 2)
    {
    case 0:
        VAR6->VAR10[0] = VAR3;
        VAR7 = ((VAR3 & 0xfc) + 4) * 4;
        FUN3(VAR6, VAR7, VAR6->VAR11);
        break;
    case 1:
        VAR6->VAR10[1] = VAR3;
        VAR7 = (VAR3 & 0x3ff) + 1;
        FUN3(VAR6, VAR6->VAR12, VAR7);
        break;
    case 2:
        VAR6->VAR10[2] = VAR3;
        break;
    case 3:
        VAR6->VAR10[3] = VAR3;
        break;
    case 4:
        VAR6->VAR13 = VAR3;
        break;
    case 5:
        VAR6->VAR14 = VAR3;
        break;
    case 6:
        if (VAR6->VAR15 != VAR16)
        {
            goto VAR17;
        }
    VAR18:
        VAR6->VAR19 = VAR3;
        FUN4(VAR6);
        break;
    case 7:
        if (VAR6->VAR15 != VAR16)
        {
            goto VAR18;
        }
    VAR17:
        VAR6->VAR20 = VAR3;
        VAR6->VAR21 = (VAR3 >> 1) & 7;
        if (FUN5(VAR6))
        {
            FUN6(VAR6->VAR22, VAR6->VAR12, VAR6->VAR11);
        }
        break;
    case 10:
        VAR6->VAR23 &= ~VAR3;
        FUN4(VAR6);
        break;
    default:
        FUN7(VAR24, "", (int)VAR2);
    }
}