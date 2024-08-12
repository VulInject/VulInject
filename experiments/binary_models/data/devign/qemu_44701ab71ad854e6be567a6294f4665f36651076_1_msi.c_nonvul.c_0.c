void FUN1(struct VAR1 *VAR2)
{
    uint16_t VAR3;
    uint8_t VAR4;
    if (!FUN2(VAR2))
    {
        return;
    }
    VAR3 = FUN3(VAR2->VAR5 + FUN4(VAR2));
    VAR4 = FUN5(VAR3);
    FUN6(VAR2, VAR6, VAR4);
    VAR2->VAR7 &= ~VAR8;
    FUN7(VAR2, "");
}