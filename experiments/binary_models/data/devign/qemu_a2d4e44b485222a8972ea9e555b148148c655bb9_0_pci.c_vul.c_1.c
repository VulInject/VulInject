VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, int VAR5)
{
    uint32_t VAR6;
    switch (VAR5)
    {
    case 1:
        VAR6 = VAR3->VAR7[VAR4];
        break;
    case 2:
        VAR6 = FUN2(*(VAR8 *)(VAR3->VAR7 + VAR4));
        break;
    default:
    case 4:
        VAR6 = FUN3(*(VAR1 *)(VAR3->VAR7 + VAR4));
        break;
    }
    return VAR6;
}