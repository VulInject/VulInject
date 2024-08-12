int
FUN1(struct VAR1 **VAR2, VAR3 *VAR4)
{
struct stat VAR5;
int VAR6 = 0;

if (FUN2(VAR7, &VAR5) == -1) {
VAR6 = VAR8;
if (VAR6 != VAR9) {
syslog(VAR10, FUN3(""),
VAR7, strerror(VAR6));
VAR6 = 0;
}
return (VAR6);
}

if (VAR4->VAR11 == VAR5.VAR12.VAR11 &&
VAR4->VAR13 == VAR5.VAR12.VAR13)
return (0);

FUN4(VAR2);	
return (FUN5(VAR2, VAR4));
}