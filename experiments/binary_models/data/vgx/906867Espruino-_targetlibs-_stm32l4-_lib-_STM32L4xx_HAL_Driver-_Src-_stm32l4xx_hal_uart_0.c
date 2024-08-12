static void FUN1(VAR1 *VAR2)
{
VAR3* VAR4;
uint8_t   VAR5;


if (VAR2->VAR6 == VAR7)
{
for(VAR5 = VAR2->VAR8 ; VAR5 > 0 ; VAR5--)
{    
if(VAR2->VAR9 == 0U)
{

FUN2(VAR2->VAR10->VAR11, VAR12);


FUN3(VAR2->VAR10->VAR13, VAR14);

break; 
}
else if (FUN4(VAR2->VAR10->VAR15, VAR16) != VAR17)
{
VAR4 = (VAR3*) VAR2->VAR18;
VAR2->VAR10->VAR19 = (*VAR4 & (VAR3)0x01FFU);
VAR2->VAR18 += 2U;
VAR2->VAR9--;        
}
}
}
}