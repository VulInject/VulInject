static uint32_t FUN1 (VAR1 *VAR2)
{
USB_OTG_HAINT_TypeDef        VAR3;
USB_OTG_HCCHAR_TypeDef       VAR4;
uint32_t VAR5 = 0;
uint32_t VAR6 = 0;



VAR3.VAR7 = FUN2(VAR2);

for (VAR5 = 0; VAR5 < VAR2->VAR8.VAR9 ; VAR5++)
{
if (VAR3.VAR10.VAR11 & (1 << VAR5))
{
VAR4.VAR7 = FUN3(&VAR2->VAR12.VAR13[VAR5]->VAR14);

if (VAR4.VAR10.VAR15)
{
VAR6 |= FUN4 (VAR2, VAR5);
}
else
{
VAR6 |=  FUN5 (VAR2, VAR5);
}
}
}

return VAR6;
}