VAR1 FUN1(abi_ulong VAR2, abi_ulong VAR3)
{
    void *VAR4, *VAR5;
    abi_ulong VAR6;
    int VAR7, VAR8;
    if (VAR2 == 0)
    {
        VAR2 = VAR9;
    }
    else
    {
        VAR2 &= VAR10;
    }
    VAR3 = FUN2(VAR3);
    if (VAR11)
    {
        return FUN3(VAR2, VAR3);
    }
    VAR6 = VAR2;
    VAR7 = VAR8 = 0;
    VAR5 = 0;
    for (;; VAR5 = VAR4)
    {
        VAR4 = FUN4(FUN5(VAR6), VAR3, VAR12, VAR13 | VAR14 | VAR15, -1, 0);
        if (VAR4 == VAR16)
        {
            return (VAR1)-1;
        }
        VAR8 = (VAR4 == VAR5 ? VAR8 + 1 : 0);
        if (FUN6(VAR4 + VAR3 - 1))
        {
            VAR6 = FUN7(VAR4);
            if ((VAR6 & ~VAR17) == 0)
            {
                if (VAR2 == VAR9 && VAR6 >= VAR18)
                {
                    VAR9 = VAR6 + VAR3;
                }
                return VAR6;
            }
            switch (VAR8)
            {
            case 0:
                VAR6 = FUN8(VAR6);
                break;
            case 1:
                VAR6 &= VAR17;
                break;
            case 2:
                VAR6 = 0;
                break;
            default:
                VAR6 = -1;
                break;
            }
        }
        else
        {
            VAR6 = (VAR8 ? -1 : 0);
        }
        FUN9(VAR4, VAR3);
        if (VAR6 == (VAR1)-1)
        {
            return (VAR1)-1;
        }
        else if (VAR6 == 0)
        {
            if (VAR7)
            {
                return (VAR1)-1;
            }
            VAR7 = 1;
            VAR6 = (VAR19 > VAR20 ? FUN8(VAR19) : VAR20);
        }
        else if (VAR7 && VAR6 >= VAR2)
        {
            return (VAR1)-1;
        }
    }
}