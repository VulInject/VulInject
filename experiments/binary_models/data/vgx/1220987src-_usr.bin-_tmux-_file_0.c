void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
struct VAR4	*VAR5 = VAR3->VAR6;
size_t			 VAR7 = VAR3->VAR8.VAR9 - VAR10;
struct client_file	 VAR11, *VAR12;

if (VAR7 != sizeof *VAR5)
FUN2("");
VAR11.VAR13 = VAR5->VAR13;
if ((VAR12 = FUN3(VAR1, VAR2, &VAR11)) == NULL)
return;

FUN4("", VAR12->VAR13);
VAR12->VAR14 = VAR5->VAR14;
FUN5(VAR12);
}