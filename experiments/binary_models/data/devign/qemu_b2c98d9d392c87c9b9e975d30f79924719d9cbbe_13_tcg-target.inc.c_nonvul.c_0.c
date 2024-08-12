static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, tcg_target_long VAR5)
{
    static const S390Opcode VAR6[4] = {VAR7, VAR8, VAR9, VAR10};
    tcg_target_ulong VAR11 = VAR5;
    int VAR12;
    if (VAR3 == VAR13)
    {
        VAR11 = (VAR14)VAR5;
        VAR5 = (VAR15)VAR5;
    }
    if (VAR5 >= -0x8000 && VAR5 < 0x8000)
    {
        FUN2(VAR2, VAR16, VAR17, VAR4, VAR5);
        return;
    }
    for (VAR12 = 0; VAR12 < 4; VAR12++)
    {
        tcg_target_long VAR18 = 0xffffull << VAR12 * 16;
        if ((VAR11 & VAR18) == VAR11)
        {
            FUN3(VAR2, VAR6[VAR12], VAR4, VAR11 >> VAR12 * 16);
            return;
        }
    }
    if (VAR19 & VAR20)
    {
        if (VAR5 == (VAR15)VAR5)
        {
            FUN2(VAR2, VAR21, VAR22, VAR4, VAR5);
            return;
        }
        if (VAR11 <= 0xffffffff)
        {
            FUN2(VAR2, VAR21, VAR23, VAR4, VAR11);
            return;
        }
        if ((VAR11 & 0xffffffff) == 0)
        {
            FUN2(VAR2, VAR21, VAR24, VAR4, VAR11 >> 31 >> 1);
            return;
        }
    }
    if ((VAR5 & 1) == 0)
    {
        ptrdiff_t VAR25 = FUN4(VAR2, (void *)VAR5) >> 1;
        if (VAR25 == (VAR15)VAR25)
        {
            FUN2(VAR2, VAR21, VAR26, VAR4, VAR25);
            return;
        }
    }
    if (!(VAR19 & VAR20))
    {
        if (VAR11 <= 0xffffffff)
        {
            FUN2(VAR2, VAR16, VAR27, VAR4, VAR11);
            FUN2(VAR2, VAR16, VAR28, VAR4, VAR11 >> 16);
            return;
        }
        if (VAR5 >> 31 >> 1 == -1)
        {
            if (VAR11 & 0x8000)
            {
                FUN2(VAR2, VAR16, VAR17, VAR4, VAR11);
            }
            else
            {
                FUN2(VAR2, VAR16, VAR17, VAR4, -1);
                FUN2(VAR2, VAR16, VAR29, VAR4, VAR11);
            }
            FUN2(VAR2, VAR16, VAR28, VAR4, VAR11 >> 16);
            return;
        }
    }
    FUN1(VAR2, VAR30, VAR4, VAR11 & 0xffffffff);
    VAR11 = VAR11 >> 31 >> 1;
    if (VAR19 & VAR20)
    {
        if (VAR11 < 0x10000)
        {
            FUN2(VAR2, VAR16, VAR31, VAR4, VAR11);
        }
        else if ((VAR11 & 0xffff) == 0)
        {
            FUN2(VAR2, VAR16, VAR32, VAR4, VAR11 >> 16);
        }
        else
        {
            FUN2(VAR2, VAR21, VAR33, VAR4, VAR11);
        }
    }
    else
    {
        if (VAR11 & 0xffff)
        {
            FUN2(VAR2, VAR16, VAR31, VAR4, VAR11);
        }
        if (VAR11 & 0xffff0000)
        {
            FUN2(VAR2, VAR16, VAR32, VAR4, VAR11 >> 16);
        }
    }
}