VAR1
FUN1(
VAR2 *VAR3,
lm_medium_t VAR4,
lm_flow_control_t VAR5,
u32_t VAR6,
u32_t VAR7,
u32_t VAR8)
{
lm_status_t VAR9;

FUN2(VAR3->VAR10.VAR11);

if(FUN3(VAR4) == VAR12)
{
VAR6 = VAR13;
}

if(FUN4(VAR4) == VAR14)
{
if(FUN5(VAR3) == VAR15)
{
VAR4 = VAR16;
}
else if(FUN5(VAR3) == VAR17)
{
VAR6 = VAR13;
VAR4 = VAR18 |
VAR19 |
VAR20;
}
else if(FUN6(VAR3) == VAR21)
{
if(VAR4 == VAR14)
{
VAR4 = VAR21;
}
else
{
FUN7(VAR4, VAR21);
}
}
else
{
if(VAR4 == VAR14)
{
VAR4 = VAR18;
}
else
{
FUN7(VAR4, VAR18);
}
}
}

switch(FUN4(VAR4))
{
case VAR18:
VAR9 = FUN8(
VAR3,
VAR4,
VAR5, 
VAR6,
VAR7,
VAR8);
break;

case VAR21:
FUN2(FUN9(VAR3) != VAR22 &&
FUN9(VAR3) != VAR23 &&
FUN9(VAR3) != VAR24);

if(FUN9(VAR3) == VAR22)
{
VAR9 = FUN10(
VAR3,
VAR4,
VAR5,
VAR8);
}
else if(FUN9(VAR3) == VAR23)
{
VAR9 = FUN11(
VAR3,
VAR4,
VAR5,
VAR6,
VAR8);
}
else
{
VAR9 = FUN12(
VAR3,
VAR4,
VAR5,
VAR6,
VAR8);
}

break;

case VAR16:
VAR9 = FUN13(
VAR3,
VAR4,
VAR5,
VAR8);
break;

case VAR25:
case VAR26:
VAR9 = FUN14(
VAR3,
VAR4,
VAR5);
break;

default:
VAR9 = VAR27;
break;
}

return VAR9;
}