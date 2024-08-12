enum VAR1 FUN1(int VAR2, int VAR3, int VAR4, int VAR5)
{
    if (VAR2 <= 0 || VAR2 > 64)
        return VAR6;
    if (VAR3)
    {
        switch (VAR2)
        {
        case 32:
            return VAR4 ? VAR7 : VAR8;
        case 64:
            return VAR4 ? VAR9 : VAR10;
        default:
            return VAR6;
        }
    }
    else
    {
        VAR2 += 7;
        VAR2 >>= 3;
        if (VAR5 & (1 << (VAR2 - 1)))
        {
            switch (VAR2)
            {
            case 1:
                return VAR11;
            case 2:
                return VAR4 ? VAR12 : VAR13;
            case 3:
                return VAR4 ? VAR14 : VAR15;
            case 4:
                return VAR4 ? VAR16 : VAR17;
            default:
                return VAR6;
            }
        }
        else
        {
            switch (VAR2)
            {
            case 1:
                return VAR18;
            case 2:
                return VAR4 ? VAR19 : VAR20;
            case 3:
                return VAR4 ? VAR21 : VAR22;
            case 4:
                return VAR4 ? VAR23 : VAR24;
            default:
                return VAR6;
            }
        }
    }
}