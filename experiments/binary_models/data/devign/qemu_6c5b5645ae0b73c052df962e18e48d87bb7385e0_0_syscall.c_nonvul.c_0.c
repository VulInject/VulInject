static VAR1 FUN1(int VAR2, int VAR3, int VAR4)
{
    int VAR5 = VAR3;
    int VAR6;
    VAR6 = FUN2(&VAR3);
    if (VAR6)
    {
        return VAR6;
    }
    if (VAR2 == VAR7 && VAR4 != VAR8)
    {
        return -VAR9;
    }
    if (VAR2 == VAR10 || (VAR2 == VAR11 && VAR3 == VAR12))
    {
        VAR4 = FUN3(VAR4);
    }
    VAR6 = FUN4(socket(VAR2, VAR3, VAR4));
    if (VAR6 >= 0)
    {
        VAR6 = FUN5(VAR6, VAR5);
        if (VAR3 == VAR12)
        {
            FUN6(VAR6, &VAR13);
        }
        else if (VAR2 == VAR7)
        {
            switch (VAR4)
            {
            case VAR8:
                FUN6(VAR6, &VAR14);
                break;
            default:
                FUN7();
            }
        }
    }
    return VAR6;
}