static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3, VAR2);
    while (FUN3(&VAR4->VAR2))
    {
        struct io_event VAR5[VAR6];
        struct timespec VAR7 = {0};
        int VAR8, VAR9;
        do
        {
            VAR8 = FUN4(VAR4->VAR10, VAR6, VAR6, VAR5, &VAR7);
        } while (VAR8 == -VAR11);
        for (VAR9 = 0; VAR9 < VAR8; VAR9++)
        {
            struct VAR12 *VAR12 = VAR5[VAR9].VAR13;
            struct VAR14 *VAR15 = FUN2(VAR12, struct VAR14, VAR12);
            VAR15->VAR16 = FUN5(&VAR5[VAR9]);
            FUN6(VAR4, VAR15);
        }
    }
}