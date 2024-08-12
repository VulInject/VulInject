int FUN1(void)
{
const u32 VAR1 = 0x7;
const u32 VAR2 = 0x10;
u8 VAR3[VAR2];
int VAR4;

VAR4 = FUN2(VAR1, VAR2, VAR3);
if (VAR4)
return VAR4;

VAR4 = FUN3(VAR3, VAR2);
if (VAR4)
return VAR4;

VAR4 = FUN4();
if (VAR4)
return VAR4;

FUN5();

return 0;
}