int
FUN1(struct VAR1 *VAR2, uint32_t VAR3, uint64_t VAR4,
uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
uint64_t VAR8[3];
uint64_t VAR9[5];
uint32_t VAR10;
int VAR11;


VAR10 = FUN2(FUN3(VAR9));
VAR10 |= FUN4(0, VAR12);
VAR10 |= FUN4(1, VAR13);
VAR10 |= FUN4(2, VAR12);
VAR10 |= FUN4(3, VAR13);
VAR10 |= FUN4(4, VAR12);
VAR9[0] = VAR3;
VAR9[1] = VAR4;
VAR9[2] = VAR5;
VAR9[3] = VAR6;
VAR9[4] = VAR7;

FUN5();


VAR11 = FUN6(VAR2, VAR14,
VAR15, 0x01,
VAR10, VAR9, FUN3(VAR9), VAR8);

FUN5();


if (VAR11 == 0)
VAR11 = VAR8[0];

return VAR11;
}

struct VAR16 {
uint32_t VAR17;
uint32_t VAR18;
uint32_t VAR19;
uint32_t VAR20;
uint32_t VAR21;
uint32_t VAR22;
uint32_t VAR23;
};