static void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = (struct VAR3 *)VAR2;
    struct io_event VAR5;
    int VAR6;
    if (VAR4->VAR6 != -VAR7)
        return;
    VAR6 = FUN2(VAR4->VAR8->VAR8, &VAR4->VAR9, &VAR5);
    if (VAR6 == 0)
    {
        VAR4->VAR6 = -VAR10;
        return;
    }
    while (VAR4->VAR6 == -VAR7)
    {
        FUN3(&VAR4->VAR8->VAR11);
    }
}