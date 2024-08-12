static VAR1
FUN1(VAR2 *VAR3, xdrproc_t VAR4, caddr_t VAR5)
{
struct VAR6 *VAR7;
VAR8 *VAR9;

VAR7 = (struct VAR6 *)VAR3->VAR10;
VAR9 = &(VAR7->VAR11);
VAR9->VAR12 = VAR13;
return ((*VAR4)(VAR9, VAR5));
}