int
FUN1(uintptr_t VAR1, uint_t VAR2, int argc, const VAR3 *argv)
{
struct VAR4	*VAR4;
void		**VAR5;
int		VAR6;

if (!(VAR2 & VAR7)) {
return (VAR8);
}

VAR4 = FUN2(VAR1, &VAR5, &VAR6);
if (VAR4 == NULL)
return (VAR8);

FUN3(VAR4, VAR5, VAR6);
FUN4(VAR4, VAR5, VAR6);
return (VAR9);
}