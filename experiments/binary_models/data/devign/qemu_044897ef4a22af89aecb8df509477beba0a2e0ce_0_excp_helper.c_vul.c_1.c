void FUN1(VAR1 *VAR2, target_ulong VAR3)
{
    uint32_t VAR4 = FUN2(VAR2, VAR3, 0);
    if (VAR4 != 0)
    {
        VAR5 *VAR6 = FUN3(FUN4(VAR2));
        VAR6->VAR7 |= VAR8;
        FUN5(VAR2, VAR4);
    }
}