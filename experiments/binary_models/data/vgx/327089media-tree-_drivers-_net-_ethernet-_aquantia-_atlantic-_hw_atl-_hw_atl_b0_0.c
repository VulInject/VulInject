static int FUN1(struct VAR1 *VAR2)
{
u32 VAR3 = 0U;
u32 VAR4 = 0U;
unsigned int VAR5 = 0U;
bool VAR6 = false;


FUN2(VAR2, 0x0U);
FUN3(VAR2, 0xA);


FUN4(VAR2, 0U);


FUN5(VAR2, 0U);
FUN6(VAR2, 0U);

FUN7(VAR2, 0xFFF, 0U);
FUN8(VAR2, 0x64, 0U);
FUN9(VAR2, 0x50, 0U);
FUN10(VAR2, 0x1E, 0U);


VAR4 = VAR7;

FUN11(VAR2, VAR4, VAR3);
FUN12(VAR2,
(VAR4 * (1024 / 32U) * 66U) /
100U, VAR3);
FUN13(VAR2,
(VAR4 * (1024 / 32U) * 50U) /
100U, VAR3);


VAR3 = 0;
VAR6 = (VAR8 & VAR2->VAR9->VAR10);
VAR4 = VAR11;

FUN14(VAR2, VAR4, VAR3);
FUN15(VAR2,
(VAR4 *
(1024U / 32U) * 66U) /
100U, VAR3);
FUN16(VAR2,
(VAR4 *
(1024U / 32U) * 50U) /
100U, VAR3);
FUN17(VAR2, VAR6 ? 1U : 0U, VAR3);


for (VAR5 = 8U; VAR5--;)
FUN18(VAR2, VAR5, 0U);

return FUN19(VAR2);
}