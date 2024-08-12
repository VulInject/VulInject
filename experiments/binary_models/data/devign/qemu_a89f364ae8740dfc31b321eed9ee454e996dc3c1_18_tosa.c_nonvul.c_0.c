static int FUN1(VAR1 *VAR2, enum i2c_event VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR5->VAR6 = 0;
    switch (VAR3)
    {
    case VAR7:
        break;
    case VAR8:
        FUN3("", VAR9);
        break;
    case VAR10:
        if (VAR5->VAR6 < 2)
            FUN3("", VAR9, VAR5->VAR6);
        if (VAR5->VAR6 > 2)
            FUN3("", VAR9);
        break;
    default:
        break;
    }
    return 0;
}