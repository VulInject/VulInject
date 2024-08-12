FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    if (FUN2(VAR2, VAR7, VAR8, VAR9))
    {
        int VAR10 = FUN3(VAR2, VAR7, VAR9);
        assert(VAR10 <= VAR6->VAR11);
        FUN4(VAR6, VAR10);
        if (FUN2(VAR2, VAR12, VAR13, VAR9))
        {
            int VAR14 = FUN3(VAR2, VAR12, VAR9);
            FUN5("" VAR15, VAR14, VAR3);
            FUN6(VAR6, VAR14, VAR3);
            if (FUN2(VAR2, VAR16, VAR17, VAR9) || FUN2(VAR2, VAR18, VAR17, VAR9))
            {
                FUN7("" VAR15 "" VAR15 "", (VAR19)VAR2, VAR3, VAR4)