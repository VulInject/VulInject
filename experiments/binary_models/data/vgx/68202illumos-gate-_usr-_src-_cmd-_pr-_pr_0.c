static	VAR1	FUN1(int);
static	int	FUN2(wchar_t);
static	void	FUN3();
static	void	FUN4(int);
static	VAR2	*FUN5(char *, VAR3 *);
static	void	FUN6(char *);
static	void	FUN7();
static	void	FUN8(int);
static VAR1	FUN9(VAR2 *, int *);
static VAR4	FUN10(wchar_t *, VAR4, VAR2 *);


int
main(int argc, char **argv)
{
FILS	VAR5[VAR6];
int	VAR7 = 0;



(void) FUN11(VAR8, "");

(void) FUN12(VAR9);

VAR10 = VAR11;
VAR12 = VAR5;
for (argc = FUN13(argc, argv); argc > 0; --argc, ++argv) {
if (VAR13 == '') {
if (VAR14 >= VAR6 - 1) FUN6("");
if (FUN5(*argv, &VAR12[VAR14++]) == NULL)
++VAR7;	
} else {
if (FUN14(*argv))
(void) fclose(VAR12->VAR15);
++VAR7;
}
}
if (!VAR7)	
(void) FUN14(VAR16);	

if (VAR17) {
FUN7();	
FUN15(VAR18);
}

return (VAR18);
}