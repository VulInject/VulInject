static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct kvm_fpu VAR5;
    int VAR6;
    memset(&VAR5, 0, sizeof VAR5);
    VAR5.VAR7 = VAR4->VAR8 & ~(7 << 11);
    VAR5.VAR7 |= (VAR4->VAR9 & 7) << 11;
    VAR5.VAR10 = VAR4->VAR11;
    VAR5.VAR12 = VAR4->VAR13;
    VAR5.VAR14 = VAR4->VAR15;
    VAR5.VAR16 = VAR4->VAR17;
    for (VAR6 = 0; VAR6 < 8; ++VAR6)
    {
        VAR5.VAR18 |= (!VAR4->VAR19[VAR6]) << VAR6;
    }
    memcpy(VAR5.VAR20, VAR4->VAR21, sizeof VAR4->VAR21);
    for (VAR6 = 0; VAR6 < VAR22; VAR6++)
    {
        FUN2(&VAR5.VAR23[VAR6][0], VAR4->VAR24[VAR6].FUN3(0));
        FUN2(&VAR5.VAR23[VAR6][8], VAR4->VAR24[VAR6].FUN3(1));
    }
    VAR5.VAR25 = VAR4->VAR25;
    return FUN4(FUN5(VAR2), VAR26, &VAR5);
}