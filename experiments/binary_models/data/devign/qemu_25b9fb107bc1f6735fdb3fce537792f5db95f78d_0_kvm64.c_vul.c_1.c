int FUN1(VAR1 *VAR2, int VAR3)
{
    struct kvm_one_reg VAR4;
    uint32_t VAR5;
    uint64_t VAR6;
    int VAR7;
    int VAR8;
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = &VAR10->VAR12;
    if (!FUN3(VAR12))
    {
        FUN4(VAR12);
    }
    for (VAR7 = 0; VAR7 < 31; VAR7++)
    {
        VAR4.VAR13 = FUN5(VAR14.VAR14[VAR7]);
        VAR4.VAR15 = (VAR16)&VAR12->VAR17[VAR7];
        VAR8 = FUN6(VAR2, VAR18, &VAR4);
        if (VAR8)
        {
            return VAR8;
        }
    }
    FUN7(VAR12, 1);
    VAR4.VAR13 = FUN5(VAR14.VAR19);
    VAR4.VAR15 = (VAR16)&VAR12->VAR20[0];
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    VAR4.VAR13 = FUN5(VAR21);
    VAR4.VAR15 = (VAR16)&VAR12->VAR20[1];
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    if (FUN3(VAR12))
    {
        VAR6 = FUN8(VAR12);
    }
    else
    {
        VAR6 = FUN9(VAR12);
    }
    VAR4.VAR13 = FUN5(VAR14.VAR22);
    VAR4.VAR15 = (VAR16)&VAR6;
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    VAR4.VAR13 = FUN5(VAR14.VAR23);
    VAR4.VAR15 = (VAR16)&VAR12->VAR23;
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    VAR4.VAR13 = FUN5(VAR24);
    VAR4.VAR15 = (VAR16)&VAR12->VAR25[1];
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    for (VAR7 = 0; VAR7 < VAR26; VAR7++)
    {
        VAR4.VAR13 = FUN5(VAR27[VAR7]);
        VAR4.VAR15 = (VAR16)&VAR12->VAR28[VAR7 - 1];
        VAR8 = FUN6(VAR2, VAR18, &VAR4);
        if (VAR8)
        {
            return VAR8;
        }
    }
    for (VAR7 = 0; VAR7 < 32; VAR7++)
    {
        int VAR29 = VAR7 << 1;
        uint64_t VAR30[2];
        VAR30[0] = VAR12->VAR31.VAR14[VAR29 + 1];
        VAR30[1] = VAR12->VAR31.VAR14[VAR29];
        VAR30[1] = VAR12->VAR31.VAR14[VAR29 + 1];
        VAR30[0] = VAR12->VAR31.VAR14[VAR29];
        VAR4.VAR13 = FUN10(VAR32.VAR33[VAR7]);
        VAR4.VAR15 = (VAR16)(&VAR30);
        VAR8 = FUN6(VAR2, VAR18, &VAR4);
        if (VAR8)
        {
            return VAR8;
        }
    }
    VAR4.VAR15 = (VAR16)(&VAR5);
    VAR5 = FUN11(VAR12);
    VAR4.VAR13 = FUN12(VAR32.VAR34);
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    VAR5 = FUN13(VAR12);
    VAR4.VAR13 = FUN12(VAR32.VAR35);
    VAR8 = FUN6(VAR2, VAR18, &VAR4);
    if (VAR8)
    {
        return VAR8;
    }
    if (!FUN14(VAR10))
    {
        return VAR36;
    }
    FUN15(VAR10);
    return VAR8;
}