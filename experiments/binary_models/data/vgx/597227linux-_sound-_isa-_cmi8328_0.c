static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
pm_message_t VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8;

if (!VAR6)	
return 0;
VAR8 = VAR6->VAR9;
FUN3(VAR8->VAR10, VAR8->VAR11);
FUN4(VAR6, VAR12);
VAR8->VAR13->FUN5(VAR8->VAR13);

return 0;
}