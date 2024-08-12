static void
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct Sequence	VAR5, VAR6;
struct VAR1	*VAR7 = &VAR5;
struct VAR1	*try = &VAR6;
int	VAR8, VAR9, VAR10;

if (VAR4 == VAR3)
return;

if (VAR4 < VAR3) {
VAR8 = VAR11;
VAR9 = VAR12;
VAR10 = VAR3 - VAR4;
} else {
VAR8 = VAR13;
VAR9 = VAR14;
VAR10 = VAR4 - VAR3;
}


FUN2(VAR7);
FUN3(VAR7, VAR15, VAR4, 0);


FUN2(try);
FUN3(try, VAR8, VAR10, 0);
FUN4(VAR7, try);


FUN2(try);
FUN3(try, VAR9, VAR10, 0);
FUN4(VAR7, try);

FUN5(VAR2, VAR7);
}


typedef struct {
int	VAR16;	
int	VAR17;	
int	VAR18;	
} VAR19;