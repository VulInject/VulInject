int FUN1(VAR1 *VAR2, VAR1 *VAR3, xpparam_t const *VAR4, xdemitconf_t const *VAR5, VAR6 *VAR7)
{
mmfile_t VAR8 = *VAR2;
mmfile_t VAR9 = *VAR3;

if (VAR2->VAR10 > VAR11 || VAR3->VAR10 > VAR11)
return -1;

if (!VAR5->VAR12 && !(VAR5->VAR13 & VAR14))
FUN2(&VAR8, &VAR9);

return FUN3(&VAR8, &VAR9, VAR4, VAR5, VAR7);
}