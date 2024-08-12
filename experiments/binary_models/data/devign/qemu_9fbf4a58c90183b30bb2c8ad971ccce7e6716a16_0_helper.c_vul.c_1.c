VAR1 FUN1(VAR2 *VAR3, vaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    hwaddr VAR7;
    int VAR8;
    if (FUN3(&VAR6->VAR9, &VAR7, &VAR8, VAR4, 0, VAR10) != 0)
    {
        return -1;
    }
    return VAR7;
}