VAR1 *
FUN1(VAR2 *VAR3)
{
VAR1 *VAR4;

if ((VAR4 = malloc(sizeof(VAR1))) == NULL) {
syslog(VAR5, "",
FUN2(VAR3));
return(NULL);
}

FUN3(VAR4, sizeof(VAR1));
bcopy(VAR3, &VAR4->VAR3[0], VAR6);
return(VAR4);
}