static int FUN1(struct VAR1 *VAR2, pm_message_t VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7;

if (VAR5 && FUN3(VAR5)) {
VAR7 = FUN4(VAR5);
FUN5(VAR5);
FUN6(VAR7);
}

return 0;
}