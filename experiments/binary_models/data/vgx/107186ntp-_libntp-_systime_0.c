void
FUN1(
VAR1 *VAR2		
)
{
static struct timespec  VAR3;        
static struct timespec	VAR4;	
static l_fp		VAR5;	
static double		VAR6;	
struct timespec VAR7;	
struct timespec VAR8;	
struct timespec VAR9;	
struct timespec VAR10;	
double	VAR11;
double	VAR12;
l_fp	VAR13;
l_fp	VAR14;
l_fp	VAR15;

FUN2(&VAR7);
FUN3(VAR16);
FUN4();


if (FUN5(FUN6(VAR7, 50000000), VAR3) < 0)
VAR17 = 1;
VAR3 = VAR7;


if (!FUN7()) {
VAR8 = FUN6(VAR4, VAR18);
if (FUN5(VAR7, VAR8) < 0) {
VAR9 = FUN8(VAR8, VAR7);
if (VAR9.VAR19 > 0 && !VAR17) {
FUN9(VAR20,
"",
VAR9.VAR19 +
1e-9 * VAR9.VAR21);
FUN10(1);
}
if (!VAR17)
VAR7 = VAR8;
}
VAR10 = VAR4;
VAR4 = VAR7;
} else {

FUN11(VAR10);
}


VAR13 = FUN12(VAR7);


VAR11 = FUN13() * 2. / VAR22 * VAR23;
FUN14(VAR11, &VAR14);
FUN15(&VAR13, &VAR14);


if (!FUN7()) {
if (!FUN16(&VAR5) && !VAR17) {
if (!FUN17(&VAR13, &VAR5) &&
VAR23 > 0.) {
FUN9(VAR20, "",
FUN18(VAR10),
FUN18(VAR8));
FUN9(VAR20, "", FUN18(VAR7));
FUN9(VAR20, "",
VAR18, VAR6);
FUN9(VAR20, "",
VAR11);
VAR15 = VAR5;
FUN19(&VAR15, &VAR13);
FUN20(&VAR15, VAR12);
FUN9(VAR20,
"",
VAR5.VAR24, VAR5.VAR25,
VAR12, VAR13.VAR24, VAR13.VAR25);
}
}
VAR5 = VAR13;
VAR6 = VAR11;
if (VAR17) 
VAR17 = VAR26;
}
FUN21();
*VAR2 = VAR13;
}