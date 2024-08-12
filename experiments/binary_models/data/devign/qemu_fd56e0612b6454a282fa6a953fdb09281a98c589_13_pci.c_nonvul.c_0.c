static VAR1 FUN1(VAR2 *VAR3)
{
    uint8_t VAR4;
    uint16_t VAR5;
    switch (VAR3->VAR6)
    {
    case VAR7:
        VAR5 = FUN2(VAR3->VAR8);
        break;
    case VAR9:
        VAR4 = FUN3(VAR3->VAR8);
        VAR5 = FUN4(VAR4, 0);
        break;
    default:
        FUN5("", VAR3->VAR6);
        FUN6(1);
        break;
    }
    return VAR5;
}