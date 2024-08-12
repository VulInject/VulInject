static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
struct VAR6 *VAR6;
resource_size_t VAR7;
sector_t VAR8;


if (!FUN2(VAR2))
return 0;

VAR6 = FUN3(VAR2);
VAR7 = VAR6->VAR9 + VAR6->VAR10 - 1;


if (VAR5->VAR11 < VAR6->VAR9 ||
(VAR5->VAR11 + VAR5->VAR12 - 1) > VAR7)
return 0;

VAR8 = (VAR5->VAR11 - VAR6->VAR9) / 512;
FUN4(&VAR6->VAR13, VAR8, VAR5->VAR12 / 512);

if (VAR6->VAR14)
FUN5(VAR6->VAR14);

return 0;
}