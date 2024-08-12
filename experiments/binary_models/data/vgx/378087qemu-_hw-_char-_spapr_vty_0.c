static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5,
target_ulong VAR6, VAR1 *VAR7)
{
target_ulong VAR8 = VAR7[0];
target_ulong VAR9 = VAR7[1];
target_ulong VAR10 = VAR7[2];
target_ulong VAR11 = VAR7[3];
VAR12 *VAR13;
uint8_t VAR14[16];

VAR13 = FUN2(VAR5, VAR8);
if (!VAR13) {
return VAR15;
}

if (VAR9 > 16) {
return VAR15;
}

*((VAR16 *)VAR14) = FUN3(VAR10);
*((VAR16 *)VAR14 + 1) = FUN3(VAR11);

FUN4(VAR13, VAR14, VAR9);

return VAR17;
}