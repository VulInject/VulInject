VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{

FUN2(FUN3(VAR3->VAR5));


switch (VAR4)
{
case VAR6:
{
FUN4(VAR3->VAR5, VAR6, VAR7);
}
break;

case VAR8:
{
FUN4(VAR3->VAR5, VAR8, VAR7);
}
break;

default :
{
FUN4(VAR3->VAR5, VAR6, VAR7);
FUN4(VAR3->VAR5, VAR8, VAR7);
}
break;
}

FUN5(VAR3);


return VAR9;
}