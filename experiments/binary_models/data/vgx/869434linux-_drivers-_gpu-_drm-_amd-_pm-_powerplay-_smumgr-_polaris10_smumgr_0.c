static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)(VAR2->VAR5);
uint32_t VAR6;

if (FUN2(VAR2->VAR7.VAR8,
VAR9)) {
if (FUN3(VAR2,
VAR10 +
FUN4(VAR11, VAR12),
&VAR6, VAR13))
FUN5(false,
"",
return -VAR14);

if (FUN6(VAR2))
FUN5(false,
"",
return -VAR14);

if (FUN7(VAR2))
FUN5(false,
"", return -VAR14);

if (FUN8(VAR2, VAR6))
FUN5(false,
""
"",
return -VAR14);

if (0 != FUN9(VAR2))
FUN5(false,
"",
return -VAR14);

if (FUN10(VAR2))
FUN5(false,
"",
return -VAR14);

if (FUN11(VAR2))
FUN5(false,
"",
return -VAR14);

if (FUN12(VAR2))
FUN5(false,
""
"", return -VAR14);

if (FUN13(VAR2, VAR6,
(VAR15 *)&VAR4->VAR16,
(sizeof(struct VAR17) - 92), VAR13))
FUN5(false,
"",
return -VAR14);
}
return 0;
}