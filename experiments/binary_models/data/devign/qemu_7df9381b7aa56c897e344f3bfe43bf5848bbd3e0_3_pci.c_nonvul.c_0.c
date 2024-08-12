static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    uint8_t VAR6, VAR7, VAR8;
    int VAR9;
    VAR6 = VAR5->VAR10[VAR3];
    VAR7 = VAR5->VAR10[VAR3 + VAR11];
    VAR8 = FUN2(VAR5, VAR3);
    if (VAR7)
    {
        VAR9 = FUN1(VAR2, VAR7);
        if (VAR9)
        {
            return VAR9;
        }
    }
    else
    {
        VAR5->VAR10[VAR12] = 0;
        VAR2->VAR13[VAR12] = 0xff;
        VAR2->VAR13[VAR14] |= VAR15;
    }
    FUN3(VAR2->VAR13 + VAR3 + VAR11, 0xff);
    switch (VAR6)
    {
    case VAR16:
        VAR9 = FUN4(VAR2, VAR3);
        break;
    case VAR17:
        FUN5(VAR2, VAR3);
        VAR9 = FUN6(VAR2, VAR3, VAR8);
        break;
    case VAR18:
        VAR9 = FUN7(VAR2, VAR3);
        break;
    case VAR19:
        FUN8(VAR2, VAR3);
        VAR2->VAR20 = VAR3;
        VAR9 = FUN9(VAR5, VAR6, VAR3, VAR8);
        break;
    case VAR21:
        FUN10(VAR2, VAR3);
        VAR9 = FUN9(VAR5, VAR6, VAR3, VAR8);
        break;
    default:
        VAR9 = FUN9(VAR5, VAR6, VAR3, VAR8);
        break;
    }
    if (VAR9 < 0)
    {
        FUN11(""
                     "",
                     VAR2->VAR22.VAR23, VAR6, VAR8, VAR3, VAR9);
        return VAR9;
    }
    return 0;
}