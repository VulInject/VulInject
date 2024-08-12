static inline void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
unsigned int VAR5;
struct socket *VAR6;
struct VAR6 *VAR7;

if (!FUN2())
return;

VAR6 = FUN3(VAR2->VAR8.VAR9);
if (!VAR6)
return;

VAR7 = VAR6->VAR7;
if (!VAR7)
return;

VAR5 = FUN4(VAR7->VAR10);
VAR4 = VAR2->VAR4;


if (VAR5 < VAR11 || VAR5 == VAR4->VAR5)
return;


VAR4->VAR5 = VAR5;
}