static int FUN1(int VAR1)
{
    int VAR2;
    const VAR3 *VAR4;
    VAR4 = &VAR5[VAR1];
    switch (VAR4->VAR6)
    {
    case VAR7:
        switch (VAR1)
        {
        case VAR8:
        case VAR9:
        case VAR10:
            VAR2 = 16;
            break;
        default:
            VAR2 = VAR4->VAR11 * VAR4->VAR12;
            break;
        }
        break;
    case VAR13:
        if (VAR4->VAR14 == 0 && VAR4->VAR15 == 0)
        {
            VAR2 = VAR4->VAR11 * VAR4->VAR12;
        }
        else
        {
            VAR2 = VAR4->VAR11 + ((2 * VAR4->VAR11) >> (VAR4->VAR14 + VAR4->VAR15));
        }
        break;
    case VAR16:
        VAR2 = 8;
        break;
    default:
        VAR2 = -1;
        break;
    }
    return VAR2;
}