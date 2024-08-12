void FUN1(VAR1 *VAR2, const VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6)
{
    VRingUsedElem VAR7;
    FUN2(VAR2, VAR4, VAR5, VAR6);
    FUN3(VAR2, VAR4, VAR5);
    VAR6 = (VAR6 + VAR2->VAR8) % VAR2->VAR9.VAR10;
    VAR7.VAR11 = VAR4->VAR12;
    VAR7.VAR5 = VAR5;
    FUN4(VAR2, &VAR7, VAR6)