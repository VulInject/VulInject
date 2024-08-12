static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    if (!FUN2(VAR2, VAR8, 0x8168) || VAR3 != 2)
    {
        return;
    }
    VAR5 = FUN3(sizeof(*VAR5));
    VAR5->VAR9 = FUN3(sizeof(VAR10) * 2);
    VAR5->VAR11 = 2;
    VAR5->VAR12 = VAR7 = FUN3(sizeof(*VAR7));
    VAR7->VAR2 = VAR2;
    FUN4(&VAR5->VAR9[0], FUN5(VAR2), &VAR13, VAR7, "", 4);
    FUN6(&VAR2->VAR14[VAR3].VAR15.VAR9, 0x74, &VAR5->VAR9[0], 1);
    FUN4(&VAR5->VAR9[1], FUN5(VAR2), &VAR16, VAR7, "", 4);
    FUN6(&VAR2->VAR14[VAR3].VAR15.VAR9, 0x70, &VAR5->VAR9[1], 1);
    FUN7(&VAR2->VAR14[VAR3].VAR17, VAR5, VAR18);
    FUN8(VAR2->VAR19.VAR20);
}