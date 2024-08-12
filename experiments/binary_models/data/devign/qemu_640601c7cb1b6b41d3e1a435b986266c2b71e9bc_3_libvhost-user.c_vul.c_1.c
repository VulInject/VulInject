FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, unsigned int VAR7, unsigned int VAR8)
{
    struct vring_used_elem VAR9;
    if (FUN2(VAR2->VAR10))
    {
        return;
    }
    FUN3(VAR2, VAR4, VAR6, VAR7);
    VAR8 = (VAR8 + VAR4->VAR11) % VAR4->VAR12.VAR13;
    VAR9.VAR14 = VAR6->VAR15;
    VAR9.VAR7 = VAR7;
    FUN4(VAR2, VAR4, &VAR9, VAR8);
}