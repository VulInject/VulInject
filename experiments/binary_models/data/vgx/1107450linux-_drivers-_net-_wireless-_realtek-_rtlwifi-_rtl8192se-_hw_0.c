void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(FUN2(VAR2));
u16 VAR7;

VAR4->VAR8->VAR9->FUN4(VAR2, VAR10,
&VAR6->VAR11);
VAR7 = 0x0e0e;
VAR4->VAR8->VAR9->FUN4(VAR2, VAR12, (VAR13 *)&VAR7);

}