static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    struct kvm_fpu VAR5;
    int VAR6, VAR7;
    VAR7 = FUN2(FUN3(VAR2), VAR8, &VAR5);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    VAR4->VAR9 = (VAR5.VAR10 >> 11) & 7;
    VAR4->VAR11 = VAR5.VAR10;
    VAR4->VAR12 = VAR5.VAR13;
    VAR4->VAR14 = VAR5.VAR15;
    VAR4->VAR16 = VAR5.VAR17;
    VAR4->VAR18 = VAR5.VAR19;
    for (VAR6 = 0; VAR6 < 8; ++VAR6)
    {
        VAR4->VAR20[VAR6] = !((VAR5.VAR21 >> VAR6) & 1);
    }
    memcpy(VAR4->VAR22, VAR5.VAR23, sizeof VAR4->VAR22);
    for (VAR6 = 0; VAR6 < VAR24; VAR6++)
    {
        VAR4->VAR25[VAR6].FUN4(0) = FUN5(&VAR5.VAR26[VAR6][0]);
        VAR4->VAR25[VAR6].FUN4(1) = FUN5(&VAR5.VAR26[VAR6][8]);
    }
    VAR4->VAR27 = VAR5.VAR27;
    return 0;
}