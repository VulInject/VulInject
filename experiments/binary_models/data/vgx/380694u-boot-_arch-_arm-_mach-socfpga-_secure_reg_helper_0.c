int FUN1(u32 VAR1, u32 VAR2)
{
int VAR3;
u64 VAR4[2];

phys_addr_t VAR5;
VAR3 = FUN2(VAR1, &VAR5);
if (VAR3)
return VAR3;

VAR4[0] = (VAR6)VAR5;
VAR4[1] = VAR2;
return FUN3(VAR7, VAR4, 2, NULL, 0);
}