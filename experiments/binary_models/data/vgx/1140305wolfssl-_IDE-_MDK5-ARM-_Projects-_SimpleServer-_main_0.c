static void FUN1 (void) {
int32_t VAR1;

VAR1 = FUN2 ("");
if (VAR1 == VAR2) {
VAR1 = FUN3 ("");
if (VAR1 == VAR2) {
FUN4 ("");
}
else {
FUN4 ("", VAR1);
}
}
else {
FUN4 ("");
}
}


extern uint32_t VAR3;

VAR4 FUN5(void)
{
return VAR3;
return FUN6();
}