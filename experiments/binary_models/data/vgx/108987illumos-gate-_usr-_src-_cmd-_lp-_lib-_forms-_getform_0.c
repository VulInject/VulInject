int
FUN1(char *VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
static long		VAR8		= -1;

int VAR9;

register char *		VAR10;


if (!VAR1 || !*VAR1) {
VAR11 = VAR12;
return (-1);
}


if (FUN2(VAR13, VAR1)) {
if (!(VAR1 = FUN3(VAR14, &VAR8)))
return (-1);
} else
VAR8 = -1;



if (VAR3) {
VAR10 = FUN4(VAR1, VAR15);
if (!VAR10)
return (-1);
if ((VAR9 = FUN5(VAR10, "", 0)) < 0) {
FUN6 (VAR10);
return (-1);
}
FUN6 (VAR10);

if (FUN7(VAR1, VAR3, VAR9, 0, (int *)0) == -1) {
close(VAR9);
return (-1);
}
close(VAR9);
}


if (VAR5) {

VAR4 *		VAR16 = FUN8(VAR14, VAR1);



if (!VAR16) {

if (VAR11 == VAR17) {
VAR5->VAR18 = 0;
VAR5->VAR19 = VAR5->VAR20 = -1;

} else if (VAR11 == VAR21) {
FUN9 (VAR3);
VAR11 = VAR17;	
return (-1);

} else if (
VAR11 != VAR22
|| !FUN10()		  
|| FUN2(FUN11(), VAR23) 
) {
FUN9 (VAR3);
return (-1);
}

} else
*VAR5 = *VAR16;
}


if (VAR7) {
VAR10 = FUN4(VAR1, VAR24);
if (!VAR10) {
FUN9 (VAR3);
VAR11 = VAR25;
return (-1);
}
if (
!(*VAR7 = FUN12(VAR10, "", 0))
&& VAR11 != VAR17
) {
FUN6 (VAR10);
FUN9 (VAR3);
return (-1);
}
FUN6 (VAR10);
}

return (0);
}