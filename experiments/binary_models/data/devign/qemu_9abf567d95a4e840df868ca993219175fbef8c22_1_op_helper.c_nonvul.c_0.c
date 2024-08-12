VAR1 FUN1(VAR2)(uint32_t VAR3, uint64_t VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR6, VAR3, VAR4);
    if (VAR5 < 0)
    {
        FUN3(VAR6, -VAR5, 4);
        return 0;
    }
    return VAR5;
}