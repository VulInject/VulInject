static inline void *FUN1(VAR1 *VAR2, addr_t VAR3, size_t VAR4,
int VAR5, int VAR6)
{
addr_t VAR7;

VAR7 = FUN2(*VAR2, VAR5);
if (VAR6 && FUN3(VAR7, VAR4)) {
VAR7 = FUN2(VAR7, 4096);
VAR7 = FUN2(VAR7, VAR5);
}
if (VAR7 + VAR4 > VAR3)
return FUN4(-VAR8);
*VAR2 = VAR7 + VAR4;
return (void *) VAR7;
}