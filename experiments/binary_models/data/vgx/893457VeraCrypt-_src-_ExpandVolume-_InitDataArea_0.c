BOOL FUN1 (void *VAR1, char *VAR2,
char *VAR3, int *VAR4,
__int64 *VAR5, PCRYPTO_INFO VAR6)
{
static __int32 VAR7 = 0;

(*VAR5)++;

memcpy (VAR3 + *VAR4, VAR2, VAR8);
(*VAR4) += VAR8;

if (*VAR4 == VAR9 && !FUN2 (VAR1, VAR3, VAR4, VAR5, VAR6))
return VAR10;

if (FUN3 () - VAR7 > 25)
{
if (FUN4 (*VAR5 * VAR8))
return VAR10;

VAR7 = FUN3 ();
}

return VAR11;

}