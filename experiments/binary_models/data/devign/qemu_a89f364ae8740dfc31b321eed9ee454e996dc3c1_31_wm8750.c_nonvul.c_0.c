static int FUN1(VAR1 *VAR2, enum i2c_event VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    switch (VAR3)
    {
    case VAR6:
        VAR5->VAR7 = 0;
        break;
    case VAR8:
        if (VAR5->VAR7 < 2)
            FUN3("", VAR9, VAR5->VAR7);
        break;
    default:
        break;
    }
    return 0;
}