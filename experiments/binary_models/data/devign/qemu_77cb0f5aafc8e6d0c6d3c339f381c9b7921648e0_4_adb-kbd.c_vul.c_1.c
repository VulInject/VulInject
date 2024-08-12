static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    int VAR9, VAR10, VAR11;
    if ((VAR5[0] & 0x0f) == VAR12)
    {
        VAR8->VAR13 = VAR8->VAR14 = VAR8->VAR15 = 0;
        return 0;
    }
    VAR9 = VAR5[0] & 0xc;
    VAR10 = VAR5[0] & 0x3;
    VAR11 = 0;
    switch (VAR9)
    {
    case VAR16:
        switch (VAR10)
        {
        case 2:
            break;
        case 3:
            switch (VAR5[2])
            {
            case VAR17:
                break;
            case VAR18:
            case VAR19:
            case VAR20:
                VAR2->VAR21 = VAR5[1] & 0xf;
                break;
            default:
                VAR2->VAR21 = VAR5[1] & 0xf;
                if (VAR5[2] == 1 || VAR5[2] == 2 || VAR5[2] == 3)
                {
                    VAR2->VAR22 = VAR5[2];
                }
                break;
            }
        }
        break;
    case VAR23:
        switch (VAR10)
        {
        case 0:
            VAR11 = FUN3(VAR2, VAR4);
            break;
        case 1:
            break;
        case 2:
            VAR4[0] = 0x00;
            VAR4[1] = 0x07;
            VAR11 = 2;
            break;
        case 3:
            VAR4[0] = VAR2->VAR22;
            VAR4[1] = VAR2->VAR21;
            VAR11 = 2;
            break;
        }
        break;
    }
    return VAR11;
}