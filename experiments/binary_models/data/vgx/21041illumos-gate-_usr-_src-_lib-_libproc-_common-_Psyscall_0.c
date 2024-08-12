static int
FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4 = (VAR2->VAR5 >= 0)? VAR2->VAR5 : VAR2->VAR4;
int VAR6 = VAR7;
sigset_t VAR8;		
int VAR9;
struct {
long VAR10;
siginfo_t VAR11;
} VAR12;
int VAR13;		

VAR13 = FUN2(VAR2, VAR3, VAR14);	


if (memcmp(&VAR2->VAR15.VAR16.VAR17, &VAR18,
sizeof (VAR19)) != 0) {
VAR8 = VAR2->VAR15.VAR16.VAR17;
VAR2->VAR15.VAR16.VAR17 = VAR18;
VAR2->VAR20 |= VAR21;
VAR6 = VAR14;
}


if ((VAR9 = VAR2->VAR15.VAR16.VAR22) != 0) {
VAR12.VAR10 = VAR23;
VAR12.VAR11 = VAR2->VAR15.VAR16.VAR24;
}

if (FUN3(VAR2, 0, VAR25 | VAR26) == -1)
goto VAR27;

while (VAR2->VAR28 == VAR29) {
(void) FUN4(VAR2, 0);
}
if (VAR2->VAR28 != VAR30)
goto VAR27;

if (VAR9)				
(void) write(VAR4, &VAR12, sizeof (VAR12));
if (VAR6) {		
VAR2->VAR15.VAR16.VAR17 = VAR8;
VAR2->VAR20 |= VAR21;
}

(void) FUN2(VAR2, VAR3, VAR13);	

if (VAR2->VAR15.VAR16.VAR31  == VAR32 &&
VAR2->VAR15.VAR16.VAR33 == VAR3)
return (0);
VAR27:
return (-1);
}