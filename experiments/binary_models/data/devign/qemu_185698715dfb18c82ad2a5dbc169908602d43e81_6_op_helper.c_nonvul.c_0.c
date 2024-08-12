VAR1 FUN1(uint32_t VAR2, uint32_t VAR3)
{
    CPU_FloatU VAR4, VAR5;
    uint32_t VAR6 = 0;
    VAR4.VAR7 = VAR2;
    VAR5.VAR7 = VAR3;
    if (FUN2(VAR4.VAR8) || FUN2(VAR5.VAR8))
    {
        FUN3(VAR9);
        VAR6 = 1;
    }
    if (FUN4(VAR4.VAR8) || FUN4(VAR5.VAR8))
    {
        VAR6 = 1;
    }
    return VAR6;
}