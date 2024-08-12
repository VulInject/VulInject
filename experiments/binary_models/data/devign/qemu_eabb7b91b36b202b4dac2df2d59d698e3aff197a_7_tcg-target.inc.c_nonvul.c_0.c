static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    uint32_t VAR6;
    FUN2(VAR5 == 0);
    VAR4 = FUN3((VAR1 *)VAR4, VAR2);
    switch (VAR3)
    {
    case VAR7:
        if (!FUN4(VAR4 >> 2, 16))
        {
            FUN5();
        }
        VAR6 = *VAR2;
        VAR6 &= ~FUN6(-1);
        VAR6 |= FUN6(VAR4);
        *VAR2 = VAR6;
        break;
    case VAR8:
        if (!FUN4(VAR4 >> 2, 19))
        {
            FUN5();
        }
        VAR6 = *VAR2;
        VAR6 &= ~FUN7(-1);
        VAR6 |= FUN7(VAR4);
        *VAR2 = VAR6;
        break;
    default:
        FUN5();
    }
}