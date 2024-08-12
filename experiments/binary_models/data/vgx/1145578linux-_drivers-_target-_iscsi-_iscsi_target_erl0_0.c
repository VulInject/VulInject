int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = &VAR4->VAR7;

FUN2(&VAR6->VAR8);

if (VAR2->VAR9 & VAR10)
return -1;

if (!(VAR2->VAR9 & VAR11))
return 0;

VAR2->VAR9 |= VAR12;
FUN3(&VAR6->VAR8);

FUN4(&VAR2->VAR13);

FUN5(&VAR6->VAR8);
VAR2->VAR9 &= ~VAR11;
FUN6("",
VAR2->VAR14);
return 0;
}