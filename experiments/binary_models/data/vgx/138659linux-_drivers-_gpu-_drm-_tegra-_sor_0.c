static void FUN1(struct VAR1 *VAR2)
{
u32 VAR3 = 0x08, VAR4 = 0, VAR5;


VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR8);
VAR5 &= ~VAR9;
FUN3(VAR2, VAR5, VAR2->VAR6->VAR7->VAR8);

VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR10);
VAR5 |= VAR11;
FUN3(VAR2, VAR5, VAR2->VAR6->VAR7->VAR10);

while (VAR3) {
VAR4 |= VAR3;

VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR10);
VAR5 &= ~VAR12;
VAR5 |= FUN4(VAR4);
FUN3(VAR2, VAR5, VAR2->VAR6->VAR7->VAR10);

FUN5(100, 200);

VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR10);
if (VAR5 & VAR13)
VAR4 &= ~VAR3;

VAR3 >>= 1;
}

VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR10);
VAR5 &= ~VAR12;
VAR5 |= FUN4(VAR4);
FUN3(VAR2, VAR5, VAR2->VAR6->VAR7->VAR10);


VAR5 = FUN2(VAR2, VAR2->VAR6->VAR7->VAR8);
VAR5 |= VAR9;
FUN3(VAR2, VAR5, VAR2->VAR6->VAR7->VAR8);
}