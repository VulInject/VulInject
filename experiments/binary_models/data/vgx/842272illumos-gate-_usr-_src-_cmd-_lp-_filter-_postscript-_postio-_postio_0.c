static void	FUN1(void);
static void	FUN2(void);
static void	FUN3(void);
void	FUN4(char *, ...);
static void	FUN5(int VAR1);
static void	FUN6(int VAR2);
static int	FUN7(void);
static int	FUN8(int);
static int	FUN9(void);
static int	FUN10(int, char *, int);
static short	FUN11(char *);
static char	*FUN12(char *, char *);

void		FUN13(int, char *, ...);
int		FUN14(int);
int		FUN15(int);



extern int	FUN16(int);
extern int	FUN17(int);
extern int	FUN18(int);
extern int	FUN19(int);
extern int	FUN20(int, int()); 


extern void	FUN21(void);
extern void	FUN22(int);
extern void	FUN23(int);
extern int	FUN24(void);
extern int	FUN25(void);



int FUN26(int VAR3) { return(0); }


int
main(int VAR4, char *VAR5[])
{
argc = VAR4;
argv = VAR5;
VAR6 = argv[0];		



FUN27();		
FUN28();		

FUN29(VAR7, NULL);   


if (VAR8) {
close(1);
open(VAR8, VAR9);

}

if (FUN18(1)) {
FUN30();
VAR10 = FUN20(1, VAR11);
} else if (FUN16(1) ||
(FUN31(1) == VAR12)) {
FUN30();
VAR10 = FUN20(1, VAR13);
} else if (FUN32(1)) {
FUN33();		
FUN34();		
FUN35();		
FUN36();		
FUN1();			
FUN2();		
} else {
FUN30();
VAR10 = FUN20(1, VAR14);
}


return (VAR10);		
}