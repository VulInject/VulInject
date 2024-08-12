static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6)
{
    int VAR7, VAR8;
    VAR4->VAR9 = VAR5;
    VAR4->VAR10 = VAR11 | VAR12;
    VAR8 = 0;
    switch (VAR2->VAR13)
    {
    case VAR14:
    case VAR15:
    case VAR16:
    case VAR17:
    case VAR18:
    case VAR19:
    case VAR20:
        VAR4->VAR10 |= VAR21;
        break;
    case VAR22:
    case VAR23:
    case VAR24:
        VAR4->VAR9 &= 0x0FFFFFFFFFFFFFFFULL;
        VAR4->VAR10 |= VAR21;
        break;
    case VAR25:
        if (FUN2(VAR26 != 0))
        {
            VAR7 = (VAR2->VAR27[0] < VAR2->VAR27[1] && VAR5 >= VAR2->VAR27[0] && VAR5 < VAR2->VAR27[1]) || (VAR2->VAR27[2] < VAR2->VAR27[3] && VAR5 >= VAR2->VAR27[2] && VAR5 < VAR2->VAR27[3]) ? 1 : 0;
            if (VAR7 ^ VAR28)
            {
                if (VAR6 == 1)
                {
                    VAR8 = -2;
                }
            }
            else
            {
                VAR4->VAR10 |= VAR21;
            }
        }
        break;
    case VAR29:
        FUN3(VAR2, "");
        break;
    case VAR30:
        FUN3(VAR2, "");
        break;
    default:
        FUN3(VAR2, "");
        return -1;
    }
    return VAR8;