static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);


if (VAR4->VAR7 && VAR4->VAR8) {
u32 VAR9;


VAR9 = VAR6->VAR10;


VAR6->VAR11 |= VAR12;
VAR6->VAR10 = VAR4->VAR13;

FUN4(VAR2);


VAR6->VAR10 = VAR9;
}

VAR4->VAR13 = VAR6->VAR10;
VAR4->VAR7 = 0;

VAR6->VAR11 &= ~VAR12;
}