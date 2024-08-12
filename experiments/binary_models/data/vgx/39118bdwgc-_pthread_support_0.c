static VAR1 FUN1(GC_thread VAR2)
{
ptr_t VAR3 = FUN2();

size_t VAR4;
GC_stack_context_t VAR5 = VAR2 -> VAR5;
GC_bool VAR6 = VAR7;

FUN3(FUN4());
FUN3((VAR2 -> VAR8 & VAR9) == 0);
VAR5 -> VAR10 = VAR3;
VAR5 -> VAR10 = FUN5();
if (NULL == VAR5 -> VAR11) {


VAR6 = VAR12;
VAR5 -> VAR11 = FUN6(0);
}
VAR5 -> VAR13 = VAR3;
FUN3(NULL == VAR5 -> VAR14);
VAR4 = FUN7(
&(VAR5 -> VAR14));
VAR5 -> VAR13 = VAR5 -> VAR14 + VAR4;
VAR2 -> VAR8 |= VAR9;

return VAR6;
}