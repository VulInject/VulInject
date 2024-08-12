static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6)
{

if (FUN2(VAR7, VAR4->VAR8 + VAR9))
return 0;


if (!VAR4->VAR10)
return 1;


if (VAR2->VAR11 < VAR4->VAR12.VAR11)
return 1;


if (VAR2->VAR11 != VAR4->VAR12.VAR11)
return 0;

if (FUN3(VAR2->VAR13) < FUN3(VAR6->VAR14))
return 1;

return 0;
}