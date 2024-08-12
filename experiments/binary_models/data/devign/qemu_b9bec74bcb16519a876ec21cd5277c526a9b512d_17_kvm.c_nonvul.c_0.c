int FUN1(target_ulong VAR1, target_ulong VAR2, int VAR3)
{
    switch (VAR3)
    {
    case VAR4:
        VAR2 = 1;
        break;
    case VAR5:
    case VAR6:
        switch (VAR2)
        {
        case 1:
            break;
        case 2:
        case 4:
        case 8:
            if (VAR1 & (VAR2 - 1))
            {
                return -VAR7;
            }
            break;
        default:
            return -VAR7;
        }
        break;
    default:
        return -VAR8;
    }
    if (VAR9 == 4)
    {
        return -VAR10;
    }
    if (FUN2(VAR1, VAR2, VAR3) >= 0)
    {
        return -VAR11;
    }
    VAR12[VAR9].VAR1 = VAR1;
    VAR12[VAR9].VAR2 = VAR2;
    VAR12[VAR9].VAR3 = VAR3;
    VAR9++;
    return 0;
}