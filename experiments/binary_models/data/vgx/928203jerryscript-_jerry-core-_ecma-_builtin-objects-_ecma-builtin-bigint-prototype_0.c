FUN1 (ecma_value_t VAR1, 
const VAR2 *VAR3, 
uint32_t VAR4) 
{
uint32_t VAR5 = 10;

if (VAR4 > 0 && !FUN2 (VAR3[0]))
{
ecma_number_t VAR6;

if (FUN3 (FUN4 (VAR3[0], &VAR6)))
{
return VAR7;
}

if (VAR6 < 2 || VAR6 > 36)
{
return FUN5 (FUN6 (""));
}

VAR5 = (VAR8) VAR6;
}

VAR9 *VAR10 = FUN7 (VAR1, VAR5);

if (VAR10 == NULL)
{
return VAR7;
}

return FUN8 (VAR10);
}