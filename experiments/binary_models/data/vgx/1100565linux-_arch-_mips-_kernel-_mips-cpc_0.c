static FUN1(VAR1, VAR2);

static FUN1(unsigned long, VAR3);

phys_addr_t VAR4 FUN2(void)
{
struct VAR5 *VAR6;
struct resource VAR7;
int VAR8;

VAR6 = FUN3(VAR9, NULL, "");
if (VAR6) {
VAR8 = FUN4(VAR6, 0, &VAR7);
FUN5(VAR6);
if (!VAR8)
return VAR7.VAR10;
}

return 0;
}