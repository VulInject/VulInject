static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = VAR2;
    uint32_t VAR6;
    VAR3 &= 0x0f;
    switch (VAR3)
    {
    case 0x00:
        VAR6 = FUN2(&VAR5->VAR7, VAR5->VAR7.VAR8.VAR9);
        break;
    case 0x02:
        VAR6 = VAR5->VAR7.VAR10.VAR11.VAR12;
        break;
    case 0x04:
        VAR6 = VAR5->VAR7.VAR10.VAR13.VAR13;
        break;
    default:
        VAR6 = 0;
        break;
    }
    FUN3("", VAR3, VAR6);
    return VAR6;
}