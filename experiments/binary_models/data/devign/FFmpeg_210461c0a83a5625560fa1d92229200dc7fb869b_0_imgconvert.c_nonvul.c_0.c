int FUN1(VAR1 *VAR2, const VAR1 *VAR3, enum AVPixelFormat VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8;
    if (VAR4 != VAR9 && VAR4 != VAR10 && VAR4 != VAR11 && VAR4 != VAR12 && VAR4 != VAR13 && VAR4 != VAR14 && VAR4 != VAR15)
        return -1;
    if ((VAR5 & 3) != 0 || (VAR6 & 3) != 0)
        return -1;
    for (VAR7 = 0; VAR7 < 3; VAR7++)
    {
        if (VAR7 == 1)
        {
            switch (VAR4)
            {
            case VAR10:
            case VAR9:
                VAR5 >>= 1;
                VAR6 >>= 1;
                break;
            case VAR11:
            case VAR12:
                VAR5 >>= 1;
                break;
            case VAR14:
                VAR5 >>= 2;
                break;
            default:
                break;
            }
            if (VAR4 == VAR15)
            {
                break;
            }
        }
        if (VAR3 == VAR2)
        {
            VAR8 = FUN2(VAR2->VAR16[VAR7], VAR2->VAR17[VAR7], VAR5, VAR6);
            if (VAR8 < 0)
                return VAR8;
        }
        else
        {
            FUN3(VAR2->VAR16[VAR7], VAR2->VAR17[VAR7], VAR3->VAR16[VAR7], VAR3->VAR17[VAR7], VAR5, VAR6);
        }
    }
    FUN4();
    return 0;
}