int
FUN1(int VAR1, struct VAR2* VAR3, socklen_t VAR4)
{
if(connect(VAR1, (struct VAR5*)VAR3, VAR4) == -1) {
if(VAR6 != VAR7) {
if(FUN2(
(struct VAR5*)VAR3, VAR4))
FUN3("",
strerror(VAR6), VAR3, VAR4);
close(VAR1);
return 0;
}
if(FUN4() != VAR8 &&
FUN4() != VAR9) {
FUN5(VAR1);
return 0;
}
}
return 1;
}