static enum VAR1 FUN1(void)
{
int VAR2;
struct arm_smccc_res VAR3;

FUN2(VAR4,
VAR5, &VAR3);

VAR2 = VAR3.VAR6;
switch (VAR2) {
case VAR7:
return VAR8;
case VAR9:
return VAR10;
default:
VAR11;
case VAR12:
return VAR13;
}
}