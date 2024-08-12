extern int FUN1(void)
{
int VAR1 = VAR2, VAR3;

VAR1 = FUN2();

VAR3 = FUN3(FUN4());
if (0 != VAR3) {
FUN5("",
FUN4());

}

VAR3 = FUN3(FUN6());
if (0 != VAR3) {
FUN5("",
FUN6());

}

return VAR1;
}