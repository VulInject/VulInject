static int FUN1(struct VAR1 *VAR2)
{
FUN2(VAR2->VAR3);

if (!VAR2->VAR4[0] || !VAR2->VAR5[0])
return -VAR6;

if (VAR2->VAR7 & (VAR2->VAR7 + 1))
return -VAR6;


if (VAR2->VAR7 > VAR8)
return -VAR6;

if (VAR2->VAR9 > VAR10)
return -VAR6;


if (!VAR2->VAR11 && (VAR2->VAR12 & VAR13) ==
VAR14) {
if (VAR2->VAR7 > VAR15)
return -VAR6;

if (VAR2->VAR9 > VAR16)
return -VAR6;
}

if (VAR2->VAR17 < 0)
return -VAR6;

FUN3(&VAR2->VAR18, 1);

return 0;
}