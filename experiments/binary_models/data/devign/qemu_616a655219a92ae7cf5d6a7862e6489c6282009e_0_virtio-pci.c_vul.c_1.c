static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint32_t VAR7 = FUN2(&VAR6->VAR8);
    VAR9 *VAR10 = FUN3(&VAR6->VAR11);
    if (VAR2 < VAR7)
    {
        FUN4(VAR6, VAR2, VAR3);
        return;
    }
    VAR2 -= VAR7;
    switch (VAR4)
    {
    case 1:
        FUN5(VAR10, VAR2, VAR3);
        break;
    case 2:
        if (FUN6())
        {
            VAR3 = FUN7(VAR3);
        }
        FUN8(VAR10, VAR2, VAR3);
        break;
    case 4:
        if (FUN6())
        {
            VAR3 = FUN9(VAR3);
        }
        FUN10(VAR10, VAR2, VAR3);
        break;
    }
}