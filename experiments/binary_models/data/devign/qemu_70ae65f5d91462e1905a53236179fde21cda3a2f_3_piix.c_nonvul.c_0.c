static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    switch (VAR3 & 3)
    {
    case 0:
        VAR6 = VAR5->VAR7;
        break;
    case 2:
        VAR6 = VAR5->VAR8;
        break;
    default:
        VAR6 = 0xff;
        break;
    }
    FUN2("", VAR3, VAR6);
    return VAR6;
}