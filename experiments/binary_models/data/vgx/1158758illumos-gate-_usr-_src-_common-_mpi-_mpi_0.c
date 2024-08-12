int      FUN1(const VAR1 *VAR2, const VAR1 *VAR3)
{
mp_size VAR4 = FUN2(VAR2);
{
mp_size VAR5 = FUN2(VAR3);

if (VAR4 > VAR5)
goto VAR6;
if (VAR4 < VAR5)
goto VAR7;
}
{
VAR8 *VAR9, *VAR10;
mp_digit VAR11 = 0, VAR12 = 0;


VAR9 = FUN3(VAR2) + VAR4;
VAR10 = FUN3(VAR3) + VAR4;
while (VAR4 >= 4) {
VAR9     -= 4;
VAR10     -= 4;
VAR4 -= 4;
FUN4(3);
FUN4(2);
FUN4(1);
FUN4(0);
}
while (VAR4-- > 0 && ((VAR11 = *--VAR9) == (VAR12 = *--VAR10))) 
;
VAR13:
if (VAR11 > VAR12)
goto VAR6;
if (VAR11 < VAR12) 
goto VAR7;
}
return VAR14;
VAR7:
return VAR15;
VAR6:
return VAR16;
}