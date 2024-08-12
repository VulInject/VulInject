void FUN1(VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4, uint32_t VAR5)
{
    if (VAR2->VAR5)
    {
        FUN2("");
        return;
    }
    VAR2->VAR4 = VAR4;
    VAR2->VAR3 = VAR3;
    VAR2->VAR5 = VAR5;
    VAR2->VAR6 = FUN3(VAR2->VAR7, VAR2->VAR3, VAR2->VAR4, VAR2->VAR5, &VAR2->VAR8, VAR2->VAR9);
    FUN4(&VAR2->VAR10, (VAR11)VAR2->VAR5 << VAR2->VAR3);
    FUN5(&VAR2->VAR12, VAR2->VAR4, &VAR2->VAR10);
}