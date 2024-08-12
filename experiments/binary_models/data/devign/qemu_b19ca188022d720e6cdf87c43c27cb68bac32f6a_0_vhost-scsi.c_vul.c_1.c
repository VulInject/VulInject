static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR3 *VAR9 = NULL;
    int VAR10 = -1;
    int VAR11;
    if (!VAR6->VAR12.VAR13)
    {
        FUN4(VAR4, "");
        return;
    }
    if (VAR6->VAR12.VAR10)
    {
        VAR10 = FUN5(VAR14, VAR6->VAR12.VAR10);
        if (VAR10 == -1)
        {
            FUN4(VAR4, "");
            return;
        }
    }
    else
    {
        VAR10 = open("", VAR15);
        if (VAR10 < 0)
        {
            FUN4(VAR4, "", strerror(VAR16));
            return;
        }
    }
    FUN6(VAR2, &VAR9, VAR17, VAR17, VAR17);
    if (VAR9 != NULL)
    {
        FUN7(VAR4, VAR9);
        return;
    }
    VAR8->VAR2.VAR18 = VAR19 + VAR6->VAR12.VAR20;
    VAR8->VAR2.VAR21 = FUN8(struct VAR22, VAR8->VAR2.VAR18);
    VAR8->VAR2.VAR23 = 0;
    VAR8->VAR2.VAR24 = 0;
    VAR11 = FUN9(&VAR8->VAR2, (void *)(VAR25)VAR10, VAR26, true);
    if (VAR11 < 0)
    {
        FUN4(VAR4, "", strerror(-VAR11));
        return;
    }
    FUN4(&VAR8->VAR27, "");
    FUN10(VAR8->VAR27);