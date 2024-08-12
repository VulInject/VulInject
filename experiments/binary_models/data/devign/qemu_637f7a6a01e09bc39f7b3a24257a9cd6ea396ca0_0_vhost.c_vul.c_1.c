static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5, VAR7);
    int VAR8;
    FUN3(VAR2, VAR4, false);
    for (VAR8 = 0; VAR8 < VAR6->VAR9; ++VAR8)
    {
        if (VAR6->VAR10[VAR8].VAR11 == VAR4->VAR11)
        {
            --VAR6->VAR9;
            memmove(&VAR6->VAR10[VAR8], &VAR6->VAR10[VAR8 + 1], VAR6->VAR9 - VAR8);
            break;
        }
    }
}