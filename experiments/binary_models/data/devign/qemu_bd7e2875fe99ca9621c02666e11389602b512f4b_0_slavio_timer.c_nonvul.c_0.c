static void FUN1(VAR1 *VAR2)
{
    uint64_t VAR3, VAR4;
    if (VAR2->VAR4 == 0)
        VAR4 = VAR5;
    else
        VAR4 = VAR2->VAR4;
    VAR3 = VAR4 - FUN2(FUN3(VAR2->VAR6));
    FUN4("" VAR7 "", VAR2->VAR4, VAR2->VAR8, VAR2->VAR3);
    VAR2->VAR3 = VAR3 & VAR9;
    VAR2->VAR8 = VAR3 >> 32;
}