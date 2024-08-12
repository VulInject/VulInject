static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
struct VAR6 *VAR7 = VAR5->VAR7;
u32 VAR8;


VAR8 = FUN2(VAR7, VAR9);
FUN3(VAR7, VAR9, VAR8);

return VAR10;
}

static struct dw_pcie_host_ops VAR11 = {
.VAR12 = VAR13,
};