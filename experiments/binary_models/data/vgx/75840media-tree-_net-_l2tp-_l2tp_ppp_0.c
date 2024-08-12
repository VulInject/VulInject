static int FUN1(struct socket *VAR1, struct VAR2 *VAR3,
size_t VAR4, int VAR5)
{
int VAR6;
struct VAR7 *VAR8;
struct VAR1 *VAR9 = VAR1->VAR9;

VAR6 = -VAR10;
if (VAR9->VAR11 & VAR12)
goto VAR13;

VAR6 = 0;
VAR8 = FUN2(VAR9, VAR5 & ~VAR14,
VAR5 & VAR14, &VAR6);
if (!VAR8)
goto VAR13;

if (VAR4 > VAR8->VAR4)
VAR4 = VAR8->VAR4;
else if (VAR4 < VAR8->VAR4)
VAR3->VAR15 |= VAR16;

VAR6 = FUN3(VAR8, 0, VAR3, VAR4);
if (FUN4(VAR6 == 0))
VAR6 = VAR4;

FUN5(VAR8);
VAR13:
return VAR6;
}