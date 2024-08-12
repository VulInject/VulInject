static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    VAR7 *VAR8 = FUN2(&VAR6->VAR9);
    uint32_t VAR10 = FUN3(&VAR6->VAR11);
    uint64_t VAR12 = 0;
    if (VAR3 < VAR10)
    {
        return FUN4(VAR6, VAR3);
    }
    VAR3 -= VAR10;
    switch (VAR4)
    {
    case 1:
        VAR12 = FUN5(VAR8, VAR3);
        break;
    case 2:
        VAR12 = FUN6(VAR8, VAR3);
        if (FUN7())
        {
            VAR12 = FUN8(VAR12);
        }
        break;
    case 4:
        VAR12 = FUN9(VAR8, VAR3);
        if (FUN7())
        {
            VAR12 = FUN10(VAR12);
        }
        break;
    }
    return VAR12;
}