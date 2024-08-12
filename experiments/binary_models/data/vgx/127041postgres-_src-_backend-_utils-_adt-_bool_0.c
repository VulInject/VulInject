static VAR1 *
FUN1(FunctionCallInfo VAR2)
{
VAR1 *VAR3;
MemoryContext VAR4;

if (!FUN2(VAR2, &VAR4))
FUN3(VAR5, "");

VAR3 = (VAR1 *) FUN4(VAR4,
sizeof(VAR1));
VAR3->VAR6 = 0;
VAR3->VAR7 = 0;

return VAR3;
}