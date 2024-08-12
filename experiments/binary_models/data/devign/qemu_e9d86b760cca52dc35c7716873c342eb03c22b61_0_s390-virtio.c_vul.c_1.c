int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4)
{
    int VAR5 = 0, VAR6;
    FUN2("", VAR4);
    switch (VAR4)
    {
    case VAR7:
        if (VAR3 > VAR8)
        {
            VAR9 *VAR10 = FUN3(VAR11, VAR3, &VAR6);
            if (VAR10)
            {
                FUN4(VAR10->VAR12, VAR6);
            }
            else
            {
                VAR5 = -VAR13;
            }
        }
        else
        {
        }
        break;
    case VAR14:
    {
        VAR9 *VAR10;
        VAR10 = FUN5(VAR11, VAR3);
        FUN6(VAR10->VAR12);
        FUN7(VAR10);
        break;
    }
    case VAR15:
    {
        VAR9 *VAR10;
        VAR10 = FUN5(VAR11, VAR3);
        if (VAR10)
        {
            FUN8(VAR10);
        }
        else
        {
            VAR5 = -VAR13;
        }
        break;
    }
    default:
        VAR5 = -VAR13;
        break;
    }
    return VAR5;