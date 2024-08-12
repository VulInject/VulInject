int FUN1(struct VAR1 *VAR2, void *VAR3, VhostBackendType VAR4)
{
    uint64_t VAR5;
    int VAR6, VAR7;
    if (FUN2(VAR2, VAR4) < 0)
    {
        close((VAR8)VAR3);
        return -1;
    }
    if (VAR2->VAR9->FUN3(VAR2, VAR3) < 0)
    {
        close((VAR8)VAR3);
        return -VAR10;
    }
    VAR7 = VAR2->VAR9->FUN4(VAR2, VAR11, NULL);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    VAR7 = VAR2->VAR9->FUN4(VAR2, VAR13, &VAR5);
    if (VAR7 < 0)
    {
        goto VAR12;
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR14; ++VAR6)
    {
        VAR7 = FUN5(VAR2, VAR2->VAR15 + VAR6, VAR2->VAR16 + VAR6);
        if (VAR7 < 0)
        {
            goto VAR17;
        }
    }
    VAR2->VAR5 = VAR5;
    VAR2->VAR18 = (VAR19){.VAR20 = VAR21, .VAR22 = VAR23, .VAR24 = VAR25, .VAR26 = VAR27, .VAR28 = VAR29, .VAR30 = VAR31, .VAR32 = VAR33, .VAR34 = VAR35, .VAR36 = VAR37, .VAR38 = VAR39, .VAR40 = VAR41, .VAR42 = VAR43, .VAR44 = 10};
    VAR2->VAR45 = NULL;
    if (!(VAR2->VAR5 & (0x1ULL << VAR46)))
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
    return 0;
VAR17:
    while (--VAR6 >= 0)
    {
        FUN11(VAR2->VAR15 + VAR6);
    }
VAR12:
    VAR7 = -VAR10;
    VAR2->VAR9->FUN12(VAR2);
    FUN13(VAR2, VAR58);
    return VAR7;