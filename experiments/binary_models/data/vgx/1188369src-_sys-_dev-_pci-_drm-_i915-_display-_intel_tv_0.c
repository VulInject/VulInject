static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR5 *VAR9;

VAR6 = FUN2(VAR4, VAR2);
if (!VAR6->VAR10)
return 0;

VAR9 = FUN3(VAR4, VAR2);
VAR8 = FUN4(VAR4, VAR6->VAR10);

if (VAR9->VAR11.VAR12 != VAR6->VAR11.VAR12 ||
VAR9->VAR11.VAR13.VAR14 != VAR6->VAR11.VAR13.VAR14 ||
VAR9->VAR11.VAR13.VAR15 != VAR6->VAR11.VAR13.VAR15 ||
VAR9->VAR11.VAR13.VAR16 != VAR6->VAR11.VAR13.VAR16 ||
VAR9->VAR11.VAR13.VAR17 != VAR6->VAR11.VAR13.VAR17) {


VAR8->VAR18 = true;
}

return 0;
}