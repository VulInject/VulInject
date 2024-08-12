static int FUN1(pm_callback_t VAR1, struct VAR2 *VAR3,
pm_message_t VAR4, char *VAR5)
{
ktime_t VAR6;
int VAR7;

if (!VAR1)
return 0;

VAR6 = FUN2(VAR3);

FUN3(VAR3, VAR4, VAR5);
FUN4(VAR3, VAR5, VAR4.VAR8);
VAR7 = FUN5(VAR3);
FUN6(VAR3, VAR7);
FUN7(VAR1, VAR7);

FUN8(VAR3, VAR6, VAR7, VAR4, VAR5);

return VAR7;
}