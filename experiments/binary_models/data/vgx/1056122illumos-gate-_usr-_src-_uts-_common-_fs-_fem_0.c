static int
FUN1(VAR1 *VAR2)
{
fsemarg_t	VAR3;
struct VAR4	*VAR5;
void		(*VAR6)();
void		*VAR7;

FUN2(VAR2->VAR8);

if ((VAR5 = FUN3(VAR2->VAR9)) == NULL) {
VAR6 = (void (*)()) VAR2->VAR10->VAR11;
FUN4(VAR2->VAR9);
(*VAR6)(VAR2);
} else {
FUN5(VAR5);
FUN4(VAR2->VAR9);
VAR3.VAR12.VAR2 = VAR2;
VAR3.VAR13 = VAR5->VAR14 + VAR5->VAR15;
FUN6(&VAR3, &VAR6, void, &VAR7, VAR11,
VAR16);
(*VAR6)(VAR7);
FUN7(VAR5);
}
return (0);
}