void		FUN1(int, char *, ...);
int		FUN2(int);
int		FUN3(int);



extern int	FUN4(int);
extern int	FUN5(int);
extern int	FUN6(int);
extern int	FUN7(int);
extern int	FUN8(int, int()); 


extern void	FUN9(void);
extern void	FUN10(int);
extern void	FUN11(int);
extern int	FUN12(void);
extern int	FUN13(void);



int FUN14(int VAR1) { return(0); }


int
main(int VAR2, char *VAR3[])
{
argc = VAR2;
argv = VAR3;
VAR4 = argv[0];		



FUN15();		
FUN16();		

FUN17(VAR5, NULL);   


if (VAR6) {
close(1);
open(VAR6, VAR7);

}

if (FUN6(1)) {
FUN18();
VAR8 = FUN8(1, VAR9);
} else if (FUN4(1) ||
(FUN19(1) == VAR10)) {
FUN18();
VAR8 = FUN8(1, VAR11);
} else if (FUN20(1)) {
FUN21();		
FUN22();		
FUN23();		
FUN24();		
FUN25();			
FUN26();		
} else {
FUN18();
VAR8 = FUN8(1, VAR12);
}


return (VAR8);		
}