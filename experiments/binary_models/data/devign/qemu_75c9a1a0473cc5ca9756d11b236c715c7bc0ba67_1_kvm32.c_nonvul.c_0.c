int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    uint64_t VAR6;
    struct kvm_one_reg VAR7;
    struct kvm_reg_list VAR8;
    struct VAR9 *VAR10;
    VAR11 *VAR12 = FUN2(VAR2);
    if (VAR12->VAR13 == VAR14)
    {
        fprintf(VAR15, "");
        return -VAR16;
    }
    memset(VAR12->VAR17, 0, sizeof(VAR12->VAR17));
    if (VAR12->VAR18)
    {
        VAR12->VAR17[0] |= 1 << VAR19;
    }
    if (FUN3(VAR2->VAR20, VAR21))
    {
        VAR12->VAR22 = 2;
        VAR12->VAR17[0] |= 1 << VAR23;
    }
    VAR4 = FUN4(VAR2);
    if (VAR4)
    {
        return VAR4;
    }
    VAR7.VAR24 = VAR25 | VAR26 | VAR27 | 31;
    VAR7.VAR28 = (VAR29)(&VAR6);
    VAR4 = FUN5(VAR2, VAR30, &VAR7);
    if (VAR4 == -VAR31)
    {
        return -VAR16;
    }
    VAR8.VAR32 = 0;
    VAR4 = FUN5(VAR2, VAR33, &VAR8);
    if (VAR4 != -VAR34)
    {
        return VAR4;
    }
    VAR10 = FUN6(sizeof(struct VAR9) + VAR8.VAR32 * sizeof(VAR35));
    VAR10->VAR32 = VAR8.VAR32;
    VAR4 = FUN5(VAR2, VAR33, VAR10);
    if (VAR4)
    {
        goto VAR36;
    }
    FUN7(&VAR10->VAR37, VAR10->VAR32, sizeof(VAR10->VAR37[0]), VAR38);
    for (VAR3 = 0, VAR5 = 0; VAR3 < VAR10->VAR32; VAR3++)
    {
        if (!FUN8(VAR10->VAR37[VAR3]))
        {
            continue;
        }
        switch (VAR10->VAR37[VAR3] & VAR39)
        {
        case VAR40:
        case VAR26:
            break;
        default:
            fprintf(VAR15, "");
            VAR4 = -VAR16;
            goto VAR36;
        }
        VAR5++;
    }
    VAR12->VAR41 = FUN9(VAR35, VAR12->VAR41, VAR5);
    VAR12->VAR42 = FUN9(VAR35, VAR12->VAR42, VAR5);
    VAR12->VAR43 = FUN9(VAR35, VAR12->VAR43, VAR5);
    VAR12->VAR44 = FUN9(VAR35, VAR12->VAR44, VAR5);
    VAR12->VAR45 = VAR5;
    VAR12->VAR46 = VAR5;
    for (VAR3 = 0, VAR5 = 0; VAR3 < VAR10->VAR32; VAR3++)
    {
        uint64_t VAR47 = VAR10->VAR37[VAR3];
        if (!FUN8(VAR47))
        {
            continue;
        }
        VAR12->VAR41[VAR5] = VAR47;
        VAR5++;
    }
    assert(VAR12->VAR45 == VAR5);
    if (!FUN10(VAR12))
    {
        fprintf(VAR15, "");
        VAR4 = -VAR16;
        goto VAR36;
    }
VAR36:
    FUN11(VAR10);
    return VAR4;
}