int
FUN1(int VAR1, int VAR2, int VAR3, int VAR4, int (*VAR5)(int))
{
struct Sequence	VAR6, VAR7;	
struct Sequence	VAR8;	
struct VAR9	*VAR10 = &VAR6;	
struct VAR9	*try = &VAR7;	

VAR3 %= VAR11;
VAR4 %= VAR12;

FUN2(VAR10);


FUN3(VAR10, VAR13, VAR3, VAR4);

if (VAR3 == VAR11-1 && VAR4 == VAR12-1) {


return (FUN4(VAR10, VAR5));
}
if ((VAR14 = (0 <= VAR1 && 0 <= VAR2)) != 0) {
VAR1 %= VAR11;
VAR2 %= VAR12;


FUN2(try);
FUN5(try, VAR1, VAR3);
FUN6(try, VAR2, VAR4);
FUN7(VAR10, try);
}
if (VAR4 < VAR2 || !VAR14) {
FUN2(&VAR8);
FUN6(&VAR8, 0, VAR4);
if (VAR8.VAR15 < VAR16) {

if (VAR3 < VAR1 || !VAR14) {
FUN2(try);
FUN3(try, VAR17, 1, 0);
FUN5(try, 0, VAR3);
FUN8(try, &VAR8);
FUN7(VAR10, try);
}


if (VAR3 > VAR1 || !VAR14) {
FUN2(try);
FUN3(try, VAR18, 1, 0);
FUN5(try, VAR11 - 1, VAR3);
FUN8(try, &VAR8);
FUN7(VAR10, try);
}
}
}

return (FUN4(VAR10, VAR5));
}