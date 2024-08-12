static int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    if (VAR8->VAR10 == 1 && VAR8->VAR11[0].VAR12)
    {
        VAR13 *VAR14;
        VAR15 *VAR16 = FUN2(VAR2);
        VmdkWriteCompressedCo VAR17 = {
            .VAR2 = VAR2,
            .VAR3 = VAR3,
            .VAR5 = VAR5,
            .VAR6 = VAR6,
            .VAR18 = -VAR19,
        };
        VAR14 = FUN3(VAR20);
        FUN4(VAR14, &VAR17);
        while (VAR17.VAR18 == -VAR19)
        {
            FUN5(VAR16, true);
        }
        return VAR17.VAR18;
    }
    else
    {
        return -VAR21;
    }
}