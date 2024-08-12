static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint8_t VAR7[VAR4->VAR8.VAR9];
    int VAR10 = 0;
    switch (VAR4->VAR11)
    {
    case VAR12:
        if (VAR4->VAR13->VAR14 == 1)
        {
            if (!(VAR6->VAR15 || VAR6->VAR16))
                return VAR17;
            VAR6->VAR15 = 0;
            if (VAR6->VAR18 == VAR19)
                VAR10 = FUN2(VAR6, VAR7, VAR4->VAR8.VAR9);
            else if (VAR6->VAR18 == VAR20)
                VAR10 = FUN3(VAR6, VAR7, VAR4->VAR8.VAR9);
            FUN4(VAR4, VAR7, VAR10);
            break;
        }
    case VAR21:
    default:
        VAR10 = VAR22;
        break;
    }
    return VAR10;
}