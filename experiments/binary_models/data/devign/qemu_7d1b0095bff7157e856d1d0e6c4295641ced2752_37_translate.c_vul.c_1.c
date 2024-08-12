static int FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, uint32_t VAR5)
{
    TCGv VAR6;
    VAR6 = FUN2();
    FUN3(VAR6, VAR5);
    return FUN4(VAR2, VAR3, VAR4, VAR6);
}