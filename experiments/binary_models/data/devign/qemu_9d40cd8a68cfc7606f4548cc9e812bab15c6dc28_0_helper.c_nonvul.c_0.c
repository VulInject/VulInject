static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint32_t VAR5 = FUN2(VAR4);
    if ((VAR4->VAR6[13] & 4) && (VAR4->VAR7.VAR8[VAR4->VAR7.VAR9] & VAR10))
    {
        VAR4->VAR6[13] -= 4;
        VAR5 |= VAR11;
    }
    FUN3(VAR4, VAR5);
    FUN3(VAR4, VAR4->VAR6[15]);
    FUN3(VAR4, VAR4->VAR6[14]);
    FUN3(VAR4, VAR4->VAR6[12]);
    FUN3(VAR4, VAR4->VAR6[3]);
    FUN3(VAR4, VAR4->VAR6[2]);
    FUN3(VAR4, VAR4->VAR6[1]);
    FUN3(VAR4, VAR4->VAR6[0]);
}