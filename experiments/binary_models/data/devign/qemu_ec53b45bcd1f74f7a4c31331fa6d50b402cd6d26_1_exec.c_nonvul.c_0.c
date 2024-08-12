int FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR6, &VAR2->VAR7, VAR8)
    {
        if (VAR6->VAR3 == VAR3 && VAR6->VAR4 == VAR4)
        {
            FUN3(VAR2, VAR6);
            return 0;
        }
    }
    return -VAR9;
}