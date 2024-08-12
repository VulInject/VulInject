FUN1 (mp_srcptr VAR1, mp_size_t VAR2)
{
while (VAR2 > 0 && VAR1[VAR2-1] == 0)
--VAR2;
return VAR2;
}