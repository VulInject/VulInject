static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    int VAR7 = 0;
    VAR8 *VAR9 = VAR4->VAR9;
    int VAR10 = VAR4->VAR10;
    switch (VAR4->VAR11)
    {
    case VAR12:
        VAR7 = FUN3(VAR6, VAR4);
        break;
    case VAR13:
        switch (VAR4->VAR14 & 0xf)
        {
        case VAR15:
            if (!VAR10)
            {
                VAR7 = VAR16;
            }
            else
            {
                VAR7 = FUN4(VAR6, VAR9, VAR10);
            }
            break;
        case VAR17:
            if (VAR6->VAR18)
            {
                VAR9[0] = VAR19;
                VAR9[1] = VAR6->VAR20;
                VAR7 = 2;
                VAR6->VAR18 = false;
                VAR6->VAR20 &= ~VAR21;
                FUN5(VAR6, VAR22, ""
                                   "",
                        VAR6->VAR20, VAR10);
            }
            break;
        default:
            FUN5(VAR6, 1, "");
            break;
        }
        break;
    default:
        FUN5(VAR6, 1, "");
        VAR7 = VAR23;
        break;
    }
    return VAR7;
}