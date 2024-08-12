static VAR1 FUN1(VAR2 *VAR3)
{
    ssize_t VAR4;
    char *VAR5;
    if (!(VAR3->VAR6 & VAR7))
    {
        if (VAR3->VAR8 == 1)
        {
            return FUN2(VAR3, VAR3->VAR9->VAR10);
        }
        if (VAR11)
        {
            VAR4 = FUN3(VAR3);
            if (VAR4 == VAR3->VAR12 || (VAR4 < 0 && VAR4 != -VAR13))
            {
                return VAR4;
            }
            VAR11 = false;
        }
    }
    VAR5 = FUN4(VAR3->VAR14, VAR3->VAR12);
    if (VAR3->VAR6 & VAR15)
    {
        char *VAR16 = VAR5;
        int VAR17;
        for (VAR17 = 0; VAR17 < VAR3->VAR8; ++VAR17)
        {
            memcpy(VAR16, VAR3->VAR9[VAR17].VAR10, VAR3->VAR9[VAR17].VAR18);
            VAR16 += VAR3->VAR9[VAR17].VAR18;
        }
        assert(VAR16 - VAR5 == VAR3->VAR12);
    }
    VAR4 = FUN2(VAR3, VAR5);
    if (!(VAR3->VAR6 & VAR15))
    {
        char *VAR16 = VAR5;
        size_t VAR19 = VAR3->VAR12, copy;
        int VAR17;
        for (VAR17 = 0; VAR17 < VAR3->VAR8 && VAR19; ++VAR17)
        {
            copy = VAR19;
            if (copy > VAR3->VAR9[VAR17].VAR18)
            {
                copy = VAR3->VAR9[VAR17].VAR18;
            }
            memcpy(VAR3->VAR9[VAR17].VAR10, VAR16, copy);
            assert(VAR19 >= copy);
            VAR16 += copy;
            VAR19 -= copy;
        }
        assert(VAR19 == 0);
    }
    FUN5(VAR5);
    return VAR4;
}