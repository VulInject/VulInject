static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    switch (VAR5->VAR7)
    {
    case VAR8:
        if (VAR3)
        {
            if (FUN2(VAR5->VAR9, VAR10, NULL) < 0)
                FUN3("");
        }
        else
        {
            if (FUN2(VAR5->VAR9, VAR11, NULL) < 0)
                FUN3("");
        }
        break;
    case VAR12:
    {
        int VAR9;
        if (VAR5->VAR9 >= 0)
        {
            close(VAR5->VAR9);
            VAR5->VAR9 = -1;
        }
        VAR9 = open(VAR2->VAR13, VAR5->VAR14 | VAR15);
        if (VAR9 >= 0)
        {
            if (FUN2(VAR9, VAR16, 0) < 0)
                FUN3("");
            close(VAR9);
        }
    }
    break;
    default:
        return -VAR17;
    }
    return 0;
}