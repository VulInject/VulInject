int FUN1(uint64_t VAR1, uint64_t VAR2, uint32_t VAR3)
{
    int VAR4 = FUN2(VAR5.VAR6);
    struct VAR7 *VAR8;
    if (VAR3 != VAR9)
    {
        if (VAR4 >= VAR10)
        {
            return -VAR11;
        }
        VAR8 = &VAR5.VAR8[VAR4++];
        VAR8->VAR1 = FUN3(VAR1);
        VAR8->VAR2 = FUN3(VAR2);
        VAR8->VAR3 = FUN4(VAR3);
        VAR5.VAR6 = FUN4(VAR4);
    }
    VAR12 = FUN5(VAR12, sizeof(struct VAR7) * (VAR13 + 1));
    VAR12[VAR13].VAR1 = FUN3(VAR1);
    VAR12[VAR13].VAR2 = FUN3(VAR2);
    VAR12[VAR13].VAR3 = FUN4(VAR3);
    VAR13++;
    return VAR13;
}