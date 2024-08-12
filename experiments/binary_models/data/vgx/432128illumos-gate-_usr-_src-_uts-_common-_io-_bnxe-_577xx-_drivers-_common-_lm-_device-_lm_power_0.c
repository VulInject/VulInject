VAR1 FUN1( VAR2* VAR3,
u32_t        VAR4,
VAR5*        VAR6,
VAR5 *       VAR7 )
{
VAR8 *VAR9;
u32_t VAR10;
if(VAR4 == 0 || VAR4 > VAR11)
{
FUN2("");
return VAR12;
}

VAR9 = FUN3(&VAR3->VAR13, VAR4, VAR6, VAR7);
if(VAR9)
{

VAR9->VAR14 = 0;
VAR9->VAR15 = 0 ;
for(VAR10 = 0; VAR10 < VAR11; VAR10++)
{
VAR9->VAR16[VAR10] = 0;
}
for(VAR10 = 0; VAR10 < VAR17; VAR10++)
{
VAR9->VAR7[VAR10] = 0xff;
}
VAR3->VAR13.VAR18--;
}
else
{

FUN4(VAR3, VAR19, "", VAR4 );
return VAR20;
}
return VAR21;
}