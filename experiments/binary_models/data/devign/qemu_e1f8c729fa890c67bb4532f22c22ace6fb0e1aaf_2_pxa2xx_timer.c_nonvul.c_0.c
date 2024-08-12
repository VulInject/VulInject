static VAR1 *FUN1(target_phys_addr_t VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    VAR1 *VAR7;
    VAR7 = (VAR1 *)FUN2(sizeof(VAR1));
    VAR7->VAR8 = 0;
    VAR7->VAR9 = 0;
    VAR7->VAR10 = 0;
    VAR7->VAR11 = FUN3(VAR12);
    VAR7->VAR13 = 0;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR7->VAR14[VAR5].VAR15 = 0;
        VAR7->VAR14[VAR5].VAR16 = FUN4(VAR4, VAR17 + VAR5);
        VAR7->VAR14[VAR5].VAR18 = VAR7;
        VAR7->VAR14[VAR5].VAR19 = VAR5;
        VAR7->VAR14[VAR5].VAR20 = 0;
        VAR7->VAR14[VAR5].VAR21 = FUN5(VAR12, VAR22, &VAR7->VAR14[VAR5]);
    }
    VAR6 = FUN6(VAR23, VAR24, VAR7, VAR25);
    FUN7(VAR2, 0x00001000, VAR6);
    FUN8(NULL, "", 0, 0, VAR26, VAR27, VAR7);
    return VAR7;
}