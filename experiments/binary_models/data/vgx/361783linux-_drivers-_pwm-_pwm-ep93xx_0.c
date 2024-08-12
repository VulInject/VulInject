static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;
int VAR4;

VAR3 = FUN2(&VAR2->VAR5, sizeof(*VAR3), VAR6);
if (!VAR3)
return -VAR7;

VAR3->VAR8 = FUN3(VAR2, 0);
if (FUN4(VAR3->VAR8))
return FUN5(VAR3->VAR8);

VAR3->VAR9 = FUN6(&VAR2->VAR5, "");
if (FUN4(VAR3->VAR9))
return FUN5(VAR3->VAR9);

VAR3->VAR10.VAR5 = &VAR2->VAR5;
VAR3->VAR10.VAR11 = &VAR12;
VAR3->VAR10.VAR13 = 1;

VAR4 = FUN7(&VAR2->VAR5, &VAR3->VAR10);
if (VAR4 < 0)
return VAR4;

return 0;
}