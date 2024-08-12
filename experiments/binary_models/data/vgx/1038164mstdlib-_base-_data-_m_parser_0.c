enum VAR1 FUN1(VAR2 *VAR3, size_t VAR4, M_bool VAR5, VAR6 *VAR7)
{
enum M_DECIMAL_RETVAL VAR8;
const char           *VAR9 = NULL;

if (VAR3 == NULL || VAR7 == NULL || VAR4 > VAR3->VAR10 || VAR3->VAR10 == 0)
return VAR11;

if (VAR4 == 0)
VAR4 = VAR3->VAR10;

VAR8 = FUN2((const char *)VAR3->VAR12, VAR4, VAR7, &VAR9);

if (VAR8 == VAR13 || VAR8 == VAR11)
return VAR8;

if (VAR8 == VAR14 && VAR5)
return VAR8;

FUN3(VAR3, (VAR15)(((const unsigned char *)VAR9) - VAR3->VAR12));
return VAR8;
}