int FUN1(struct VAR1 *VAR2, void *VAR3, VhostBackendType VAR4, bool VAR5)
{
    uint64_t VAR6;
    int VAR7, VAR8;
    if (FUN2(VAR2, VAR4) < 0)
    {
        close((VAR9)VAR3);
        return -1;
    }
    if (VAR2->VAR10->FUN3(VAR2, VAR3) < 0)
    {
        close((VAR9)VAR3);
        return -VAR11;
    }
    VAR8 = VAR2->VAR10->FUN4(VAR2, VAR12, NULL);
    if (VAR8 < 0)
    {
        goto VAR13;
    }
    VAR8 = VAR2->VAR10->FUN4(VAR2, VAR14, &VAR6);
    if (VAR8 < 0)
    {
        goto VAR13;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR15; ++VAR7)
    {
        VAR8 = FUN5(VAR2, VAR2->VAR16 + VAR7, VAR7);
        if (VAR8 < 0)
        {
            goto VAR17;
        }
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR18 = (VAR19){.VAR20 = VAR21, .VAR22 = VAR23, .VAR24 = VAR25, .VAR26 = VAR27, .VAR28 = VAR29, .VAR30 = VAR31, .VAR32 = VAR33, .VAR34 = VAR35, .VAR36 = VAR37, .VAR38 = VAR39, .VAR40 = VAR41, .VAR42 = VAR43, .VAR44 = 10};
    VAR2->VAR45 = NULL;
    if (!(VAR2->VAR6 & (0x1ULL << VAR46)))
    {
        FUN6(&VAR2->VAR45, "");
        FUN7(VAR2->VAR45);
    }
    VAR2->VAR47 = FUN8(FUN9(struct VAR48, VAR49));
    VAR2->VAR50 = 0;
    VAR2->VAR51 = NULL;
    VAR2->VAR52 = NULL;
    VAR2->VAR53 = 0;
    VAR2->VAR54 = false;
    VAR2->VAR55 = false;
    VAR2->VAR56 = false;
    FUN10(&VAR2->VAR18, &VAR57);
    VAR2->VAR5 = VAR5;
    return 0;
VAR17:
    while (--VAR7 >= 0)
    {
        FUN11(VAR2->VAR16 + VAR7);
    }
VAR13:
    VAR8 = -VAR11;
    VAR2->VAR10->FUN12(VAR2);
    return VAR8;
}