VAR1 *FUN1(VAR2 *VAR3, uint16_t VAR4)
{
    VAR1 *VAR5;
    uint8_t VAR6;
    switch (VAR4)
    {
    case 16:
    case 64:
        VAR6 = 6;
        break;
    case 128:
    case 256:
        VAR6 = 8;
        break;
    default:
        assert(!"");
        VAR4 = 64;
        VAR6 = 6;
    }
    VAR5 = (VAR1 *)FUN2(sizeof(*VAR5) + VAR4 * 2);
    VAR5->VAR7 = VAR4;
    VAR5->VAR6 = VAR6;
    VAR5->VAR8 = 1;
    FUN3("", VAR5, VAR4);
    FUN4(VAR3, 0, &VAR9, VAR5);
    return VAR5;
}