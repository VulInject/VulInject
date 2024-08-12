static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    int VAR7 = 0;
    uint8_t VAR8[2];
    switch (VAR4->VAR9)
    {
    case VAR10:
        VAR7 = FUN3(VAR6, VAR4);
        break;
    case VAR11:
        switch (VAR4->VAR12->VAR13)
        {
        case VAR14:
            if (!VAR4->VAR15.VAR16)
            {
                VAR7 = VAR17;
            }
            else
            {
                VAR7 = FUN4(VAR6, VAR4);
            }
            break;
        case VAR18:
            if (VAR6->VAR19)
            {
                VAR8[0] = VAR20;
                VAR8[1] = VAR6->VAR21;
                FUN5(VAR4, VAR8, 2);
                VAR7 = 2;
                VAR6->VAR19 = false;
                VAR6->VAR21 &= ~VAR22;
                FUN6(VAR6, VAR23, ""
                                   "",
                        VAR6->VAR21, VAR4->VAR15.VAR16);
            }
            break;
        default:
            FUN6(VAR6, 1, "");
            VAR7 = VAR24;
            break;
        }
        break;
    default:
        FUN6(VAR6, 1, "");
        VAR7 = VAR24;
        break;
    }
    return VAR7;
}