FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8;
    uint32_t VAR9;
    while (FUN2(VAR6, VAR4))
    {
        if (VAR6->VAR10)
            return VAR11;
        VAR8 = 0;
        while (VAR8 == 0)
        {
            if (!(VAR9 = FUN3(VAR6, &VAR6->VAR12)))
            {
                return VAR11;
            }
            else if (VAR6->VAR12)
            {
                VAR6->VAR12--;
                break;
            }
            switch (VAR9)
            {
            case VAR13:
                if ((VAR8 = FUN4(VAR6, &VAR9)) < 0)
                    break;
                if ((VAR8 = FUN5(VAR6)) == 0)
                    VAR8 = 1;
                break;
            default:
            case VAR14:
                VAR8 = FUN6(VAR6);
                break;
            }
            if (VAR6->VAR12)
            {
                VAR6->VAR12--;
                break;
            }
        }
        if (VAR8 == -1)
            VAR6->VAR10 = 1;
    }
    return 0;
}