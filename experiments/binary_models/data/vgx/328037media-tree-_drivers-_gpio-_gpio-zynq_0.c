static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
u32 VAR4;
bool VAR5;
unsigned int VAR6, VAR7;
struct VAR8 *VAR9 = FUN2(VAR2);

VAR5 = VAR9->VAR10->VAR11 & VAR12;
FUN3(VAR3, &VAR6, &VAR7, VAR9);


if (VAR5 && VAR6 == 0 &&
(VAR7 == 7 || VAR7 == 8))
return -VAR13;


VAR4 = FUN4(VAR9->VAR14 + FUN5(VAR6));
VAR4 &= ~FUN6(VAR7);
FUN7(VAR4, VAR9->VAR14 + FUN5(VAR6));

return 0;
}