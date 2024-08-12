int FUN1(struct VAR1 *VAR2, void *VAR3, VhostBackendType VAR4, uint32_t VAR5)
{
    uint64_t VAR6;
    int VAR7, VAR8;
    VAR2->VAR9 = NULL;
    VAR8 = FUN2(VAR2, VAR4);
    assert(VAR8 >= 0);
    VAR8 = VAR2->VAR10->FUN3(VAR2, VAR3);
    if (VAR8 < 0)
    {
        goto VAR11;
    }
    if (VAR12 > VAR2->VAR10->FUN4(VAR2))
    {
        fprintf(VAR13, ""
                        "");
        VAR8 = -1;
        goto VAR11;
    }
    FUN5(&VAR14, VAR2, VAR15);
    VAR8 = VAR2->VAR10->FUN6(VAR2);
    if (VAR8 < 0)
    {
        goto VAR11;
    }
    VAR8 = VAR2->VAR10->FUN7(VAR2, &VAR6);
    if (VAR8 < 0)
    {
        goto VAR11;
    }
    for (VAR7 = 0; VAR7 < VAR2->VAR16; ++VAR7)
    {
        VAR8 = FUN8(VAR2, VAR2->VAR17 + VAR7, VAR2->VAR18 + VAR7);
        if (VAR8 < 0)
        {
            goto VAR19;
        }
    }
    if (VAR5)
    {
        for (VAR7 = 0; VAR7 < VAR2->VAR16; ++VAR7)
        {
            VAR8 = FUN9(VAR2, VAR2->VAR18 + VAR7, VAR5);
            if (VAR8 < 0)
            {
                goto VAR20;
            }
        }
    }
    VAR2->VAR6 = VAR6;
    VAR2->VAR21 = (VAR22){.VAR23 = VAR24, .VAR25 = VAR26, .VAR27 = VAR28, .VAR29 = VAR30, .VAR31 = VAR32, .VAR33 = VAR34, .VAR35 = VAR36, .VAR37 = VAR38, .VAR39 = VAR40, .VAR41 = VAR42, .VAR43 = VAR44, .VAR45 = VAR46, .VAR47 = 10};
    if (VAR2->VAR9 == NULL)
    {
        if (!(VAR2->VAR6 & (0x1ULL << VAR48)))
        {
            FUN10(&VAR2->VAR9, "");
        }
        else if (!FUN11())
        {
            FUN10(&VAR2->VAR9, "");
        }
    }
    if (VAR2->VAR9 != NULL)
    {
        FUN12(VAR2->VAR9);
    }
    VAR2->VAR49 = FUN13(FUN14(struct VAR50, VAR51));
    VAR2->VAR52 = 0;
    VAR2->VAR53 = NULL;
    VAR2->VAR54 = NULL;
    VAR2->VAR55 = 0;
    VAR2->VAR56 = false;
    VAR2->VAR57 = false;
    VAR2->VAR58 = false;
    FUN15(&VAR2->VAR21, &VAR59);
    return 0;
VAR20:
    while (--VAR7 >= 0)
    {
        FUN9(VAR2, VAR2->VAR18 + VAR7, 0);
    }
    VAR7 = VAR2->VAR16;
VAR19:
    while (--VAR7 >= 0)
    {
        FUN16(VAR2->VAR17 + VAR7);
    }
VAR11:
    VAR8 = -VAR60;
    VAR2->VAR10->FUN17(VAR2);
    FUN18(VAR2, VAR15);
    return VAR8;
}