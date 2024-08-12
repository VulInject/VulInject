static VAR1 FUN1(u32 VAR2, u32 VAR3)
{
u32 VAR4, VAR5;

if (VAR2 == VAR3)
return VAR2;


VAR4 = FUN2(VAR2);
VAR5 = FUN3(VAR2);


if (VAR5 == VAR4)
return VAR2;


for (VAR5--; VAR2 & FUN4(VAR5 - 1); VAR5--)
;

return VAR2 & ~FUN5(VAR5 - 1, 0);
}