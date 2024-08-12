static void FUN1(void *VAR1, int VAR2, uint64_t VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR9->VAR1;
    *VAR6->VAR10 = VAR4 / VAR11;
    switch (VAR2)
    {
    case VAR12:
        VAR3 |= FUN2(VAR8, VAR6->VAR13);
        VAR6->VAR14 = VAR15 | VAR16 | VAR3;
        *VAR6->VAR17 = VAR6->VAR9->VAR17->VAR9;
        break;
    case VAR18:
        VAR6->VAR14 = VAR19;
        break;
    case VAR20:
    case VAR21:
        VAR6->VAR14 = 0;
        break;
    default:
        assert(VAR2 < 0);
        VAR6->VAR14 = VAR2;
        break;
    }
    if (VAR6->VAR22)
    {
        FUN3(VAR6->VAR22, NULL);
    }
}