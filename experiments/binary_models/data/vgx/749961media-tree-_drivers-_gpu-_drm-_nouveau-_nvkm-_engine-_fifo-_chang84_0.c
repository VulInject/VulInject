int
FUN1(struct VAR1 *VAR2, u64 VAR3, u64 VAR4,
const struct VAR5 *VAR6,
struct VAR7 *VAR8)
{
struct VAR9 *VAR10 = VAR2->VAR11.VAR12.VAR13.VAR10;
int VAR14;

VAR14 = FUN2(&VAR15, &VAR2->VAR11,
0x10000, 0x1000, false, VAR3, VAR4,
(1ULL << VAR16) |
(1ULL << VAR17) |
(1ULL << VAR18) |
(1ULL << VAR19) |
(1ULL << VAR20) |
(1ULL << VAR21) |
(1ULL << VAR22) |
(1ULL << VAR23) |
(1ULL << VAR24) |
(1ULL << VAR25) |
(1ULL << VAR26) |
(1ULL << VAR27) |
(1ULL << VAR28) |
(1ULL << VAR29),
0, 0xc00000, 0x2000, VAR6, &VAR8->VAR11);
VAR8->VAR2 = VAR2;
if (VAR14)
return VAR14;

VAR14 = FUN3(VAR10, 0x0200, 0, true, VAR8->VAR11.VAR30,
&VAR8->VAR31);
if (VAR14)
return VAR14;

VAR14 = FUN3(VAR10, 0x4000, 0, false, VAR8->VAR11.VAR30,
&VAR8->VAR32);
if (VAR14)
return VAR14;

VAR14 = FUN3(VAR10, 0x1000, 0x400, true, VAR8->VAR11.VAR30,
&VAR8->VAR33);
if (VAR14)
return VAR14;

VAR14 = FUN3(VAR10, 0x100, 0x100, true, VAR8->VAR11.VAR30,
&VAR8->VAR34);
if (VAR14)
return VAR14;

VAR14 = FUN4(VAR10, 0x8000, 16, VAR8->VAR11.VAR30, &VAR8->VAR35);
if (VAR14)
return VAR14;

return FUN5(VAR8->VAR11.VAR3, &VAR8->VAR3, VAR8->VAR32);
}