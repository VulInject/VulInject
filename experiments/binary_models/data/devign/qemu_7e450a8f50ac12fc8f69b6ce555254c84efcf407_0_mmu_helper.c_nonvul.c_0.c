VAR1 FUN1(VAR2 *VAR3, vaddr VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = &VAR6->VAR8;
    hwaddr VAR9;
    int VAR10 = FUN3(VAR8, false);
    if (FUN4(VAR8, &VAR9, VAR4, 2, VAR10) != 0)
    {
        if (FUN4(VAR8, &VAR9, VAR4, 0, VAR10) != 0)
        {
            return -1;
        }
    }
    return VAR9;
}