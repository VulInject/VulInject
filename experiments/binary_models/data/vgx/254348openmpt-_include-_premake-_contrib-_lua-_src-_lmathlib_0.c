static int FUN1 (VAR1 *VAR2) {
lua_Integer VAR3, VAR4;
double VAR5 = (double)FUN2() * (1.0 / ((double)VAR6 + 1.0));
switch (FUN3(VAR2)) {  
case 0: {  
FUN4(VAR2, (VAR7)VAR5);  
return 1;
}
case 1: {  
VAR3 = 1;
VAR4 = FUN5(VAR2, 1);
break;
}
case 2: {  
VAR3 = FUN5(VAR2, 1);
VAR4 = FUN5(VAR2, 2);
break;
}
default: return FUN6(VAR2, "");
}

FUN7(VAR2, VAR3 <= VAR4, 1, "");
FUN7(VAR2, VAR3 >= 0 || VAR4 <= VAR8 + VAR3, 1,
"");
VAR5 *= (double)(VAR4 - VAR3) + 1.0;
FUN8(VAR2, (VAR9)VAR5 + VAR3);
return 1;
}