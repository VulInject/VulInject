bool FUN1(const void *VAR1, size_t VAR2,
const void *VAR3, size_t VAR4)
{

if (VAR1 == NULL || VAR3 == NULL) {
return VAR1 == VAR3;
}
if (VAR2 != VAR4) {
return false;
}
return FUN2(VAR1, VAR3, VAR4) == 0;
}