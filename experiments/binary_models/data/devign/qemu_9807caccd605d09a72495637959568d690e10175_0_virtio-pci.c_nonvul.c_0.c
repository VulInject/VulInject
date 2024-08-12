static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = FUN2(&VAR6->VAR8);
    if (VAR2 < VAR7)
    {
        FUN3(VAR6, VAR2, VAR3);
        return;
    }
    VAR2 -= VAR7;
    switch (VAR4)
    {
    case 1:
        FUN4(VAR6->VAR9, VAR2, VAR3);
        break;
    case 2:
        FUN5(VAR6->VAR9, VAR2, VAR3);
        break;
    case 4:
        FUN6(VAR6->VAR9, VAR2, VAR3);
        break;
    }
}