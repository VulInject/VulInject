int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    char *VAR8;
    size_t VAR9 = VAR4->VAR10;
    int VAR11;
    uint64_t VAR12;
    uint32_t VAR13;
    size_t VAR14;
    VAR15 *VAR16;
    VAR8 = FUN2(VAR2, VAR9);
    VAR7 = (VAR6 *)VAR8;
    if (VAR9 < sizeof(*VAR7))
    {
        VAR11 = -VAR17;
        goto VAR18;
    }
    VAR14 = sizeof(*VAR7) + VAR4->VAR19;
    VAR12 = VAR2->VAR20 * VAR21;
    VAR13 = VAR4->VAR22 >> (VAR4->VAR23 - 3);
    *VAR7 = (VAR6){
        .VAR24 = FUN3(VAR25),
        .VAR26 = FUN3(VAR4->VAR27),
        .VAR28 = 0,
        .VAR29 = 0,
        .VAR23 = FUN3(VAR4->VAR23),
        .VAR30 = FUN4(VAR12),
        .VAR31 = FUN3(VAR4->VAR32),
        .VAR33 = FUN3(VAR4->VAR33),
        .VAR34 = FUN4(VAR4->VAR34),
        .VAR35 = FUN4(VAR4->VAR35),
        .VAR13 = FUN3(VAR13),
        .VAR36 = FUN3(VAR4->VAR36),
        .VAR37 = FUN4(VAR4->VAR37),
        .VAR38 = FUN4(VAR4->VAR38),
        .VAR39 = FUN4(VAR4->VAR39),
        .VAR40 = FUN4(VAR4->VAR40),
        .VAR41 = FUN3(VAR4->VAR41),
        .VAR14 = FUN3(VAR14),
    };
    switch (VAR4->VAR27)
    {
    case 2:
        VAR11 = FUN5(VAR6, VAR38);
        break;
    case 3:
        VAR11 = sizeof(*VAR7);
        break;
    default:
        VAR11 = -VAR42;
        goto VAR18;
    }
    VAR8 += VAR11;
    VAR9 -= VAR11;
    memset(VAR8, 0, VAR9);
    if (VAR4->VAR19)
    {
        if (VAR9 < VAR4->VAR19)
        {
            VAR11 = -VAR17;
            goto VAR18;
        }
        memcpy(VAR8, VAR4->VAR43, VAR4->VAR19);
        VAR8 += VAR4->VAR19;
        VAR9 -= VAR4->VAR19;
    }
    if (VAR4->VAR44)
    {
        VAR11 = FUN6(VAR8, VAR45, VAR4->VAR44, strlen(VAR4->VAR44), VAR9);
        if (VAR11 < 0)
        {
            goto VAR18;
        }
        VAR8 += VAR11;
        VAR9 -= VAR11;
    }
    Qcow2Feature VAR46[] = {
        {
            .VAR47 = VAR48,
            .VAR49 = VAR50,
            .VAR51 = "",
        },
        {
            .VAR47 = VAR48,
            .VAR49 = VAR52,
            .VAR51 = "",
        },
        {
            .VAR47 = VAR53,
            .VAR49 = VAR54,
            .VAR51 = "",
        },
    };
    VAR11 = FUN6(VAR8, VAR55, VAR46, sizeof(VAR46), VAR9);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    VAR8 += VAR11;
    VAR9 -= VAR11;
    FUN7(VAR16, &VAR4->VAR56, VAR57)
    {
        VAR11 = FUN6(VAR8, VAR16->VAR24, VAR16->VAR58, VAR16->VAR59, VAR9);
        if (VAR11 < 0)
        {
            goto VAR18;
        }
        VAR8 += VAR11;
        VAR9 -= VAR11;
    }
    VAR11 = FUN6(VAR8, VAR60, NULL, 0, VAR9);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    VAR8 += VAR11;
    VAR9 -= VAR11;
    if (VAR4->VAR61)
    {
        size_t VAR62 = strlen(VAR4->VAR61);
        if (VAR9 < VAR62)
        {
            VAR11 = -VAR17;
            goto VAR18;
        }
        strncpy(VAR8, VAR4->VAR61, VAR9);
        VAR7->VAR28 = FUN4(VAR8 - ((char *)VAR7));
        VAR7->VAR29 = FUN3(VAR62);
    }
    VAR11 = FUN8(VAR2->VAR63, 0, VAR7, VAR4->VAR10);
    if (VAR11 < 0)
    {
        goto VAR18;
    }
    VAR11 = 0;
VAR18:
    FUN9(VAR7);
    return VAR11;
}