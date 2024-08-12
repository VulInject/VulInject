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
        VAR4->VAR10 |= VAR19;
        break;
    case VAR20:
        if (FUN2(VAR21 != 0))
        {
            VAR7 = (VAR2->VAR22[0] < VAR2->VAR22[1] && VAR5 >= VAR2->VAR22[0] && VAR5 < VAR2->VAR22[1]) || (VAR2->VAR22[2] < VAR2->VAR22[3] && VAR5 >= VAR2->VAR22[2] && VAR5 < VAR2->VAR22[3]) ? 1 : 0;
            if (VAR7 ^ VAR23)
            {
                if (VAR6 == 1)
                {
                    VAR8 = -2;
                }
            }
            else
            {
                VAR4->VAR10 |= VAR19;
            }
        }
        break;
    default:
        FUN3();
        return -1;
    }
    return VAR8;
}