static int FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3;
VAR4 *VAR5, *VAR6;


if (VAR2->VAR7 <= VAR2->VAR8)
return 0;

if (VAR2->VAR8 == 0)
VAR3 = 64;
else
VAR3 = 2 * VAR2->VAR8;

VAR5 = FUN2(VAR3 * sizeof(*VAR5), VAR9);
if (!VAR5)
return -VAR10;

VAR6 = VAR2->VAR11;


FUN3(&VAR2->VAR12);
FUN4(&VAR2->VAR13);


memcpy(VAR5, VAR6, VAR2->VAR8 * sizeof(*VAR2->VAR11));
memcpy(VAR5 + VAR2->VAR8, VAR6,
VAR2->VAR8 * sizeof(*VAR2->VAR11));

VAR2->VAR11 = VAR5;
VAR2->VAR8 = VAR3;

FUN5(&VAR2->VAR13);
FUN6(&VAR2->VAR12);

FUN7(VAR6);

return 0;
}