void FUN1(struct VAR1 *VAR2, u32 VAR3, u32 VAR4)
{
struct VAR5 *VAR6;

VAR6 = &VAR2->VAR7->VAR8;
if (!FUN2(VAR6->VAR9)) {
if (VAR4 & VAR3 & VAR10)
VAR6->VAR11 = false;


if (VAR4 & VAR3 & VAR12) {
VAR6->VAR13 = true;
VAR4 &= ~VAR12;
} else if (VAR3 & VAR12) {
VAR6->VAR13 = false;
}
}

VAR6 = &VAR2->VAR7->VAR14;
if (!FUN2(VAR6->VAR9)) {
if (VAR4 & VAR3 & VAR15)
VAR6->VAR11 = false;


if (VAR4 & VAR3 & VAR16) {
VAR6->VAR13 = true;
VAR4 &= ~VAR16;
} else if (VAR3 & VAR16) {
VAR6->VAR13 = false;
}
}

FUN3(VAR2, VAR17, VAR3 | VAR18, VAR4);
}