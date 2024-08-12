static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
switch (VAR3->VAR6) {
case VAR7:
return VAR8;
case VAR9:
return VAR10;
case VAR11:
break;
}




if (FUN2(VAR3->VAR12) == 0)
return VAR8;


if (VAR5->VAR13 && FUN3(&VAR5->VAR14) > 1000) {
return VAR8;
}


if (!VAR5->VAR13) {
VAR5->VAR13 = VAR10;
FUN4(&VAR5->VAR14);
}


return VAR10;
}