int
main(int argc, char *argv[])
{
struct kinfo_proc	 VAR1;
struct VAR2		*VAR3;
char			*VAR4 = NULL;
uid_t			 VAR5;

if (argc > 1) {
argv ++;
if ((VAR4 = strdup(argv[0])) == NULL)
FUN1(1, "");
}

if ((VAR3 = FUN2(VAR6)) == NULL)
FUN1(1, ""%VAR7\"", VAR6);

VAR5 = FUN3();

if (FUN4(VAR3->VAR8, -1, -1) == -1)
FUN1(1, "");
FUN5(VAR3->VAR8, VAR5, VAR5, "");


if (FUN6())
FUN7(1, "");

if (FUN8(&VAR1, FUN9()) == -1)
FUN1(1, "");

if (!(VAR1.VAR9 & VAR10))
FUN7(1, "");
if (VAR1.VAR9 & VAR11)
FUN7(1, "");

if (VAR4 != NULL)
if (execv(VAR4, argv) == -1)
FUN1(1, "", VAR4);
free(VAR4);

FUN10(0);
}