static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    if (!VAR4->VAR8)
        VAR4->VAR8 = FUN2(sizeof(*VAR4->VAR8));
    if (VAR4->VAR8->VAR9)
        FUN3(VAR4->VAR8->VAR9);
    *(VAR4->VAR8) = *(VAR2->VAR10);
    VAR4->VAR8->VAR9 = FUN2(VAR4->VAR8->VAR11 * VAR4->VAR8->VAR12);
    if (!VAR4->VAR13.VAR2)
        VAR4->VAR13.VAR2 = FUN2(sizeof(*VAR4->VAR13.VAR2));
    if (FUN4(VAR2) != VAR4->VAR13.VAR2->VAR14.VAR15)
        FUN5(VAR2);
    *(VAR4->VAR13.VAR2) = *(VAR2->VAR10);
    memset(VAR4->VAR13.VAR16, 0xFF, sizeof(VAR4->VAR13.VAR16));
    FUN6(VAR7, &VAR4->VAR17, VAR18)
    {
        FUN7(VAR7);
        FUN8(VAR7);
        if (VAR7->VAR4->VAR19)
        {
            FUN9(VAR7);
        }
        memset(VAR7->VAR16, 0xFF, sizeof(VAR7->VAR16));
    }
}