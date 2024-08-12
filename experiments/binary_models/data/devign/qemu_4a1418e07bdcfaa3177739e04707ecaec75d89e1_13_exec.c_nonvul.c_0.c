VAR1 FUN1(ram_addr_t VAR2)
{
    VAR3 *VAR4;
    VAR2 = FUN2(VAR2);
    VAR4 = FUN3(sizeof(*VAR4));
    VAR4->VAR5 = FUN4(VAR2);
    VAR4->VAR6 = VAR7;
    VAR4->VAR8 = VAR2;
    VAR4->VAR9 = VAR10;
    VAR10 = VAR4;
    VAR11 = FUN5(VAR11, (VAR7 + VAR2) >> VAR12);
    memset(VAR11 + (VAR7 >> VAR12), 0xff, VAR2 >> VAR12);
    VAR7 += VAR2;
    if (FUN6())
        FUN7(VAR4->VAR5, VAR2);
    return VAR4->VAR6;
}