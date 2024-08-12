int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    uint8_t VAR6;
    if (!VAR2->VAR4.VAR7)
    {
        fprintf(VAR8, "");
        return -1;
    }
    VAR5 = FUN2(VAR2, VAR2->VAR4.VAR9 + VAR2->VAR4.VAR10, &VAR6, 1);
    if (VAR5)
    {
        return VAR5;
    }
    if (VAR6 != 0)
    {
        return 1;
    }
    VAR5 = FUN3(VAR2, VAR2->VAR4.VAR9 + VAR2->VAR4.VAR10 + 8, &VAR4[8], 8);
    if (VAR5)
    {
        return VAR5;
    }
    FUN4();
    VAR5 = FUN3(VAR2, VAR2->VAR4.VAR9 + VAR2->VAR4.VAR10, VAR4, 8);
    if (VAR5)
    {
        return VAR5;
    }
    VAR2->VAR4.VAR10 = (VAR2->VAR4.VAR10 + 16) % VAR2->VAR4.VAR7;
    if (VAR2->VAR11 & 1)
    {
        FUN5(FUN6(VAR2));
    }
    return 0;
}