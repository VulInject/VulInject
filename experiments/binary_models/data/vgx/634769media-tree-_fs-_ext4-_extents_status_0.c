int FUN1(struct VAR1 *VAR1, ext4_lblk_t VAR2,
ext4_lblk_t VAR3, ext4_fsblk_t VAR4,
unsigned int VAR5)
{
struct extent_status VAR6;
ext4_lblk_t VAR7 = VAR2 + VAR3 - 1;
int VAR8 = 0;

FUN2("",
VAR2, VAR3, VAR4, VAR5, VAR1->VAR9);

if (!VAR3)
return 0;

FUN3(VAR7 < VAR2);

if ((VAR5 & VAR10) &&
(VAR5 & VAR11)) {
FUN4(VAR1->VAR12, ""
""
"", VAR2, VAR3);
FUN5(1);
}

VAR6.VAR13 = VAR2;
VAR6.VAR14 = VAR3;
FUN6(&VAR6, VAR4, VAR5);
FUN7(VAR1, &VAR6);

FUN8(VAR1, &VAR6);

FUN9(&FUN10(VAR1)->VAR15);
VAR8 = FUN11(VAR1, VAR2, VAR7);
if (VAR8 != 0)
goto VAR16;
VAR17:
VAR8 = FUN12(VAR1, &VAR6);
if (VAR8 == -VAR18 && FUN13(FUN14(VAR1->VAR12),
128, FUN10(VAR1)))
goto VAR17;
if (VAR8 == -VAR18 && !FUN15(&VAR6))
VAR8 = 0;

VAR16:
FUN16(&FUN10(VAR1)->VAR15);

FUN17(VAR1);

return VAR8;
}