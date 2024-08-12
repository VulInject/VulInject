static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    int VAR8 = 0;
    if (FUN2(VAR4->VAR9.VAR10, VAR4->VAR9.VAR11, 0, &VAR7, sizeof(VAR7)) < sizeof(VAR7))
    {
        FUN3();
        return;
    }
    FUN4(VAR6, &VAR7);
    if (VAR7 == VAR12)
    {
        if (FUN5(VAR4, sizeof(VAR13), sizeof(VAR14)) < 0)
        {
            FUN3();
        }
        else
        {
            VAR8 = FUN6(VAR2, VAR4);
        }
    }
    else if (VAR7 == VAR15 || VAR7 == VAR16)
    {
        if (FUN5(VAR4, sizeof(VAR17), sizeof(VAR18)) < 0)
        {
            FUN3();
        }
        else
        {
            VAR4->VAR19.VAR20.VAR21 = 0;
            VAR4->VAR19.VAR20.VAR22 = VAR23;
        }
    }
    if (VAR8 == 0)
    {
        FUN7(VAR4);
    }
    else
    {
        assert(VAR8 == -VAR24);
    }
}