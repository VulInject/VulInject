FUN1 (rtx VAR1, rtx r0 VAR2, rtx VAR3)
{
int VAR4 = 0;
rtx VAR5 = FUN2 (VAR1, VAR6, VAR7);
rtx VAR8, VAR9;



if (VAR5 == 0
|| (FUN3 (VAR3) && FUN4 (VAR3) < VAR10)
|| (FUN5 (VAR3) == VAR11 && FUN3 (FUN6 (VAR3))
&& FUN4 (FUN6 (VAR3)) < VAR10))
return 0;

VAR9 = FUN7 (VAR5, 0);

for (VAR8 = FUN8 (VAR1); VAR8 && VAR8 != VAR9; VAR8 = FUN8 (VAR8))
if (FUN9 (VAR8))
{
if (FUN2 (VAR8, VAR12, VAR3))
VAR4 = 1;


if (! FUN2 (VAR8, VAR13, VAR3))
return 0;
}

return VAR4;
}