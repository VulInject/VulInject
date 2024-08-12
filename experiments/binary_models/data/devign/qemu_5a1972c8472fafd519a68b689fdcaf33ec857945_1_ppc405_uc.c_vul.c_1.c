static VAR1 FUN1(void *VAR2, int VAR3)
{
    VAR4 *VAR5;
    uint32_t VAR6;
    VAR5 = VAR2;
    switch (VAR3)
    {
    case VAR7:
        VAR6 = VAR5->VAR8;
        break;
    case VAR9:
    case VAR10:
        VAR6 = VAR5->VAR11[VAR3 - VAR9];
        break;
    default:
        VAR6 = 0;
        break;
    }
    return VAR6;
}