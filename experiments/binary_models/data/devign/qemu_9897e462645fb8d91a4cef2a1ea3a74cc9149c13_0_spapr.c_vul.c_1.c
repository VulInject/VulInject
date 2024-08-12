static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    uint32_t VAR7;
    int VAR8 = -1;
    if (VAR4 < 1 || VAR4 > 1)
    {
        FUN2("");
        return -VAR9;
    }
    VAR7 = FUN3(VAR2);
    if (VAR7)
    {
        VAR10 *VAR11;
        FUN4(VAR6, VAR7, &VAR11);
        if (VAR11)
        {
            FUN5(VAR11);
            return -VAR9;
        }
        return 0;
    }
    if (!VAR6->VAR12)
    {
        assert(FUN6());
        VAR8 = FUN7(true);
        if (VAR8 < 0)
        {
            FUN2("", strerror(VAR13));
        }
    }
    while (true)
    {
        uint32_t VAR14;
        uint16_t VAR15, VAR16;
        VAR14 = FUN3(VAR2);
        VAR15 = FUN8(VAR2);
        VAR16 = FUN8(VAR2);
        if ((VAR14 == 0) && (VAR15 == 0) && (VAR16 == 0))
        {
            break;
        }
        if ((VAR14 + VAR15 + VAR16) > (FUN9(VAR6) / VAR17))
        {
            FUN2("", VAR14, VAR15, VAR16, VAR6->VAR18);
            return -VAR9;
        }
        if (VAR6->VAR12)
        {
            if (VAR15)
            {
                FUN10(VAR2, FUN11(VAR6->VAR12, VAR14), VAR17 * VAR15);
            }
            if (VAR16)
            {
                memset(FUN11(VAR6->VAR12, VAR14 + VAR15), 0, VAR17 * VAR16);
            }
        }
        else
        {
            int VAR19;
            assert(VAR8 >= 0);
            VAR19 = FUN12(VAR2, VAR8, VAR14, VAR15, VAR16);
            if (VAR19 < 0)
            {
                return VAR19;
            }
        }
    }
    if (!VAR6->VAR12)
    {
        assert(VAR8 >= 0);
        close(VAR8);
    }
    return 0;
}