int
FUN1()
{
int	VAR1, VAR2;
extern char	*FUN2();
extern char	*FUN3();

VAR3 = 2;
if ((VAR4=FUN3(VAR2=0)) != 0 || (VAR4=FUN3(VAR2=1)) != 0 || (VAR4=FUN3(VAR2=2)) != 0)
;
else 
VAR4 = "";
VAR5 = VAR2;
if (VAR6)
FUN4(0);
VAR7 = VAR8;
FUN5();
FUN6();
FUN7();
VAR9[VAR10].VAR11 = FUN8();
VAR12 = VAR13;
VAR14 = 0;
VAR9[VAR15].VAR11 = VAR16 = 0;
VAR9[VAR17].VAR11 = -1;
VAR18 = 0;
VAR19 = 0;
VAR20 = VAR21 = 0;
VAR22 = FUN9(VAR23+strlen(VAR23), "", VAR24);
VAR9[VAR25].VAR11 = -1;	
FUN10(VAR23);
VAR26 = VAR23;
VAR27 = VAR28;
VAR29 = VAR30 = (struct VAR31 *)FUN2(VAR32);
VAR33 = &VAR34[0];
VAR35 = VAR29 + 1;
for (VAR1 = 0; VAR1 < VAR36; VAR1++) {
extern tchar VAR37[];
*(struct VAR38 *)&VAR37[VAR1 * sizeof(VAR38)/sizeof(VAR39)] = VAR38;
}
for (VAR1 = VAR36; VAR1--; )
write(VAR40, (char *) & VAR38, sizeof(VAR38));
return (0);
}