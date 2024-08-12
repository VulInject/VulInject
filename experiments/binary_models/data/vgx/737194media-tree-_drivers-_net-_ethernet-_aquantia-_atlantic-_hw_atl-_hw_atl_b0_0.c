static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5 = 0;
unsigned int VAR6;


FUN2(VAR2, 1);
FUN3(VAR2, 1);
if (VAR5 < 0)
goto VAR7;


FUN4(VAR2, 1);
FUN5(VAR2, 1);
if (VAR5 < 0)
goto VAR7;


FUN6(VAR2, 0xFFFFFFFFU);
if (VAR5 < 0)
goto VAR7;


{
unsigned int VAR8 = (8U < VAR9) ? 0x3U :
((4U < VAR9) ? 0x2U :
((2U < VAR9) ? 0x1U : 0x0));

for (VAR6 = 0; VAR6 < VAR10; VAR6++)
FUN7(VAR2, VAR8, VAR6);

FUN8(VAR2, 0x61AU);
FUN9(VAR2, 0);
FUN10(VAR2, 2);

FUN11(VAR2, 1U);

FUN12(VAR2, 2U);

FUN13(VAR2, 0U);

FUN14(VAR2, 10U);

FUN15(VAR2, 1U);

FUN16(VAR2, VAR4->VAR11 ? 0xFFFFFFFFU : 0U);
}
VAR5 = FUN17(VAR2);

VAR7:
return VAR5;
}