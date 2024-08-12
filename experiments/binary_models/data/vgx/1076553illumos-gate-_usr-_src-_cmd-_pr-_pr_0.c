static	char	*FUN1(char *);
static	int	FUN2(char *);
static	void	FUN3();
static	void	FUN4();
static	void	FUN5();
static	void	FUN6();
static	void	FUN7(int);
static	int	FUN8(wchar_t **, int, VAR1);
static	VAR2	FUN9(int);
static	int	FUN10(wchar_t);
static	void	FUN11();
static	void	FUN12(int);
static	VAR3	*FUN13(char *, VAR4 *);
static	void	FUN14(char *);
static	void	FUN15();
static	void	FUN16(int);
static VAR2	FUN17(VAR3 *, int *);
static VAR5	FUN18(wchar_t *, VAR5, VAR3 *);


int
main(int argc, char **argv)
{
FILS	VAR6[VAR7];
int	VAR8 = 0;



(void) FUN19(VAR9, "");

(void) FUN20(VAR10);

VAR11 = VAR12;
VAR13 = VAR6;
for (argc = FUN21(argc, argv); argc > 0; --argc, ++argv) {
if (VAR14 == '') {
if (VAR15 >= VAR7 - 1) FUN14("");
if (FUN13(*argv, &VAR13[VAR15++]) == NULL)
++VAR8;	
} else {
if (FUN2(*argv))
(void) fclose(VAR13->VAR16);
++VAR8;
}
}
if (!VAR8)	
(void) FUN2(VAR17);	

if (VAR18) {
FUN15();	
FUN22(VAR19);
}

return (VAR19);
}