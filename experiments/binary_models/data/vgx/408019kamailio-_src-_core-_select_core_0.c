int FUN1(VAR1* VAR2, VAR3* VAR4, struct VAR5* VAR6) {
struct VAR7* VAR7;
union sockaddr_union VAR8;
char VAR9;
struct VAR10 *VAR11, VAR12;
VAR1 *VAR13;

if (VAR6->VAR14.VAR15!=VAR16) 
return -1;

if (VAR6->VAR17) {
*VAR2 = VAR6->VAR17->VAR18;
return 0;
}

if (VAR6->VAR19.VAR20) {
if (FUN2(VAR6->VAR19.VAR4, VAR6->VAR19.VAR20, &VAR12) < 0)
return -1;
VAR11 = &VAR12;
}
else {
if (FUN3(VAR6) < 0)
return -1;
VAR11 = &VAR6->VAR21;
}
if (VAR11->VAR15==VAR22)
VAR9 = VAR23;
else
VAR9 = VAR11->VAR9;

if (VAR11->VAR24.VAR4 && VAR11->VAR24.VAR20)
VAR13 = &VAR11->VAR24;
else
VAR13 = &VAR11->VAR25;

if (FUN4(&VAR8, VAR13, VAR11->VAR26, &VAR9) < 0)
return -1;
VAR7 = FUN5(VAR6, &VAR8, VAR9);
if (!VAR7)
return -1;

*VAR2 = VAR7->VAR18;
return 0;
}