static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint32_t VAR7 = FUN2(&VAR6->VAR8);
    uint64_t VAR9 = 0;
    if (VAR3 < VAR7)
    {
        return FUN3(VAR6, VAR3);
    }
    VAR3 -= VAR7;
    switch (VAR4)
    {
    case 1:
        VAR9 = FUN4(VAR6->VAR10, VAR3);
        break;
    case 2:
        VAR9 = FUN5(VAR6->VAR10, VAR3);
        break;
    case 4:
        VAR9 = FUN6(VAR6->VAR10, VAR3);
        break;
    }
    return VAR9;
}