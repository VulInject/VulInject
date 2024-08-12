static int FUN1(struct VAR1 *VAR2, pm_message_t VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = FUN3(VAR5);

FUN4(VAR5, "");
VAR7->VAR8 = true;
FUN5(VAR7);
if (VAR5->VAR9->VAR10)
VAR5->VAR9->FUN6(VAR5);
FUN7(10);
FUN8(VAR5);
return 0;
}