static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    while (1)
    {
        struct io_event VAR4[VAR5];
        uint64_t VAR6;
        ssize_t VAR7;
        struct timespec VAR8 = {0};
        int VAR9, VAR10;
        do
        {
            VAR7 = read(VAR3->VAR11, &VAR6, sizeof(VAR6));
        } while (VAR7 == -1 && VAR12 == VAR13);
        if (VAR7 == -1 && VAR12 == VAR14)
            break;
        if (VAR7 != 8)
            break;
        do
        {
            VAR9 = FUN2(VAR3->VAR15, VAR6, VAR5, VAR4, &VAR8);
        } while (VAR9 == -VAR13);
        for (VAR10 = 0; VAR10 < VAR9; VAR10++)
        {
            struct VAR16 *VAR16 = VAR4[VAR10].VAR17;
            struct VAR18 *VAR19 = FUN3(VAR16, struct VAR18, VAR16);
            VAR19->VAR7 = FUN4(&VAR4[VAR10]);
            FUN5(VAR3, VAR19);
        }
    }
}