static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    int VAR7, VAR8;
    VAR9 *VAR10;
    VAR3 &= 3;
    VAR10 = &VAR6->VAR11[VAR3];
    if (VAR10->VAR12)
    {
        VAR10->VAR12 = 0;
        VAR7 = VAR10->VAR13;
    }
    else if (VAR10->VAR14)
    {
        switch (VAR10->VAR14)
        {
        default:
        case VAR15:
            VAR7 = VAR10->VAR16 & 0xff;
            VAR10->VAR14 = 0;
            break;
        case VAR17:
            VAR7 = VAR10->VAR16 >> 8;
            VAR10->VAR14 = 0;
            break;
        case VAR18:
            VAR7 = VAR10->VAR16 & 0xff;
            VAR10->VAR14 = VAR17;
            break;
        }
        else
        {
            switch (VAR10->VAR19)
            {
            default:
            case VAR15:
                VAR8 = FUN2(VAR10);
                VAR7 = VAR8 & 0xff;
                break;
            case VAR17:
                VAR8 = FUN2(VAR10);
                VAR7 = (VAR8 >> 8) & 0xff;
                break;
            case VAR18:
                VAR8 = FUN2(VAR10);
                VAR7 = VAR8 & 0xff;
                VAR10->VAR19 = VAR20;
                break;
            case VAR20:
                VAR8 = FUN2(VAR10);
                VAR7 = (VAR8 >> 8) & 0xff;
                VAR10->VAR19 = VAR18;
                break;
                return VAR7