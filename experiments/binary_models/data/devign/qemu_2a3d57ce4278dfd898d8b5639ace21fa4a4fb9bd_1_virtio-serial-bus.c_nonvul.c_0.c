static void FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    struct VAR5 *VAR6;
    struct virtio_console_control VAR7, *VAR8;
    VAR9 *VAR10;
    size_t VAR11;
    VAR8 = VAR3;
    if (VAR4 < sizeof(VAR7))
    {
        return;
    }
    VAR7.VAR12 = FUN2(&VAR8->VAR12);
    VAR7.VAR13 = FUN2(&VAR8->VAR13);
    VAR6 = FUN3(VAR2, FUN4(&VAR8->VAR14));
    if (!VAR6 && VAR7.VAR12 != VAR15)
        return;
    switch (VAR7.VAR12)
    {
    case VAR15:
        if (!VAR7.VAR13)
        {
            FUN5("", VAR2->VAR16.VAR17.VAR18);
            break;
        }
        FUN6(VAR6, &VAR2->VAR19, VAR20) { FUN7(VAR6, VAR21, 1); }
        break;
    case VAR22:
        if (!VAR7.VAR13)
        {
            FUN5("", VAR6->VAR14, VAR2->VAR16.VAR17.VAR18);
            break;
        }
        if (VAR6->VAR23->VAR24)
        {
            FUN7(VAR6, VAR25, 1);
        }
        if (VAR6->VAR18)
        {
            FUN8(&VAR7.VAR12, VAR26);
            FUN8(&VAR7.VAR13, 1);
            VAR11 = sizeof(VAR7) + strlen(VAR6->VAR18) + 1;
            VAR10 = FUN9(VAR11);
            memcpy(VAR10, &VAR7, sizeof(VAR7));
            memcpy(VAR10 + sizeof(VAR7), VAR6->VAR18, strlen(VAR6->VAR18));
            VAR10[VAR11 - 1] = 0;
            FUN10(VAR6, VAR10, VAR11);
            FUN11(VAR10);
        }
        if (VAR6->VAR27)
        {
            FUN7(VAR6, VAR28, 1);
        }
        if (VAR6->VAR23->VAR29)
        {
            VAR6->VAR23->FUN12(VAR6);
        }
        break;
    case VAR28:
        VAR6->VAR30 = VAR7.VAR13;
        if (VAR7.VAR13 && VAR6->VAR23->VAR31)
        {
            VAR6->VAR23->FUN13(VAR6);
        }
        if (!VAR7.VAR13 && VAR6->VAR23->VAR32)
        {
            VAR6->VAR23->FUN14(VAR6);
        }
        break;
    }
}