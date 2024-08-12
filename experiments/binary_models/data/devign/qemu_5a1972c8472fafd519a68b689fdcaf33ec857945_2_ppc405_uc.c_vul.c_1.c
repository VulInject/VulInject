static void FUN1(void *VAR1, int VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    VAR5 = VAR1;
    switch (VAR2)
    {
    case VAR6:
        break;
    case VAR7:
    case VAR8:
        VAR5->VAR9[VAR2 - VAR7] &= ~VAR3;
        break;
    }
}