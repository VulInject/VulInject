static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    virtio_input_event VAR9;
    VAR10 *VAR11;
    int VAR12;
    for (;;)
    {
        VAR11 = FUN4(VAR8->VAR13, sizeof(VAR10));
        if (!VAR11)
        {
            break;
        }
        memset(&VAR9, 0, sizeof(VAR9));
        VAR12 = FUN5(VAR11->VAR14, VAR11->VAR15, 0, &VAR9, sizeof(VAR9));
        if (VAR6->VAR16)
        {
            VAR6->FUN6(VAR8, &VAR9);
        }
        FUN7(VAR8->VAR13, VAR11, VAR12);
        FUN8(VAR11);
    }
    FUN9(VAR2, VAR8->VAR13);
}