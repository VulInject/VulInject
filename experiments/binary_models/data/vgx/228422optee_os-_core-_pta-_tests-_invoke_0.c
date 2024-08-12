static VAR1 FUN1(uint32_t VAR2, TEE_Param VAR3[VAR4])
{
char *VAR5 = VAR3[0].VAR6.VAR7;
size_t VAR8 = VAR3[0].VAR6.VAR9;
uint32_t VAR10 = FUN2(VAR11,
VAR12,
VAR12,
VAR12);

if (VAR10 != VAR2) {
FUN3("");
return VAR13;
}

if (!FUN4(VAR14, VAR5, VAR8)) {
FUN3("");
return VAR13;
}

if (!VAR8)
return VAR15;


if (FUN5(VAR5, VAR8))
return VAR16;

if (FUN6(VAR17, VAR5, VAR8) != VAR15)
return VAR18;

for (; VAR8; VAR8--, VAR5++)
*VAR5 = ~(*VAR5) + 1;

if (FUN6(VAR17, VAR5, VAR8) != VAR15)
return VAR18;

return VAR15;
}