static void FUN1(void VAR1 *VAR2, int VAR3,
int VAR4)
{
u32 VAR5;

VAR5 = FUN2(VAR2 + FUN3(VAR3));

if (VAR4 == VAR6) {
VAR5 |= VAR6;
} else {

if (VAR4 <= 64)
VAR5 |= VAR7;
else if (VAR4 <= 96)
VAR5 |= VAR8;
else if (VAR4 <= 128)
VAR5 |= VAR9;
else if (VAR4 <= 192)
VAR5 |= VAR10;
else if (VAR4 <= 256)
VAR5 |= VAR11;
else if (VAR4 <= 384)
VAR5 |= VAR12;
else
VAR5 |= VAR13;
}


FUN4(VAR5, VAR2 + FUN3(VAR3));
}