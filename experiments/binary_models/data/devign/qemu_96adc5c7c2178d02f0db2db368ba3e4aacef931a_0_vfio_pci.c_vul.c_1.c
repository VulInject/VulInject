static int FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    uint8_t VAR6, VAR7, VAR8;
    int VAR9;
    VAR6 = VAR5->VAR10[VAR3];
    VAR7 = VAR5->VAR10[VAR3 + 1];
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
        VAR5->VAR10[VAR11] = 0;
    }
    switch (VAR6)
    {
    case VAR12:
        VAR9 = FUN3(VAR2, VAR3);
        break;
    case VAR13:
        VAR9 = FUN4(VAR2, VAR3);
        break;
    default:
        VAR9 = FUN5(VAR5, VAR6, VAR3, VAR8);
        break;
    }
    if (VAR9 < 0)
    {
        FUN6(""
                     "",
                     VAR2->VAR14.VAR15, VAR2->VAR14.VAR16, VAR2->VAR14.VAR17, VAR2->VAR14.VAR18, VAR6, VAR8, VAR3, VAR9);
        return VAR9;
    }
    return 0;
}