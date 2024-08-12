bool FUN1(VAR1 *VAR2) {
VAR3 *VAR4;
VAR5 *VAR6;
VAR7 *VAR8;
VAR9 *VAR10;
VAR11 *VAR12;

assert(VAR2);

FUN2(VAR4, VAR2->VAR13)
if (VAR4->VAR14 == VAR15)
return true;

FUN3(VAR6, VAR2->VAR16)
if (VAR6->VAR14 == VAR15)
return true;

FUN3(VAR8, VAR2->VAR17)
if (VAR8->VAR14 == VAR15)
return true;

FUN3(VAR10, VAR2->VAR18)
if (VAR10->VAR14 == VAR15)
return true;

FUN3(VAR12, VAR2->VAR19)
if (VAR12->VAR14 == VAR15)
return true;

if (!FUN4(VAR2->VAR20))
return true;

if (!FUN4(VAR2->VAR21))
return true;

if (!FUN4(VAR2->VAR22))
return true;

return false;
}