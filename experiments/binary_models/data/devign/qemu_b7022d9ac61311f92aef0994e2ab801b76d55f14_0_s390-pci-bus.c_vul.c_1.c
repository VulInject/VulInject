static void FUN1(uint8_t VAR1, uint16_t VAR2, uint32_t VAR3, uint32_t VAR4, uint64_t VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = FUN2(sizeof(VAR7));
    VAR9 *VAR10 = FUN3(FUN4(VAR11, NULL));
    if (!VAR10)
    {
        return;
    }
    VAR8->VAR3 = VAR3;
    VAR8->VAR4 = VAR4;
    VAR8->VAR1 = VAR1;
    VAR8->VAR2 = VAR2;
    VAR8->VAR5 = VAR5;
    VAR8->VAR6 = VAR6;
    FUN5(&VAR10->VAR12, VAR8, VAR13);
    FUN6(0);
}