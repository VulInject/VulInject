FUN1(bfd_vma VAR1, VAR2 *VAR3, int VAR4, struct VAR5 *VAR6)
{
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR4; VAR7++)
    {
        VAR3[VAR7] = FUN2(VAR1 + VAR7);
    }
    return 0;
}