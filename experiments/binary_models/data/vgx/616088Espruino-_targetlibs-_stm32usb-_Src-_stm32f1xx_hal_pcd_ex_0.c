VAR1  FUN1(VAR2 *VAR3, 
uint16_t VAR4,
uint16_t VAR5,
uint32_t VAR6)

{
VAR7 *VAR8 = NULL;


if ((0x80 & VAR4) == 0x80)
{
VAR8 = &VAR3->VAR9[VAR4 & 0x7F];
}
else
{
VAR8 = &VAR3->VAR10[VAR4];
}


if (VAR5 == VAR11)
{

VAR8->VAR12 = 0;

VAR8->VAR6 = (VAR13)VAR6;
}
else 
{

VAR8->VAR12 = 1;

VAR8->VAR14 =  VAR6 & 0xFFFF;
VAR8->VAR15 =  (VAR6 & 0xFFFF0000) >> 16;
}

return VAR16; 
}