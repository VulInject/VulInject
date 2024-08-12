int FUN1(struct VAR1 *VAR2,
u32 VAR3,
u16 VAR4)
{
struct mc_command VAR5 = { 0 };


VAR5.VAR6 = FUN2(VAR7,
VAR3,
VAR4);


return FUN3(VAR2, &VAR5);
}