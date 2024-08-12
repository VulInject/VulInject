VAR1 FUN1(VAR2 *VAR3)
{
    uint64_t VAR4 = FUN2(FUN3(VAR5) - VAR3->VAR6, VAR3->VAR7);
    FUN4("", VAR3->VAR8, VAR4, VAR3->VAR9 ? "" : "", VAR3);
    if (VAR3->VAR9)
        VAR4 |= VAR3->VAR10;
    return VAR4;
}