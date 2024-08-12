VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(&VAR3->VAR9.VAR10);
    if (!VAR6)
    {
        return 0;
    }
    VAR8 = FUN3(VAR6);
    return VAR8->VAR11->FUN4(VAR8, VAR4);
}