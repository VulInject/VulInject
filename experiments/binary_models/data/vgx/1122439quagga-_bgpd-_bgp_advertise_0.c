FUN1 (struct VAR1 *VAR2, struct VAR3 *VAR3)
{
struct VAR4 *VAR5;

for (VAR5 = VAR2->VAR6; VAR5; VAR5 = VAR5->VAR7)
if (VAR5->VAR3 == VAR3)
break;

if (! VAR5)
return 0;

FUN2 (VAR2, VAR5);
FUN3 (VAR2);
return 1;
}