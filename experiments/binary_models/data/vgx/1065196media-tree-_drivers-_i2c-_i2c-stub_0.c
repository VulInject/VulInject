static VAR1 *FUN1(struct VAR2 *VAR3, u8 VAR4)
{
if (VAR3->VAR5 &&
VAR4 >= VAR3->VAR6 && VAR4 <= VAR3->VAR7)
return VAR3->VAR8 +
(VAR3->VAR5 - 1) * VAR3->VAR9 +
VAR4 - VAR3->VAR6;
else
return VAR3->VAR10 + VAR4;
}