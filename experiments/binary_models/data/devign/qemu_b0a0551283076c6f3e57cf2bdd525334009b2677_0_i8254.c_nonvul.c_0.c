static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct kvm_pit_state2 VAR5 = {};
    struct VAR6 *VAR7;
    struct VAR8 *VAR9;
    int VAR10, VAR11;
    if (VAR4->VAR12)
    {
        FUN3(VAR4);
    }
    VAR5.VAR13 = VAR2->VAR14[0].VAR15 ? VAR16 : 0;
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        VAR7 = &VAR5.VAR14[VAR10];
        VAR9 = &VAR2->VAR14[VAR10];
        VAR7->VAR17 = VAR9->VAR17;
        VAR7->VAR18 = VAR9->VAR18;
        VAR7->VAR19 = VAR9->VAR19;
        VAR7->VAR20 = VAR9->VAR20;
        VAR7->VAR21 = VAR9->VAR21;
        VAR7->VAR22 = VAR9->VAR22;
        VAR7->VAR23 = VAR9->VAR23;
        VAR7->VAR24 = VAR9->VAR24;
        VAR7->VAR25 = VAR9->VAR25;
        VAR7->VAR26 = VAR9->VAR26;
        VAR7->VAR27 = VAR9->VAR27;
        VAR7->VAR28 = VAR9->VAR28;
        VAR7->VAR29 = VAR9->VAR29 - VAR4->VAR30;
    }
    VAR11 = FUN4(VAR31, FUN5() ? VAR32 : VAR33, &VAR5);
    if (VAR11 < 0)
    {
        fprintf(VAR34, "", FUN5() ? "" : "", strerror(VAR11));
        FUN6();
    }
}