static int FUN1(VAR1 *VAR2, int VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    BdrvTrackedRequest VAR7;
    CoroutineIOCompletion VAR8 = {
        .VAR9 = FUN2(),
    };
    VAR10 *VAR11;
    FUN3(&VAR7, VAR2, 0, 0, VAR12);
    if (!VAR6 || !VAR6->VAR13)
    {
        VAR8.VAR14 = -VAR15;
        goto VAR16;
    }
    VAR11 = VAR6->FUN4(VAR2, VAR3, VAR4, VAR17, &VAR8);
    if (!VAR11)
    {
        VAR18 *VAR19 = FUN5(VAR18, 1);
        VAR19->VAR20 = FUN6(FUN7(VAR2), VAR21, VAR19);
        VAR19->VAR8 = &VAR8;
        FUN8(VAR19->VAR20);
    }
    FUN9();
VAR16:
    FUN10(&VAR7);
    return VAR8.VAR14;
}