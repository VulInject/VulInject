static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR8 *VAR9 = &VAR2->VAR9;

int VAR10 = VAR4->VAR11 ? 0x08: 0x02;

void VAR12 *VAR13 = VAR4->VAR14->VAR15[0]->VAR16.VAR17;
void VAR12 *VAR18 = VAR13 + 0x11;
void VAR12 *VAR19 = VAR13 + 0x20 + (4 * VAR4->VAR11);


if (VAR9->VAR20 == VAR21 || (VAR9->VAR22 & VAR23)) {
FUN2(0, VAR19);
FUN3(FUN4(VAR18) & ~VAR10, VAR18);
}

if (VAR6->VAR24 > VAR25)
FUN3(FUN4(VAR18) & ~VAR10, VAR18);
FUN5(VAR2);
FUN6(VAR4, VAR6);
}