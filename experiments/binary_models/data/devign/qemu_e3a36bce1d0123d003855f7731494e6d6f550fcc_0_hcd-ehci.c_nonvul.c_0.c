static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    EHCIqtd VAR6 = VAR2->VAR6;
    uint32_t VAR7, VAR8 = VAR2->VAR7;
    for (;;)
    {
        if (FUN2(VAR6.VAR9) == 0)
        {
            break;
        }
        if (FUN2(VAR6.VAR10) != 0)
        {
            break;
        }
        VAR7 = VAR6.VAR10;
        if (VAR7 == VAR8)
        {
            break;
        }
        FUN3(VAR4->VAR11, FUN4(VAR7), (VAR12 *)&VAR6, sizeof(VAR13) >> 2);
        FUN5(VAR4, FUN4(VAR7), &VAR6);
        if (!(VAR6.VAR14 & VAR15))
        {
            break;
        }
        VAR2 = FUN6(VAR4);
        VAR2->VAR7 = VAR7;
        VAR2->VAR6 = VAR6;
        VAR2->VAR16 = FUN7(VAR2, "");
        if (VAR2->VAR16 == VAR17)
        {
            break;
        }
        assert(VAR2->VAR16 == VAR18);
        VAR2->VAR19 = VAR20;
    }
    return VAR2->VAR16;
}