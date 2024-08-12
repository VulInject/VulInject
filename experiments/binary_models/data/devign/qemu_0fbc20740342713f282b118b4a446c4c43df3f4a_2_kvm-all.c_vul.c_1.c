int FUN1(VAR1 *VAR2, MSIMessage VAR3)
{
    struct kvm_msi VAR4;
    VAR5 *VAR6;
    if (VAR2->VAR7)
    {
        VAR4.VAR8 = (VAR9)VAR3.VAR10;
        VAR4.VAR11 = VAR3.VAR10 >> 32;
        VAR4.VAR12 = FUN2(VAR3.VAR12);
        VAR4.VAR13 = 0;
        memset(VAR4.VAR14, 0, sizeof(VAR4.VAR14));
        return FUN3(VAR2, VAR15, &VAR4);
    }
    VAR6 = FUN4(VAR2, VAR3);
    if (!VAR6)
    {
        int VAR16;
        VAR16 = FUN5(VAR2);
        if (VAR16 < 0)
        {
            return VAR16;
        }
        VAR6 = FUN6(sizeof(VAR5));
        VAR6->VAR17.VAR18 = VAR16;
        VAR6->VAR17.VAR19 = VAR20;
        VAR6->VAR17.VAR13 = 0;
        VAR6->VAR17.VAR21.VAR4.VAR8 = (VAR9)VAR3.VAR10;
        VAR6->VAR17.VAR21.VAR4.VAR11 = VAR3.VAR10 >> 32;
        VAR6->VAR17.VAR21.VAR4.VAR12 = FUN2(VAR3.VAR12);
        FUN7(VAR2, &VAR6->VAR17);
        FUN8(VAR2);
        FUN9(&VAR2->VAR22[FUN10(VAR3.VAR12)], VAR6, VAR23);
    }
    assert(VAR6->VAR17.VAR19 == VAR20);
    return FUN11(VAR2, VAR6->VAR17.VAR18, 1);
}