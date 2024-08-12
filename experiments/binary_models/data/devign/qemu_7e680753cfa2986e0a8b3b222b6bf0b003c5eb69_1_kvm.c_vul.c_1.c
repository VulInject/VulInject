static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct kvm_vcpu_events VAR4;
    if (!FUN2())
    {
        return 0;
    }
    VAR4.VAR5.VAR6 = (VAR2->VAR7 >= 0);
    VAR4.VAR5.VAR8 = VAR2->VAR7;
    VAR4.VAR5.VAR9 = VAR2->VAR9;
    VAR4.VAR5.VAR10 = VAR2->VAR10;
    VAR4.VAR11.VAR6 = (VAR2->VAR12 >= 0);
    VAR4.VAR11.VAR8 = VAR2->VAR12;
    VAR4.VAR11.VAR13 = VAR2->VAR14;
    VAR4.VAR15.VAR6 = VAR2->VAR16;
    VAR4.VAR15.VAR17 = VAR2->VAR18;
    VAR4.VAR15.VAR19 = !!(VAR2->VAR20 & VAR21);
    VAR4.VAR15.VAR22 = 0;
    VAR4.VAR23 = VAR2->VAR23;
    VAR4.VAR24 = 0;
    if (VAR3 >= VAR25)
    {
        VAR4.VAR24 |= VAR26 | VAR27;
    }
    return FUN3(VAR2, VAR28, &VAR4);