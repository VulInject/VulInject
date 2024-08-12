int
FUN1(VAR1 **VAR2, int64 VAR3)
{
int VAR4;
struct epoll_event VAR5 = {.VAR6=0};

VAR4 = FUN2(VAR7, &VAR5, 1, (int)(VAR3/1000000));
if (VAR4 == -1 && VAR8 != VAR9) {
FUN3("");
FUN4(1);
}

if (VAR4 > 0) {
*VAR2 = VAR5.VAR10.VAR11;
if (VAR5.VAR6 & (VAR12|VAR13)) {
return '';
} else if (VAR5.VAR6 & VAR14) {
return '';
} else if (VAR5.VAR6 & VAR15) {
return '';
}
}
return 0;
}