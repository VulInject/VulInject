static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    uint32_t VAR6;
    VAR4 += VAR5;
    switch (VAR3)
    {
    case VAR7:
        if (VAR4 != (VAR8)VAR4)
        {
            FUN2();
        }
        *(VAR8 *)VAR2 = VAR4;
        break;
    case VAR9:
        VAR4 -= (VAR10)VAR2;
        if (!FUN3(VAR4 >> 2, 16))
        {
            FUN2();
        }
        VAR6 = *(VAR8 *)VAR2;
        VAR6 &= ~FUN4(-1);
        VAR6 |= FUN4(VAR4);
        *(VAR8 *)VAR2 = VAR6;
        break;
    case VAR11:
        VAR4 -= (VAR10)VAR2;
        if (!FUN3(VAR4 >> 2, 19))
        {
            FUN2();
        }
        VAR6 = *(VAR8 *)VAR2;
        VAR6 &= ~FUN5(-1);
        VAR6 |= FUN5(VAR4);
        *(VAR8 *)VAR2 = VAR6;
        break;
    default:
        FUN2();
    }
}