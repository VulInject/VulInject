static bool
FUN1(enum bcode_compare VAR1, struct VAR2 *VAR3, struct VAR2 *VAR4)
{
u_int	VAR5;
int	VAR6;

VAR5 = FUN2(VAR3->VAR5, VAR4->VAR5);

if (VAR5 > VAR3->VAR5)
FUN3(VAR3, VAR5);
else if (VAR5 > VAR4->VAR5)
FUN3(VAR4, VAR5);

VAR6 = FUN4(VAR3->VAR2, VAR4->VAR2);

FUN5(VAR3);
FUN5(VAR4);

switch (VAR1) {
case VAR7:
return VAR6 == 0;
case VAR8:
return VAR6 != 0;
case VAR9:
return VAR6 < 0;
case VAR10:
return VAR6 >= 0;
case VAR11:
return VAR6 > 0;
case VAR12:
return VAR6 <= 0;
}
return false;
}