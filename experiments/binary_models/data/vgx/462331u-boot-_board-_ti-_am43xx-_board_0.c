void FUN1(u32 VAR1)
{
int VAR2, VAR3;

if (FUN2(0))
return;

switch (VAR1) {
case 1000:
VAR2 = VAR4;
break;
case 800:
VAR2 = VAR5;
break;
case 720:
VAR2 = VAR6;
break;
case 600:
VAR2 = VAR7;
break;
case 300:
VAR2 = VAR8;
break;
default:
FUN3("");
return;
}


if (FUN4(VAR9,
VAR7)) {
FUN5("", VAR10);
return;
}


if (FUN4(VAR11, VAR2)) {
FUN5("", VAR10);
return;
}

if (FUN6())
VAR3 = VAR12;
else
VAR3 = VAR13;


if (FUN4(VAR14, VAR3)) {
FUN5("", VAR10);
return;
}
}