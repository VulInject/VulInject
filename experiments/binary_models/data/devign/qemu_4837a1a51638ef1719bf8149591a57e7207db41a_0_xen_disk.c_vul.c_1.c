static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, RING_IDX VAR4)
{
    switch (VAR2->VAR5)
    {
    case VAR6:
        memcpy(&VAR3->VAR7, FUN2(&VAR2->VAR8.VAR9, VAR4), sizeof(VAR3->VAR7));
        break;
    case VAR10:
        FUN3(&VAR3->VAR7, FUN2(&VAR2->VAR8.VAR11, VAR4));
        break;
    case VAR12:
        FUN4(&VAR3->VAR7, FUN2(&VAR2->VAR8.VAR13, VAR4));
        break;
    }
    return 0;