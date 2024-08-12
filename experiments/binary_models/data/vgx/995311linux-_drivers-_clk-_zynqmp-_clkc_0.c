static int FUN1(u32 VAR1, u32 VAR2,
struct VAR3 *VAR4)
{
struct zynqmp_pm_query_data VAR5 = {0};
u32 VAR6[VAR7];
int VAR8;

VAR5.VAR9 = VAR10;
VAR5.VAR11 = VAR1;
VAR5.VAR12 = VAR2;

VAR8 = FUN2(VAR5, VAR6);
memcpy(VAR4, &VAR6[1], sizeof(*VAR4));

return VAR8;
}