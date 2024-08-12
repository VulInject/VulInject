static int FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    if (VAR3 != VAR2->VAR3)
    {
        int VAR4;
        if ((VAR4 = FUN2(VAR3)) < 0)
        {
            FUN3(VAR2->VAR5, VAR6, "", VAR3);
            return FUN4(VAR7);
        }
        if (VAR8[VAR4].VAR9 != VAR2->VAR9 && VAR8[VAR4].VAR9 != VAR10)
        {
            FUN3(VAR2->VAR5, VAR6, "", VAR8[VAR4].VAR9, VAR2->VAR9);
            return VAR11;
        }
        VAR2->VAR12 = &VAR8[VAR4];
        FUN3(VAR2->VAR5, VAR13, "", VAR3);
        FUN5(&VAR2->VAR14);
        FUN5(&VAR2->VAR15);
        FUN5(&VAR2->VAR16);
        FUN6(&VAR2->VAR14, VAR17, 257, VAR2->VAR12->VAR18, 1, 1, VAR2->VAR12->VAR19, 2, 2, 0);
        FUN6(&VAR2->VAR15, VAR20, VAR2->VAR9 + 4, VAR2->VAR12->VAR21, 1, 1, VAR2->VAR12->VAR22, 1, 1, 0);
        FUN6(&VAR2->VAR16, VAR17, 62, VAR2->VAR12->VAR23, 1, 1, VAR2->VAR12->VAR24, 2, 2, 0);
        VAR2->VAR3 = VAR3;
    }
    return 0;
}