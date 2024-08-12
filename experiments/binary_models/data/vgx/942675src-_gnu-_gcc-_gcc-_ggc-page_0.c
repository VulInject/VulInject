FUN1 (const void *VAR1)
{
VAR2 ***VAR3;
size_t VAR4, VAR5;

VAR3 = &VAR6.VAR7[0];
page_table VAR8 = VAR6.VAR7;
size_t VAR9 = (VAR10) VAR1 & ~ (VAR10) 0xffffffff;
while (1)
{
if (VAR8 == NULL)
return 0;
if (VAR8->VAR9 == VAR9)
break;
VAR8 = VAR8->VAR11;
}
VAR3 = &VAR8->VAR8[0];


VAR4 = FUN2 (VAR1);
VAR5 = FUN3 (VAR1);

return VAR3[VAR4] && VAR3[VAR4][VAR5];
}