static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR4->VAR9 = VAR5;
    VAR4->VAR10 = VAR11;
    VAR8 = 0;
    switch (VAR2->VAR12)
    {
    case VAR13:
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
        VAR4->VAR10 |= VAR20;
        break;
    case VAR21:
    case VAR22:
        VAR4->VAR9 &= 0x0FFFFFFFFFFFFFFFULL;
        VAR4->VAR10 |= VAR20;
        break;
    case VAR23:
        if (FUN2(VAR24 != 0))
        {
            VAR7 = (VAR2->VAR25[0] < VAR2->VAR25[1] && VAR5 >= VAR2->VAR25[0] && VAR5 < VAR2->VAR25[1]) || (VAR2->VAR25[2] < VAR2->VAR25[3] && VAR5 >= VAR2->VAR25[2] && VAR5 < VAR2->VAR25[3]) ? 1 : 0;
            if (VAR7 ^ VAR26)
            {
                if (VAR6 == 1)
                {
                    VAR8 = -2;
                }
            }
            else
            {
                VAR4->VAR10 |= VAR20;
            }
        }
        break;
    case VAR27:
        FUN3(VAR2, "");
        break;
    default:
        FUN3(VAR2, "");
        return -1;
    }
    return VAR8;
}