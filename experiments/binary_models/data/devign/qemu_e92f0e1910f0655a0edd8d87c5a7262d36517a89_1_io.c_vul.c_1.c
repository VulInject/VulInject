FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, bool VAR6)
{
    if (FUN2())
    {
        return FUN3(VAR2, VAR4, VAR5, VAR6);
    }
    else
    {
        BdrvVmstateCo VAR7 = {
            .VAR2 = VAR2,
            .VAR4 = VAR4,
            .VAR5 = VAR5,
            .VAR6 = VAR6,
            .VAR8 = -VAR9,
        };
        VAR10 *VAR11 = FUN4(VAR12, &VAR7);
        FUN5(VAR11);
        while (VAR7.VAR8 == -VAR9)
        {
            FUN6(FUN7(VAR2), true);
        }
        return VAR7.VAR8;
    }
}