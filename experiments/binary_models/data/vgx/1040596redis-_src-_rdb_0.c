int FUN1(int VAR1, VAR2 *VAR3, int *VAR4, VAR5 *VAR6) {
char VAR7[VAR8];

FUN2(VAR9);
FUN3(VAR7,VAR8);
if (VAR4) *VAR4 = 0;
if (FUN4(VAR3,"",5) == 0) goto VAR10;
if (FUN4(VAR3,VAR7,VAR8) == 0) goto VAR10;
if (FUN4(VAR3,"",2) == 0) goto VAR10;
if (FUN5(VAR1,VAR3,VAR4,VAR11,VAR6) == VAR12) goto VAR10;
if (FUN4(VAR3,VAR7,VAR8) == 0) goto VAR10;
FUN6(1);
return VAR13;

VAR10: 

if (VAR4 && *VAR4 == 0) *VAR4 = VAR14;
FUN6(0);
return VAR12;
}