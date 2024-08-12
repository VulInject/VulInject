static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4, VAR5 *VAR6, uint64_t VAR7, uint64_t VAR8, uint64_t VAR9)
{
    int VAR10;
    VAR11 *VAR12 = NULL;
    uLongf VAR13;
    QEMUIOVector VAR14;
    struct iovec VAR15;
    int64_t VAR16;
    int64_t VAR17;
    if (VAR2->VAR18)
    {
        void *VAR19;
        if (!VAR2->VAR20)
        {
            VAR10 = -VAR21;
            goto VAR22;
        }
        VAR13 = (VAR2->VAR23 << 9) * 2;
        VAR12 = FUN2(VAR13 + sizeof(VAR11));
        VAR19 = FUN2(VAR8);
        FUN3(VAR6, VAR7, VAR19, VAR8);
        VAR10 = FUN4(VAR12->VAR12, &VAR13, VAR19, VAR8);
        FUN5(VAR19);
        if (VAR10 != VAR24 || VAR13 == 0)
        {
            VAR10 = -VAR21;
            goto VAR22;
        }
        VAR12->VAR25 = VAR9 >> VAR26;
        VAR12->VAR27 = VAR13;
        VAR8 = VAR13 + sizeof(VAR11);
        VAR15 = (struct VAR28){
            .VAR29 = VAR12,
            .VAR30 = VAR8,
        };
        FUN6(&VAR14, &VAR15, 1);
    }
    else
    {
        FUN7(&VAR14, VAR6->VAR31);
        FUN8(&VAR14, VAR6, VAR7, VAR8);
    }
    VAR16 = VAR3 + VAR4, VAR10 = FUN9(VAR2->VAR32, VAR16, VAR8, &VAR14, 0);
    VAR17 = FUN10(VAR16 + VAR8, VAR33);
    if (VAR2->VAR18)
    {
        VAR2->VAR34 = VAR17;
    }
    else
    {
        VAR2->VAR34 = FUN11(VAR2->VAR34, VAR17);
    }
    if (VAR10 < 0)
    {
        goto VAR22;
    }
    VAR10 = 0;
VAR22:
    FUN5(VAR12);
    if (!VAR2->VAR18)
    {
        FUN12(&VAR14);
    }
    return VAR10;
}