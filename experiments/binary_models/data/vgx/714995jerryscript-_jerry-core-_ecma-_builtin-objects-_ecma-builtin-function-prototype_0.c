FUN1 (uint8_t VAR1, 
ecma_value_t VAR2, 
const ecma_value_t VAR3[], 
uint32_t VAR4) 
{
if (!FUN2 (VAR2))
{
if (FUN3 (VAR1 == VAR5))
{
return VAR6;
}

return FUN4 (FUN5 (""));
}

VAR7 *VAR8 = FUN6 (VAR2);

switch (VAR1)
{
case VAR9:
{
return FUN7 (VAR8);
}
case VAR10:
{
return FUN8 (VAR8,
VAR3[0],
VAR3[1]);
}
case VAR11:
{
return FUN9 (VAR8, VAR3, VAR4);
}
case VAR12:
{
return FUN10 (VAR8, VAR3, VAR4);
}
case VAR5:
{
return FUN11 (VAR8, VAR3[0]);
}
default:
{
FUN12 ();
}
}
}