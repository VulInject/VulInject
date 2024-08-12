static void FUN1(struct VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct target_sigaltstack VAR7;
    int VAR8;
    VAR9 *VAR10;
    memset(VAR2, 0, FUN2(struct VAR1, VAR11));
    memset(&VAR7, 0, sizeof(VAR7));
    FUN3(VAR12.VAR13, &VAR7.VAR13);
    FUN3(VAR12.VAR14, &VAR7.VAR14);
    FUN3(FUN4(FUN5(VAR6)), &VAR7.VAR15);
    memcpy(&VAR2->VAR16, &VAR7, sizeof(VAR7));
    FUN6(&VAR2->VAR11, VAR6, VAR4->VAR17[0]);
    VAR10 = VAR2->VAR18;
    if (FUN7(VAR6, VAR19))
    {
        VAR10 = FUN8(VAR10, VAR6);
    }
    FUN3(0, VAR10);
    for (VAR8 = 0; VAR8 < VAR20; VAR8++)
    {
        FUN3(VAR4->VAR17[VAR8], &VAR2->VAR21.VAR17[VAR8]);
    }
}