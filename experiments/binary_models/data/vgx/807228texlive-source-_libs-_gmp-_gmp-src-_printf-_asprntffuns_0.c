int
FUN1 (struct VAR1 *VAR2, const char *VAR3, size_t VAR4)
{
FUN2 (VAR2, VAR4);
memcpy (VAR2->VAR5 + VAR2->VAR6, VAR3, VAR4);
VAR2->VAR6 += VAR4;
return VAR4;
}