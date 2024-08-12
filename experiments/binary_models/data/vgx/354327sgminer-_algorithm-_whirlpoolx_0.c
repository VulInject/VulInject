int FUN1(unsigned char *VAR1, const unsigned char *VAR2, uint32_t VAR3)
{
uint32_t VAR4, VAR5 = FUN2(((const VAR6 *)VAR2)[7]);
uint32_t VAR7[20], VAR8[8];

FUN3(VAR7, (const VAR6 *)VAR1, 19);
VAR7[19] = FUN4(VAR3);

FUN5(VAR8, VAR7);
VAR4 = FUN6(VAR8[7]);

FUN7(VAR9, "",
(long unsigned int)VAR5,
(long unsigned int)VAR10,
(long unsigned int)VAR4);
if (VAR4 > VAR10)
return -1;
if (VAR4 > VAR5)
return 0;
return 1;
}