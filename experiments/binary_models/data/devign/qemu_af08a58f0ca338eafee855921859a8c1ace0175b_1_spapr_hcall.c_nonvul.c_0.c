static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, target_ulong VAR6, VAR1 *VAR7)
{
    if (!FUN2(VAR3, VAR8))
    {
        return VAR9;
    }
    FUN3(FUN4(VAR3));
    if (FUN2(VAR3, VAR10))
    {
        VAR3->VAR11.VAR12[VAR10] = 0x3;
    }
    else if (!(VAR7[0] & 0x4))
    {
        return VAR13;
    }
    VAR3->VAR11.VAR12[VAR8] = VAR7[0];
    return VAR14;
}