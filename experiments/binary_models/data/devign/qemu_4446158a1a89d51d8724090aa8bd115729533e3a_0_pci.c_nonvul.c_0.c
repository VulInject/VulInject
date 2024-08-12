void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    uint16_t VAR4;
    FUN2(VAR2->VAR5);
    VAR3 = FUN3(VAR2, VAR6);
    FUN4(VAR3, !=, 0);
    VAR4 = FUN5(VAR2, VAR3 + VAR7);
    FUN6(VAR2, VAR3 + VAR7, VAR4 & ~VAR8);
    if (VAR2->VAR9.VAR3 != VAR2->VAR10.VAR3)
    {
        FUN7(VAR2, VAR2->VAR9);
    }
    FUN7(VAR2, VAR2->VAR10);
    VAR2->VAR5 = 0;
    VAR2->VAR11 = 0;
    VAR2->VAR12 = 0;
}