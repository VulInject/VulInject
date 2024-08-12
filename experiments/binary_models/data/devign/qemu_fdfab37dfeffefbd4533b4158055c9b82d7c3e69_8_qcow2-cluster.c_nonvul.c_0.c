static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR3; VAR7++)
    {
        uint64_t VAR8 = FUN2(VAR5[VAR6 + VAR7]);
        QCow2ClusterType VAR9 = FUN3(VAR8);
        switch (VAR9)
        {
        case VAR10:
            if (VAR8 & VAR11)
            {
                goto VAR12;
            }
            break;
        case VAR13:
        case VAR14:
        case VAR15:
        case VAR16:
            break;
        default:
            FUN4();
        }
    }
VAR12:
    assert(VAR7 <= VAR3);
    return VAR7;
}