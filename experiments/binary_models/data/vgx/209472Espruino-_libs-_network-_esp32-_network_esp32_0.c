int FUN1(VAR1 *VAR2, SocketType VAR3, int VAR4, const void *VAR5, size_t VAR6) {
FUN2(VAR2);
fd_set VAR7;
FUN3(&VAR7);
FUN4(VAR4, &VAR7);
struct timeval VAR8;
VAR8.VAR9 = 0;
VAR8.VAR10 = 0;
int VAR11 = FUN5(VAR4+1, 0, &VAR7, 0, &VAR8);
if (VAR11==VAR12 ) {

return -1;
} else if (FUN6(VAR4, &VAR7)) {
int VAR13 = 0;
VAR13 |= VAR14;
if (VAR3 & VAR15) {
VAR16 *VAR17 = (VAR16*)VAR5;
sockaddr_in VAR18;
VAR18.VAR19 = VAR20;
VAR18.VAR21.VAR22 = *(VAR23*)&VAR17->VAR24;
VAR18.VAR25 = FUN7(VAR17->VAR26);

FUN8("", VAR6 - sizeof(VAR16), *(VAR27*)&VAR17->VAR24, VAR17->VAR26);
VAR11 = (int)sendto(VAR4, VAR5 + sizeof(VAR16), VAR17->VAR28, VAR13, (struct VAR29 *)&VAR18, sizeof(VAR30)) + sizeof(VAR16);
FUN8("",  VAR11);
} else {
VAR11 = (int)send(VAR4, VAR5, VAR6, VAR13);
}
return VAR11;
} else
return 0; 
}