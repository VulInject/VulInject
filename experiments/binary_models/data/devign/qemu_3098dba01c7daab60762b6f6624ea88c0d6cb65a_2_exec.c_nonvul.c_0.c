static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3;
    if (VAR4 != VAR7)
        return -VAR8;
    FUN2(VAR2, &VAR6->VAR9);
    FUN2(VAR2, &VAR6->VAR10);
    VAR6->VAR10 &= ~0x01;
    FUN3(VAR6, 1);
    return 0;
}