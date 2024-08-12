VAR1 FUN1(uint32_t VAR2)
{
uint32_t VAR3 = VAR4;


FUN2(FUN3(VAR2));


switch (FUN4(VAR2))
{
case VAR5:    
if (FUN5())
{
VAR3 = FUN6();
}
break;

case VAR6:        
if (FUN7())
{
VAR3 = FUN8();
}
break;

case VAR7:        
if (FUN9())
{
VAR3 = FUN10(FUN11(),
(FUN11() ?
FUN12() :
FUN13()));
}
break;

case VAR8:      
{
if (FUN14())
{
VAR3 = VAR9;
}
else if (FUN7())
{
VAR3 = FUN8();
}
else if (FUN5())
{
VAR3 = FUN6();
}
else if (FUN9())
{
VAR3 = FUN10(FUN11(),
(FUN11() ?
FUN12() :
FUN13()));
}
else
{

}
}
break;
case VAR10:      
if (FUN14())
{
VAR3 = VAR9;
}
break;
case VAR11:       
default:
VAR3 = VAR12;
break;
}

return VAR3;
}