static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5;
    unsigned int VAR6;
    VAR6 = VAR3 / 32;
    VAR2->VAR7[VAR6] &= ~(1U << (VAR3 % 32));
    VAR5 = FUN2(VAR2, VAR3);
    assert(VAR5);
    FUN3(VAR5->VAR8, FUN4(VAR5->VAR2));
    FUN5(VAR2, VAR5->VAR9, VAR10, 1);
}