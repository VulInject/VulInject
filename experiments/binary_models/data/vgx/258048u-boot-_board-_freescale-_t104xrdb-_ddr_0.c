int FUN1(void)
{
phys_size_t VAR1;

FUN2("");
VAR1 = FUN3();
VAR1 =  FUN4();
VAR1 = FUN5(VAR1 / 0x100000);
VAR1 *= 0x100000;

FUN6();

VAR2->VAR3 = VAR1;

return 0;
}