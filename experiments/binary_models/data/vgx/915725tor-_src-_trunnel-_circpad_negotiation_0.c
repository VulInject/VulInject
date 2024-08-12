static VAR1
FUN1(VAR2 *VAR3, const VAR4 *VAR5, const size_t VAR6)
{
const VAR4 *VAR7 = VAR5;
size_t VAR8 = VAR6;
ssize_t VAR9 = 0;
(void)VAR9;


FUN2(1, VAR10);
VAR3->VAR11 = (FUN3(VAR7));
VAR8 -= 1; VAR7 += 1;
if (! (VAR3->VAR11 == 0))
goto VAR12;


FUN2(1, VAR10);
VAR3->VAR13 = (FUN3(VAR7));
VAR8 -= 1; VAR7 += 1;
if (! (VAR3->VAR13 == VAR14 || VAR3->VAR13 == VAR15))
goto VAR12;


FUN2(1, VAR10);
VAR3->VAR16 = (FUN3(VAR7));
VAR8 -= 1; VAR7 += 1;
if (! (VAR3->VAR16 == VAR17 || VAR3->VAR16 == VAR18))
goto VAR12;


FUN2(1, VAR10);
VAR3->VAR19 = (FUN3(VAR7));
VAR8 -= 1; VAR7 += 1;


FUN2(4, VAR10);
VAR3->VAR20 = FUN4(FUN5(VAR7));
VAR8 -= 4; VAR7 += 4;
FUN6(VAR7 + VAR8 == VAR5 + VAR6);
return VAR6 - VAR8;

VAR10:
return -2;
VAR12:
VAR9 = -1;
return VAR9;
}