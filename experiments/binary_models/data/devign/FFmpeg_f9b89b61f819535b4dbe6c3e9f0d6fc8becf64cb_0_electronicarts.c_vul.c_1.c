static int FUN1(VAR1 *VAR2)
{
    switch (FUN2(&VAR2->VAR3[0]))
    {
    case VAR4:
    case VAR5:
    case VAR6:
    case VAR7:
    case VAR8:
    case VAR9:
    case VAR10:
    case VAR11:
    case VAR12:
        break;
    default:
        return 0;
    }
    if (FUN2(&VAR2->VAR3[4]) > 0xfffff && FUN3(&VAR2->VAR3[4]) > 0xfffff)
        return 0;
    return VAR13;
}