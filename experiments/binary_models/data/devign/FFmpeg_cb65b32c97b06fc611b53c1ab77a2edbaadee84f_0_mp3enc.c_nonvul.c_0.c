static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (VAR4->VAR8 && VAR4->VAR9 >= 4)
    {
        MPADecodeHeader VAR10;
        int av_unused VAR11;
        FUN2(&VAR10, FUN3(VAR4->VAR8));
        if (!VAR6->VAR12)
            VAR6->VAR12 = VAR10.VAR13;
        if ((VAR10.VAR13 == 0) || (VAR6->VAR12 != VAR10.VAR13))
            VAR6->VAR14 = 1;
        VAR11 = 4 + VAR15[VAR10.VAR16 == 1][VAR10.VAR17 == 1];
        if (VAR11 + 4 <= VAR4->VAR9)
        {
            uint32_t VAR18 = FUN3(VAR4->VAR8 + VAR11);
            if (FUN4('', '', '', '') == VAR18 || FUN4('', '', '', '') == VAR18)
                return 0;
        }
        VAR11 = 4 + 32;
        if (VAR11 + 4 <= VAR4->VAR9 && FUN4('', '', '', '') == FUN3(VAR4->VAR8 + VAR11))
            return 0;
        if (VAR6->VAR19)
            FUN5(VAR6, VAR4);
    }
    return FUN6(VAR2, VAR4);
}