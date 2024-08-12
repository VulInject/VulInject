static int FUN1(int VAR1, VAR2 *VAR3, QCow2ClusterType VAR4)
{
    int VAR5;
    assert(VAR4 == VAR6 || VAR4 == VAR7);
    for (VAR5 = 0; VAR5 < VAR1; VAR5++)
    {
        uint64_t VAR8 = FUN2(VAR3[VAR5]);
        QCow2ClusterType VAR9 = FUN3(VAR8);
        if (VAR9 != VAR4)
        {
            break;
        }
    }
    return VAR5;
}