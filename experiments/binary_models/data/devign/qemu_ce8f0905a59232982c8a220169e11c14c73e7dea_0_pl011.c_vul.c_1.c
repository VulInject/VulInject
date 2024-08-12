static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    unsigned char VAR7;
    switch (VAR2 >> 2)
    {
    case 0:
        VAR7 = VAR3;
        if (VAR6->VAR8)
            FUN2(VAR6->VAR8, &VAR7, 1);
        VAR6->VAR9 |= VAR10;
        FUN3(VAR6);
        break;
    case 1:
        VAR6->VAR11 = VAR3;
        break;
    case 6:
        break;
    case 8:
        VAR6->VAR12 = VAR3;
        break;
    case 9:
        VAR6->VAR13 = VAR3;
        break;
    case 10:
        VAR6->VAR14 = VAR3;
        break;
    case 11:
        if ((VAR6->VAR15 ^ VAR3) & 0x10)
        {
            VAR6->VAR16 = 0;
            VAR6->VAR17 = 0;
        }
        VAR6->VAR15 = VAR3;
        FUN4(VAR6);
        break;
    case 12:
        VAR6->VAR11 = VAR3;
        break;
    case 13:
        VAR6->VAR18 = VAR3;
        FUN4(VAR6);
        break;
    case 14:
        VAR6->VAR19 = VAR3;
        FUN3(VAR6);
        break;
    case 17:
        VAR6->VAR9 &= ~VAR3;
        FUN3(VAR6);
        break;
    case 18:
        VAR6->VAR20 = VAR3;
        if (VAR3 & 3)
        {
            FUN5(VAR21, "");
        }
        break;
    default:
        FUN5(VAR22, "", (int)VAR2);
    }
}