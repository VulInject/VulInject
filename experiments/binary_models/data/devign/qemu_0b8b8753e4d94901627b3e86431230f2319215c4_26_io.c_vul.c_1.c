int FUN1(VAR1 *VAR2, unsigned long int VAR3, void *VAR4)
{
    BdrvIoctlCoData VAR5 = {
        .VAR2 = VAR2,
        .VAR3 = VAR3,
        .VAR4 = VAR4,
        .VAR6 = -VAR7,
    };
    if (FUN2())
    {
        FUN3(&VAR5);
    }
    else
    {
        VAR8 *VAR9 = FUN4(VAR10);
        FUN5(VAR9, &VAR5);
        while (VAR5.VAR6 == -VAR7)
        {
            FUN6(FUN7(VAR2), true);
        }
    }
    return VAR5.VAR6;
}