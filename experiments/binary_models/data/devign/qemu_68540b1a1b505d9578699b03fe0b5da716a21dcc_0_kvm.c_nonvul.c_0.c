static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6 = 0;
    uint16_t VAR7;
    VAR7 = FUN2(&VAR2->VAR8, VAR5) & VAR9;
    switch (VAR7)
    {
    case VAR10:
        FUN3(VAR2, VAR4);
        break;
    case VAR11:
        VAR6 = FUN4(VAR2, VAR4);
        break;
    case VAR12:
        VAR6 = FUN5(VAR2, VAR4);
        break;
    default:
        FUN6("", VAR7);
        FUN7(VAR2, VAR13);
        break;
    }
    return VAR6;
}