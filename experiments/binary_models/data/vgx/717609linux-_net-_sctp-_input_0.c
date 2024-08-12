static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4, VAR5;
int VAR6, VAR7 = 0;


do {

if (VAR7 + sizeof(VAR5) > VAR2->VAR8)
break;

VAR4 = FUN2(VAR2, VAR7, sizeof(*VAR4), &VAR5);


if (!VAR4 || FUN3(VAR4->VAR9) < sizeof(VAR5))
break;

VAR6 = VAR7 + FUN4(FUN3(VAR4->VAR9));
if (VAR6 > VAR2->VAR8)
break;


if (VAR10 == VAR4->VAR11)
goto VAR12;


if (VAR13 == VAR4->VAR11)
goto VAR12;


if (VAR14 == VAR4->VAR11 && (void *)VAR4 != VAR2->VAR15)
goto VAR12;

VAR7 = VAR6;
} while (VAR6 < VAR2->VAR8);

return 0;

VAR12:
return 1;
}