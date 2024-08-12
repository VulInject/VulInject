static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
fdt_addr_t VAR5;
u32 VAR6;
ulong VAR7 = FUN3(VAR2);

VAR5 = FUN4(VAR2);
if (VAR5 == VAR8)
return -VAR9;
VAR4->VAR10 = FUN5(VAR5, 0);
VAR6 = FUN6(VAR4, &VAR4->VAR10[0].VAR11);

if (VAR6 != VAR12[VAR7]) {
u32 VAR13, VAR14;
VAR13 = VAR6 & 0xffff;
VAR14 = (VAR6 >> 16) & 0xffff;
FUN7("", VAR13, VAR14);
return -VAR15;
}

FUN7("", VAR16[VAR7]);

return 0;
}