static void FUN1(VAR1 *VAR2, int VAR3, intptr_t VAR4, intptr_t VAR5)
{
    VAR4 += VAR5;
    switch (VAR3)
    {
    case VAR6:
        VAR4 -= (VAR7)VAR2;
        if (VAR4 != (VAR8)VAR4)
        {
            FUN2();
        }
        *(VAR9 *)VAR2 = VAR4;
        break;
    case VAR10:
        VAR4 -= (VAR7)VAR2;
        if (VAR4 != (VAR11)VAR4)
        {
            FUN2();
        }
        *(VAR1 *)VAR2 = VAR4;
        break;
    default:
        FUN2();
    }
}