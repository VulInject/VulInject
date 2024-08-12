static void FUN1(VAR1 *VAR2, const void *VAR3, VAR4 *VAR5,
VAR6 *VAR7, void *VAR8, const uint64_t VAR9, const VAR10 *VAR11, const uint8_t VAR12)
{
FUN2();

const VAR13 *VAR14 = (const VAR13 *)VAR3;
const VAR15 *VAR16 = VAR14->VAR16;
const int VAR17 = VAR14->VAR17;

uint32_t VAR18 = 0;
while(1) {


struct DnsQueryGetDataArgs VAR19 = { VAR18, VAR8 };
VAR20 *VAR21 = FUN3(VAR2, VAR14->VAR22, VAR7, &VAR19, VAR17);
if (VAR21 == NULL)
break;

if (VAR21->VAR23 >= VAR16->VAR24) {
(void)VAR25[VAR16->VAR26].FUN4(VAR16,
&VAR2->VAR27, &VAR2->VAR28,
VAR21->VAR29, VAR21->VAR23);
FUN5(VAR2, VAR21->VAR23);
}

VAR18++;
}
}